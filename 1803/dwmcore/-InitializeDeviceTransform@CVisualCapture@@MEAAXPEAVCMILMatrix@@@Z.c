/*
 * XREFs of ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x18000CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CVisualCapture::InitializeDeviceTransform(CVisualCapture *this, struct CMILMatrix *a2)
{
  __int64 v3; // rcx
  _BYTE v4[64]; // [rsp+30h] [rbp-58h] BYREF
  int v5; // [rsp+70h] [rbp-18h]
  __int64 v6; // [rsp+90h] [rbp+8h] BYREF

  *((_WORD *)a2 + 32) = 32085;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  v3 = *((_QWORD *)this + 50);
  if ( v3 )
  {
    v5 = 0;
    CVisual::CalcEffectiveTransform(v3, 5LL, 0LL, &v6, v4, 0LL);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v4);
  }
}
