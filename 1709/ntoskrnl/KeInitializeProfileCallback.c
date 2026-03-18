/*
 * XREFs of KeInitializeProfileCallback @ 0x1406D8620
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140596E88 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x14074764C (EtwpSetPmcProfileSource.c)
 *     KiInitializeCacheErrataSupport @ 0x14086BD34 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     memset @ 0x140192F40 (memset.c)
 */

unsigned __int16 __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset(a1, 0, 0xF8uLL);
  *a1 = 16252945;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_BYTE *)a1 + 242) = 0;
  *((_WORD *)a1 + 120) = a4;
  return KeCopyAffinityEx((__int64)(a1 + 18), (unsigned __int16 *)KeActiveProcessors);
}
