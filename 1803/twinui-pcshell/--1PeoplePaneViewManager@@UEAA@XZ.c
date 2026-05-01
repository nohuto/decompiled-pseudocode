/*
 * XREFs of ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1801C0960
 * Callers:
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1801C1054 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??_G?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18013AEC8 (--_G-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x1801C1088 (--_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::~PeoplePaneViewManager(PeoplePaneViewManager *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  CWinRTApplicationView **v10; // rbx
  CWinRTApplicationView **v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rsi
  std::_Ref_count_base *v14; // rcx

  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)this + 65);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 64);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)this + 63);
  v3 = (void *)*((_QWORD *)this + 58);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 59) )
    {
      v5 = 0LL;
      do
      {
        PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
          (PeoplePaneViewManager::ViewChangeListener *)(v5 + *((_QWORD *)this + 58)),
          v2);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 59) );
      v3 = (void *)*((_QWORD *)this + 58);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 58) = 0LL;
  }
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 344));
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 344,
    v6);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 344,
    v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 216));
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 216,
    v8);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 216,
    v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v10 = (CWinRTApplicationView **)*((_QWORD *)this + 21);
  if ( v10 )
  {
    v11 = (CWinRTApplicationView **)*((_QWORD *)this + 22);
    if ( v10 != v11 )
    {
      do
        Microsoft::WRL::ComPtr<IApplicationView>::`scalar deleting destructor'(v10++);
      while ( v10 != v11 );
      v10 = (CWinRTApplicationView **)*((_QWORD *)this + 21);
    }
    std::_Deallocate((char *)v10, (__int64)(*((_QWORD *)this + 23) - (_QWORD)v10) >> 3, 8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v12 = *((_QWORD *)this + 17);
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 18);
    if ( v12 != v13 )
    {
      do
      {
        v14 = *(std::_Ref_count_base **)(v12 + 8);
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v12 += 16LL;
      }
      while ( v12 != v13 );
      v12 = *((_QWORD *)this + 17);
    }
    std::_Deallocate((char *)v12, (*((_QWORD *)this + 19) - v12) >> 4, 0x10uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PeoplePaneViewManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 2);
}
