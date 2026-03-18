/*
 * XREFs of ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180094CD0
 * Callers:
 *     ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001F970 (-SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180095284 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x18002AC58 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetTopLeftRadiusY(CRectangleGeometry *this, float a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 31) != a2 )
  {
    *((float *)this + 31) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 6u, a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1FBu);
    else
      CResource::InvalidateAnimationSources(this, 6LL);
  }
  return v2;
}
