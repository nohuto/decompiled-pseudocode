/*
 * XREFs of ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012D4C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B470 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00112F4 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 * Callees:
 *     McTemplateK0pqIR1 @ 0x1C0028FDC (McTemplateK0pqIR1.c)
 */

void __fastcall VidSchiFlushGpuWorkEntries(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r9

  v4 = *((_QWORD *)a1 + 122);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 242);
    if ( v5 )
    {
      v6 = *((_QWORD *)a1 + 7);
      if ( !v6 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        LODWORD(v6) = (_DWORD)a1;
      if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqIR1(v4, v5, a3, v6, v5, v4);
      *((_DWORD *)a1 + 242) = 0;
    }
  }
}
