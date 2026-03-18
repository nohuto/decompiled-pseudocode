/*
 * XREFs of SeSetSessionIdToken @ 0x140546054
 * Callers:
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078C9C0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v11, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v10 = *((_QWORD *)Token + 135);
      if ( v10 )
      {
        SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30), v10);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &Object);
      SessionObjectById = 0LL;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98), v7, v8);
  }
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
