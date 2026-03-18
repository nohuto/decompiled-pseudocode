/*
 * XREFs of ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1801744E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174570 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionSpotLight::SetOuterConeColor(
        CCompositionSpotLight *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( *((float *)this + 46) != a2
    || *((float *)this + 47) != a3
    || *((float *)this + 48) != a4
    || *((float *)this + 49) != a5 )
  {
    *((float *)this + 46) = a2;
    *((float *)this + 47) = a3;
    *((float *)this + 48) = a4;
    *((float *)this + 49) = a5;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 12LL);
  }
}
