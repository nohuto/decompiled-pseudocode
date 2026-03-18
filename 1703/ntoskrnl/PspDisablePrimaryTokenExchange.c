/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1404F8A10
 * Callers:
 *     PspSystemThreadStartup @ 0x14011FEF0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x14002F5E0 (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeSynchronizeAddressPolicy @ 0x14017BA00 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x14017BC94 (KeKvaShadowingActive.c)
 *     MmSynchronizeAddressPolicy @ 0x14041DA50 (MmSynchronizeAddressPolicy.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x140560050 (SeTokenIsAdmin.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // edi
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 768), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( ((unsigned int)KeKvaShadowingActive() || (KeGetCurrentPrcb()->BpbFeatures & 2) != 0)
    && (*(_DWORD *)(v1 + 2064) & 4) == 0 )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( *(_QWORD *)(v1 + 720) )
      v3 = 1;
    if ( v3 )
    {
      *(_BYTE *)(v1 + 640) = 1;
      _InterlockedOr(v4, 0);
    }
    if ( *(_BYTE *)(v1 + 640) == 1 )
      *(_QWORD *)(v1 + 2072) = 0LL;
    KeSynchronizeAddressPolicy(v1);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2064), 2u) && *(_BYTE *)(v1 + 640) == 1 )
      MmSynchronizeAddressPolicy((struct _KPROCESS *)v1);
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 2064), 2u);
  }
}
