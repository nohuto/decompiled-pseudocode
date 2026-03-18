/*
 * XREFs of ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C0293CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 */

void __fastcall CleanUpPFF(struct PFF *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct PFF *v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a1;
  PFFOBJ::vPFFC_Delete((PFFOBJ *)&v6, (struct PFFCLEANUP *)v7, a3);
  vCleanupFontFile((struct PFFCLEANUP *)v7, v3, v4, v5);
}
