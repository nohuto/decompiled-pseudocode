/*
 * XREFs of SeExchangePrimaryToken @ 0x1406F6594
 * Callers:
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 * Callees:
 *     SepSetTrustLevelForProcessToken @ 0x14006626C (SepSetTrustLevelForProcessToken.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenSessionById @ 0x1404A19EC (SepSetTokenSessionById.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(struct _KPROCESS *a1, __int64 a2, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  int SessionId; // esi
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // r14d
  PVOID v12; // rcx
  unsigned int v13; // ecx
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  char v17; // [rsp+68h] [rbp+10h] BYREF
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
    SessionObjectById = (void *)MmGetSessionObjectById();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v16, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v16, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v11 = SepSetTrustLevelForProcessToken(a2, (__int64)a1, &v17);
  if ( v11 < 0 )
  {
    _InterlockedOr(v16, 0);
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
      v11 = SepSetTokenLowboxNumber(a2, *(_QWORD *)(a2 + 784));
      if ( v11 < 0 )
      {
        _InterlockedOr(v16, 0);
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
  _InterlockedOr(v16, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken((__int64)a1, a2);
  ObfReferenceObject((PVOID)a2);
  v14 = ObFastReplaceObject((volatile __int64 *)&a1[1].Affinity.Bitmap[5], a2);
  if ( !v14 )
    return 3221225596LL;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 48), 1u);
  _InterlockedOr(v16, 0);
  *(_BYTE *)(v14 + 204) = 0;
  _InterlockedOr(v16, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 48));
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v14;
  return result;
}
