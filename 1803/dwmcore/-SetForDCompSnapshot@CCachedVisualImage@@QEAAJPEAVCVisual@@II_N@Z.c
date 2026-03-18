/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801827B4
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801A3CF0 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x1801825F8 (-InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180182A24 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        int a3,
        int a4,
        bool a5)
{
  int v8; // eax
  unsigned int v9; // ebx

  v8 = CCachedVisualImage::SetRootVisual(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x848u);
  }
  else
  {
    CCachedVisualImage::InitializeViewboxAndRealizationSize(this, (float)a3, (float)a4);
    *((_BYTE *)this + 380) = a5;
    CResource::NotifyOnChanged((CCachedVisualImage *)((char *)this + 16), 0LL, 0LL);
  }
  return v9;
}
