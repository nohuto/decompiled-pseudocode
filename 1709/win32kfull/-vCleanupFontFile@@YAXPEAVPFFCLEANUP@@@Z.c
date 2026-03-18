/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0040898 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00B459C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C0293CC0 (-CleanUpPFF@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C003DF5C (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  struct PDEV *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 1);
  v5 = *(struct PDEV **)a1;
  if ( v4 )
  {
    if ( !*((_QWORD *)a1 + 2) )
      PDEVOBJ::UnloadFontFile(&v5, v4, a3, a4);
  }
}
