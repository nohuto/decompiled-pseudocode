/*
 * XREFs of ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x180174434
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174570 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionSpotLight::SetOffset(CCompositionSpotLight *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 34) != a2 || *((float *)this + 35) != a3 || *((float *)this + 36) != a4 )
  {
    *((float *)this + 34) = a2;
    *((float *)this + 35) = a3;
    *((float *)this + 36) = a4;
    CResource::NotifyOnChanged(this, 11LL, 0LL);
    CResource::InvalidateAnimationSources(this, 9LL);
  }
}
