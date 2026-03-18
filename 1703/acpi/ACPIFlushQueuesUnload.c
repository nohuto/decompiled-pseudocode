/*
 * XREFs of ACPIFlushQueuesUnload @ 0x1C0045050
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C0045000 (ACPIFlushDeviceQueueCallback.c)
 *     ACPITableUnload @ 0x1C0057CD0 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIFlushQueuesUnload(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d

  result = 3221225473LL;
  v4 = a3 - 1;
  if ( !v4 )
    return ACPIBuildSpecialSynchronizationRequest((__int64)a1, (__int64)ACPIFlushDeviceQueueCallback, a2, 127, 1);
  if ( v4 == 1 )
    return ACPIDeviceInternalSynchronizeRequest(a1, (_SLIST_ENTRY *)ACPIFlushPowerQueueCallback, a2);
  return result;
}
