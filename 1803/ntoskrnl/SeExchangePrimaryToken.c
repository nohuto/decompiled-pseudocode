/*
 * XREFs of SeExchangePrimaryToken @ 0x140640AD0
 * Callers:
 *     PspAssignPrimaryToken @ 0x1406408AC (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     SepSetTrustLevelForProcessToken @ 0x14006BB54 (SepSetTrustLevelForProcessToken.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  int SessionId; // esi
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // r14d
  PVOID v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  struct _KTHREAD *v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId == -1 )
  {
    SessionId = 0;
  }
  else if ( !SeTokenDoesNotTrackSessionObject )
  {
    SessionObjectById = MmGetSessionObjectById();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v18, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v18, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v11 = SepSetTrustLevelForProcessToken(a2, a1, &v19);
  if ( v11 < 0 )
  {
    _InterlockedOr(v18, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( !SessionObjectById )
      return (unsigned int)v11;
    v12 = SessionObjectById;
LABEL_14:
    ObfDereferenceObject(v12);
    return (unsigned int)v11;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 120);
    if ( v13 != SessionId )
    {
      SepDereferenceLowBoxNumberEntry(v13, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      SepSetTokenSessionById(a2, SessionId, 1, (__int64)SessionObjectById, &Object);
      v11 = SepSetTokenLowboxNumber(a2, *(_QWORD *)(a2 + 784), v14, v15);
      if ( v11 < 0 )
      {
        _InterlockedOr(v18, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KeLeaveCriticalRegion();
        v12 = Object;
        if ( !Object )
          return (unsigned int)v11;
        goto LABEL_14;
      }
    }
  }
  SepSetTokenSessionById(a2, SessionId, 1, (__int64)SessionObjectById, &Object);
  _InterlockedOr(v18, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  ObfReferenceObject((PVOID)a2);
  v16 = ObFastReplaceObject((volatile __int64 *)(a1 + 856), a2);
  if ( !v16 )
    return 3221225596LL;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 48), 1u);
  _InterlockedOr(v18, 0);
  *(_BYTE *)(v16 + 204) = 0;
  _InterlockedOr(v18, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v16;
  return result;
}
