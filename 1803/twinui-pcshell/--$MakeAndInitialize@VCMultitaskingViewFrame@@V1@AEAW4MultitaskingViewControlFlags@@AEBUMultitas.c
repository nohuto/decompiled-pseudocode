/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewFrame@@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180280A58
 * Callers:
 *     ?CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@AEBU_GUID@@PEAPEAX@Z @ 0x1802813E0 (-CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewFrame@@QEAA@XZ @ 0x180280C8C (--0CMultitaskingViewFrame@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180282BE4 (-RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultita.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrame,CMultitaskingViewFrame,enum MultitaskingViewControlFlags &,MultitaskingViewConfig const &,ISwitchThumbnailDeviceManager * &,IElementFactory * &,ISwitchItemController * &,IVirtualDesktopElementFactory * &,IFrameLevelAnimationCoordinator * &>(
        CMultitaskingViewFrame **a1,
        unsigned int *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  CMultitaskingViewFrame *v12; // rax
  int v13; // ebx
  CMultitaskingViewFrame *v14; // rax
  __int64 v15; // r9
  CMultitaskingViewFrame *v16; // rsi
  CMultitaskingViewFrame *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (CMultitaskingViewFrame *)operator new(0xA00uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = CMultitaskingViewFrame::CMultitaskingViewFrame(v12);
    v15 = *a4;
    v16 = v14;
    v18 = v14;
    v13 = CMultitaskingViewFrame::RuntimeClassInitialize(v14, *a2, a3, v15, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
      v13 = 0;
      *a1 = v16;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
