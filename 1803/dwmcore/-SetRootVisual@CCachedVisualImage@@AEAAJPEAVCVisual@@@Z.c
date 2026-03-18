/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180182A24
 * Callers:
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801827B4 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x1801903A4 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800B49F0 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(struct CResource **this, struct CVisual *a2)
{
  unsigned int v2; // edi
  CResource *v5; // rsi
  int v6; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 376) )
  {
    v5 = (CResource *)(this + 2);
    CResource::UnRegisterNotifierInternal((CResource *)(this + 2), this[24]);
    this[24] = 0LL;
    ReleaseInterface<CVisualTree>(this + 29);
    this[24] = a2;
    v6 = CResource::RegisterNotifier(v5, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x79Cu);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)this);
      CResource::NotifyOnChanged(v5, 0LL, 0LL);
    }
  }
  return v2;
}
