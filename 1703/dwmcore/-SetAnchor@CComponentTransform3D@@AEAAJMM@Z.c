/*
 * XREFs of ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18002C024
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x18002BAF4 (-ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18002AD1C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetAnchor(CComponentTransform3D *this, float a2, float a3)
{
  const struct D2DVector2 *v3; // rsi
  unsigned int v4; // edi
  int v7; // eax

  v3 = (CComponentTransform3D *)((char *)this + 152);
  v4 = 0;
  if ( *((float *)this + 38) != a2 || *((float *)this + 39) != a3 )
  {
    *(float *)v3 = a2;
    *((float *)this + 39) = a3;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v7 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 19LL, v3);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xFAu);
    else
      CResource::InvalidateAnimationSources(this, 0x13u);
  }
  return v4;
}
