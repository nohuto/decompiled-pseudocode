/*
 * XREFs of ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x180173A04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173A70 (-SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionPointLight::SetOffset(CCompositionPointLight *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 38) != a2 || *((float *)this + 39) != a3 || *((float *)this + 40) != a4 )
  {
    *((float *)this + 38) = a2;
    *((float *)this + 39) = a3;
    *((float *)this + 40) = a4;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 6LL);
  }
}
