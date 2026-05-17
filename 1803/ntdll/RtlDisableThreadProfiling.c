/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800C8B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 */

__int64 __fastcall RtlDisableThreadProfiling(unsigned __int64 a1)
{
  int v2; // ebx

  v2 = ZwSetInformationThread();
  if ( v2 >= 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return (unsigned int)v2;
}
