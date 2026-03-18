/*
 * XREFs of SeSetSessionIdToken @ 0x140563A28
 * Callers:
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140728644 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     SepSetTokenSessionById @ 0x14048C960 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140563EE0 (SepSetTokenLowboxNumber.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (void *)MmGetSessionObjectById(SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v9, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v8 = *((_QWORD *)Token + 135);
      if ( v8 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v8);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &Object);
      SessionObjectById = 0LL;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber(Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v9, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
