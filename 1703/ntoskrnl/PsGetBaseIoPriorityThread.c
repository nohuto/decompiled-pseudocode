/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14004AA70
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 *     PfSnCheckLoggingForThread @ 0x14004AF54 (PfSnCheckLoggingForThread.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14011EE4C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1736) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
