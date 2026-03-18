/*
 * XREFs of ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18017351C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionAmbientLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801732B0 (-SetProperty@CCompositionAmbientLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173620 (-SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CCompositionDistantLight::SetColor(
        CCompositionDistantLight *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( *((float *)this + 28) != a2
    || *((float *)this + 29) != a3
    || *((float *)this + 30) != a4
    || *((float *)this + 31) != a5 )
  {
    *((float *)this + 28) = a2;
    *((float *)this + 29) = a3;
    *((float *)this + 30) = a4;
    *((float *)this + 31) = a5;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 1LL);
  }
}
