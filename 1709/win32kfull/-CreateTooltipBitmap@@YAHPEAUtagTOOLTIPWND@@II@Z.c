/*
 * XREFs of ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020EBB8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011431C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0114394 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall CreateTooltipBitmap(struct tagTOOLTIPWND *a1, unsigned int a2, unsigned int a3)
{
  HDC TooltipDC; // rbx
  __int64 v8; // rcx

  if ( !*((_QWORD *)a1 + 2) )
    return 0LL;
  DestroyTooltipBitmap(a1);
  TooltipDC = GetTooltipDC(a1, 0LL);
  *((_QWORD *)a1 + 3) = GreCreateCompatibleBitmapInternal(TooltipDC, a2, a3, 0, 0LL, 0LL);
  _ReleaseDC(TooltipDC);
  v8 = *((_QWORD *)a1 + 3);
  if ( !v8 )
    return 0LL;
  GreSetBitmapOwner(v8, 0LL);
  GreSelectBitmap(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
  return 1LL;
}
