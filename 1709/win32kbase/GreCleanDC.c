/*
 * XREFs of GreCleanDC @ 0x1C0080350
 * Callers:
 *     UserThreadCallout @ 0x1C003B840 (UserThreadCallout.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall GreCleanDC(struct HOBJ__ *a1)
{
  BOOL v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = v3[0] && (unsigned int)XDCOBJ::bCleanDC(v3);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return v1;
}
