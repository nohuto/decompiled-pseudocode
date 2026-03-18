/*
 * XREFs of ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x180174268
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173A70 (-SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174570 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionPointLight::SetAttenuation0(CCompositionPointLight *this, float a2)
{
  if ( *((float *)this + 28) != a2 )
  {
    *((float *)this + 28) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 1LL);
  }
}
