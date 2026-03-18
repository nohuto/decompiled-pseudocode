/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C010C850
 * Callers:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002A52C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C002A6D4 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02975F0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C0032264 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  __int64 v1; // rdx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(_QWORD *)a1;
  if ( v1 )
  {
    if ( !*((_QWORD *)a1 + 2) )
      PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v2, v1);
  }
}
