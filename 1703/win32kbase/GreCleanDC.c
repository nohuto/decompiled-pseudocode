/*
 * XREFs of GreCleanDC @ 0x1C0042380
 * Callers:
 *     UserThreadCallout @ 0x1C004ACF0 (UserThreadCallout.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = XDCOBJ::bCleanDC(v3, 0) != 0;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
