/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180282BE4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewFrame@@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180280A58 (--$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitas.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x1802809C0 (--$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@.c)
 */

__int64 __fastcall CMultitaskingViewFrame::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v12; // r9
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 2416) = a2;
  v8 = (_OWORD *)(a1 + 48);
  v9 = 9LL;
  v12 = 9LL;
  v13 = a3;
  do
  {
    *v8 = *v13;
    v8[1] = v13[1];
    v8[2] = v13[2];
    v8[3] = v13[3];
    v8[4] = v13[4];
    v8[5] = v13[5];
    v8[6] = v13[6];
    v8 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v8 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v8 = *v13;
  v8[1] = v13[1];
  v15 = (_OWORD *)(a1 + 1232);
  do
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v15[3] = a3[3];
    v15[4] = a3[4];
    v15[5] = a3[5];
    v15[6] = a3[6];
    v15 += 8;
    v16 = a3[7];
    a3 += 8;
    *(v15 - 1) = v16;
    --v9;
  }
  while ( v9 );
  *v15 = *a3;
  v15[1] = a3[1];
  if ( *(_QWORD *)(a1 + 2456) != a4 )
  {
    v22 = a4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v22);
    v22 = *(_QWORD *)(a1 + 2456);
    *(_QWORD *)(a1 + 2456) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((__int64 *)(a1 + 2472), a5);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((__int64 *)(a1 + 2488), a7);
  if ( a8 )
  {
    v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a8 + 88LL))(a8, &a8);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)(a1 + 2496), v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 2480));
  v18 = Microsoft::WRL::Details::MakeAndInitialize<CAsyncSwitchItemController,ISwitchItemController,ISwitchItemController * &>(
          (_QWORD *)(a1 + 2480),
          &a6);
  v19 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v18);
  return v19;
}
