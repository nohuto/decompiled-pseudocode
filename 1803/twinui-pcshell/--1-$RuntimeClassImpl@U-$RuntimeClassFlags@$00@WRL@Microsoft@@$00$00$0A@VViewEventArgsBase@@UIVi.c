/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800043BC
 * Callers:
 *     ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x180004510 (--_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x1800049F0 (--_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801C9AC0 (--_E-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@She.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 56);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 32);
}
