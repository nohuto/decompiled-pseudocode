/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0114394
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020EBB8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
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
