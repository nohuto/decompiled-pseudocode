/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18002BCF8
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x18002BBBC (-ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x18002AC58 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(CComponentTransform3D *this, float a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 53) != a2 )
  {
    *((float *)this + 53) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0xCu, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x18Cu);
    }
    else
    {
      CResource::InvalidateAnimationSources(this, 0xCu);
      CResource::InvalidateAnimationSources(this, 0xDu);
    }
  }
  return v2;
}
