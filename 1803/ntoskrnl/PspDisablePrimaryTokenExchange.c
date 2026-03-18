/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1404B8C60
 * Callers:
 *     PspSystemThreadStartup @ 0x140098F60 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x140040C88 (KeKvaShadowingActive.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     KeSynchronizeAddressPolicy @ 0x1400A3DEC (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x1400C5D40 (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
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
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu)
        && *(_BYTE *)(v1 + 640) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1);
      }
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu);
    }
  }
}
