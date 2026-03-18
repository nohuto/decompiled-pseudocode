/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011431C
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C01141B0 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020EBB8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020EC5C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v5; // rdi
  unsigned __int16 v6; // cx
  __int64 DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    if ( a2 )
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL);
    else
      v6 = *(_WORD *)(*(_QWORD *)a1 + 372LL);
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(v6);
    GreSelectFont((__int64)v5, *(_QWORD *)(DPIMETRICSForDpi + 56));
    return v5;
  }
  return result;
}
