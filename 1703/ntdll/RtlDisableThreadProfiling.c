/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800D44B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(unsigned __int64 a1)
{
  int v2; // ebx

  v2 = ZwSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
