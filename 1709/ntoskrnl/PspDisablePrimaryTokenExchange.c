/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x14053F3DC
 * Callers:
 *     PspSystemThreadStartup @ 0x140128180 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x1401261EC (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x14017B194 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     MmSynchronizeAddressPolicy @ 0x14043D634 (MmSynchronizeAddressPolicy.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x140513270 (SeTokenIsAdmin.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rdi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // esi
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 768), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( ((unsigned int)KeKvaShadowingActive() || (KeGetCurrentPrcb()->BpbFeatures & 2) != 0)
    && (*(_DWORD *)(v1 + 1740) & 0x4000) == 0 )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( (*(_BYTE *)(v1 + 720) & 1) != 0 )
      v3 = 1;
    if ( v3 )
      *(_QWORD *)(v1 + 2104) = 0LL;
    if ( (unsigned int)KeKvaShadowingActive() )
    {
      if ( v3 )
      {
        *(_BYTE *)(v1 + 640) = 1;
        _InterlockedOr(v4, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu) && *(_BYTE *)(v1 + 640) == 1 )
        MmSynchronizeAddressPolicy((struct _KPROCESS *)v1);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu);
    }
  }
}
