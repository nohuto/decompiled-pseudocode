/*
 * XREFs of ?CalcDeviceTransformDelta@CGammaBlendLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180176630
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F28C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CGammaBlendLayer::CalcDeviceTransformDelta(
        CGammaBlendLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetTranslation(a3, (float)-*((_DWORD *)this + 4), (float)-*((_DWORD *)this + 5), 0.0);
  return 0LL;
}
