/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C010DF6C
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C010DF14 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020CD28 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020CF5C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HDC v8; // rsi
  unsigned __int16 v9; // cx
  __int64 v10; // [rsp+20h] [rbp-8h]

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v8 = result;
  if ( result )
  {
    if ( a2 )
      v9 = *(_WORD *)(*((_QWORD *)a2 + 5) + 128LL);
    else
      v9 = *(_WORD *)(*(_QWORD *)a1 + 372LL);
    GetDPIMETRICSForDpi(v9, v5, v6, v7, v10);
    GreSelectFontInternal(v8);
    return v8;
  }
  return result;
}
