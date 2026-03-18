/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C008E550
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(struct HOBJ__ *a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1, 0);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v3[0] + 48LL), 2u, 1);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return DisplayDC;
}
