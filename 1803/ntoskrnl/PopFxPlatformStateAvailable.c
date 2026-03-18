/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140275BA8
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140272BCC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x140276760 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14027A6C4 (PopUpdateNonAttributedCpuTimeReference.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

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
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopUpdateNonAttributedCpuTimeReference(0LL);
      return PopDeepSleepClearDisengageReason(6);
    }
    else
    {
      LOBYTE(a1) = 1;
      PopFxSetDripsBlockedByDeviceActivity(a1);
      LOBYTE(v6) = 1;
      PopUpdateNonAttributedCpuTimeReference(v6);
      return PopDeepSleepSetDisengageReason(6);
    }
  }
  return result;
}
