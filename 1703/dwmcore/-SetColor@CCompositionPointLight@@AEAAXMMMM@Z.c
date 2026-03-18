/*
 * XREFs of ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x180173980
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173A70 (-SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionPointLight::SetColor(CCompositionPointLight *this, float a2, float a3, float a4, float a5)
{
  if ( *((float *)this + 31) != a2
    || *((float *)this + 32) != a3
    || *((float *)this + 33) != a4
    || *((float *)this + 34) != a5 )
  {
    *((float *)this + 31) = a2;
    *((float *)this + 32) = a3;
    *((float *)this + 33) = a4;
    *((float *)this + 34) = a5;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 4LL);
  }
}
