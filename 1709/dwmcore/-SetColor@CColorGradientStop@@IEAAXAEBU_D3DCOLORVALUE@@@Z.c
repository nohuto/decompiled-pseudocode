/*
 * XREFs of ?SetColor@CColorGradientStop@@IEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800721C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180159DB0 (-SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CColorGradientStop::SetColor(CColorGradientStop *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v3; // rax
  double (__fastcall *v4)(CColorGradientStop *, __int64, CColorGradientStop *); // rax

  v3 = *(_QWORD *)((char *)this + 60) - *(_QWORD *)&a2->r;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)this + 68) - *(_QWORD *)&a2->b;
  if ( v3 )
  {
    *(struct _D3DCOLORVALUE *)((char *)this + 60) = *(const struct _D3DCOLORVALUE *)&a2->r;
    CResource::InvalidateAnimationSources(this, 1u);
    v4 = *(double (__fastcall **)(CColorGradientStop *, __int64, CColorGradientStop *))(*(_QWORD *)this + 64LL);
    if ( (char *)v4 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 10LL, this);
    else
      v4(this, 10LL, this);
  }
}
