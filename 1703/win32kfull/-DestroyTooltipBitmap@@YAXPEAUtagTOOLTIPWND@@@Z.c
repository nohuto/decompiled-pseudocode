/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C010DFEC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020CD28 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyTooltipBitmap(struct tagTOOLTIPWND *a1)
{
  __int64 StockObject; // rax

  if ( *((_QWORD *)a1 + 3) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*((_QWORD *)a1 + 2), StockObject);
    GreDeleteObject(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
