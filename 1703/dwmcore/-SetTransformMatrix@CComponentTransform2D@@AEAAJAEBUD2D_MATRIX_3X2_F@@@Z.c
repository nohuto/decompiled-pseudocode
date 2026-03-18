/*
 * XREFs of ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC2C8
 * Callers:
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023A40 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x1800AC28C (-ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 * Callees:
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18002AF8C (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetTransformMatrix(
        CComponentTransform2D *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx

  *(struct D2D_MATRIX_3X2_F *)((char *)this + 108) = *a2;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  v5 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(this, v4, a2);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x16Bu);
  else
    CResource::InvalidateAnimationSources(this, 6LL);
  return v6;
}
