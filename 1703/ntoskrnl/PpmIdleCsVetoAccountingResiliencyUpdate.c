/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402286E4
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140228778 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  KIRQL v4; // al
  __int64 v5; // r9
  KIRQL v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = PpmPlatformStates;
  v2 = 0;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v5 = PpmPlatformStates;
    v6 = v4;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v7 = v2;
        LOBYTE(v7) = 2;
        v8 = 384LL * v2;
        v9 = v8 + v5 + 80;
        LOBYTE(v8) = a1;
        PpmIdleCsVetoAccountingUpdateBlock(v9, v7, v8);
        v5 = PpmPlatformStates;
        ++v2;
      }
      while ( v2 < *(_DWORD *)PpmPlatformStates );
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = v6;
    __writecr8(v6);
  }
  return result;
}
