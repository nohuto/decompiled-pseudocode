/*
 * XREFs of ?SetOffset@CColorGradientStop@@IEAAXM@Z @ 0x180072230
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180159DB0 (-SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CColorGradientStop::SetOffset(CColorGradientStop *this, float a2)
{
  double (__fastcall *v3)(CColorGradientStop *, __int64, CColorGradientStop *); // rax

  if ( a2 != *((float *)this + 14) )
  {
    *((float *)this + 14) = a2;
    CResource::InvalidateAnimationSources(this, 0);
    v3 = *(double (__fastcall **)(CColorGradientStop *, __int64, CColorGradientStop *))(*(_QWORD *)this + 64LL);
    if ( (char *)v3 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 10LL, this);
    else
      v3(this, 10LL, this);
  }
}
