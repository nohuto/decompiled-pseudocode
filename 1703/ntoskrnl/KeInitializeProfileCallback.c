/*
 * XREFs of KeInitializeProfileCallback @ 0x1406AD320
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     KiInitializeCacheErrataSupport @ 0x140834BBC (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
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
