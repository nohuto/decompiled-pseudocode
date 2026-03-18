/*
 * XREFs of PopFxPlatformStateAvailable @ 0x14023E838
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14023B6D8 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140243650 (PopUpdateNonAttributedCpuTimeReference.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  v3 = (unsigned int)a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    PpmIdleCsVetoAccountingUpdateBlock(384 * v3 + PpmPlatformStates + 80, 1, a2);
    KxReleaseSpinLock(&PpmIdleVetoLock);
    __writecr8(v4);
  }
  result = PpmPlatformStates;
  if ( (_DWORD)v3 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6);
    }
    else
    {
      LOBYTE(a1) = 1;
      PopUpdateNonAttributedCpuTimeReference(a1);
      return PopDeepSleepSetDisengageReason(6);
    }
  }
  return result;
}
