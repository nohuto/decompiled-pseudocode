/*
 * XREFs of PopFxPlatformStateAvailable @ 0x14022B4C8
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x140149A84 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140228778 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14022F458 (PopUpdateNonAttributedCpuTimeReference.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(__int64 a1, char a2)
{
  _DWORD *v2; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v2 = (_DWORD *)PpmPlatformStates;
  v4 = (unsigned int)a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    PpmIdleCsVetoAccountingUpdateBlock(384 * v4 + PpmPlatformStates + 80, 1, a2);
    KxReleaseSpinLock(&PpmIdleVetoLock);
    __writecr8(v5);
    v2 = (_DWORD *)PpmPlatformStates;
  }
  result = (unsigned int)(*v2 - 1);
  if ( (_DWORD)v4 == (_DWORD)result )
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
