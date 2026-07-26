/*
 * XREFs of ndisDriverReinit @ 0x1C00BE800
 * Callers:
 *     <none>
 * Callees:
 *     ndisAoAcInitDisconnectedStandby @ 0x1C0050370 (ndisAoAcInitDisconnectedStandby.c)
 */

__int64 ndisDriverReinit()
{
  __int64 result; // rax

  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( (ndisAoAcCapable || ndisAoAcTest) && !ndisEnforceDisconnectedStandby )
    ndisAoAcInitDisconnectedStandby();
  result = MEMORY[0xFFFFF78000000014];
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
  return result;
}
