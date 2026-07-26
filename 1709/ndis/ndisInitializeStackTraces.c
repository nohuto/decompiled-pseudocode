/*
 * XREFs of ndisInitializeStackTraces @ 0x1C00C9764
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.DeviceQueue;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  HIBYTE(WPP_MAIN_CB.AlignmentRequirement) = 4;
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0;
  *(_WORD *)((char *)&WPP_MAIN_CB.AlignmentRequirement + 1) = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  LOBYTE(WPP_MAIN_CB.AlignmentRequirement) = result;
  return result;
}
