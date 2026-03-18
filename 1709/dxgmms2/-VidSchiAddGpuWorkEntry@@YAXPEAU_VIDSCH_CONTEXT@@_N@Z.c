/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C000DD78
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D944 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000EF38 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *((_DWORD *)a1 + 240) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( !*((_QWORD *)a1 + 121) )
    *((_QWORD *)a1 + 121) = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !a2 )
    PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
  *(LARGE_INTEGER *)(*((_QWORD *)a1 + 121) + 8LL * (unsigned int)(*((_DWORD *)a1 + 240))++) = PerformanceCounter;
}
