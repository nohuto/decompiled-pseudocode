/*
 * XREFs of ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x180094D50
 * Callers:
 *     ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001F970 (-SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x1800953B4 (-ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY.c)
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x18002AC58 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetBottom(CRectangleGeometry *this, float a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 29) != a2 )
  {
    *((float *)this + 29) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 4u, a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1CFu);
    else
      CResource::InvalidateAnimationSources(this, 4LL);
  }
  return v2;
}
