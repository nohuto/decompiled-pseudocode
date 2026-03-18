/*
 * XREFs of EtwTraceIdealProcessor @ 0x140253648
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14001A410 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140202EC0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceIdealProcessor(__int64 a1, __int16 a2, int a3, int a4)
{
  void *result; // rax
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v5[0] = *(_DWORD *)(a1 + 1600);
    v6 = v5;
    v8 = 0;
    v5[2] = a4;
    v5[1] = a3;
    v7 = 12;
    return EtwTraceKernelEvent((int)&v6, 1, 0x88000000, a2, 22026499);
  }
  return result;
}
