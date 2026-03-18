/*
 * XREFs of SeSetSessionIdToken @ 0x14046E808
 * Callers:
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406F0C24 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1404A19EC (SepSetTokenSessionById.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  __int64 v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (void *)MmGetSessionObjectById();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v10, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v9 = *((_QWORD *)Token + 135);
      if ( v9 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v7) = 1;
      SepSetTokenSessionById((_DWORD)Token, SessionId, v7, (_DWORD)SessionObjectById, (__int64)&Object);
      SessionObjectById = 0LL;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
