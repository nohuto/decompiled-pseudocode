/*
 * XREFs of ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020176C
 * Callers:
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x1802013A4 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     Platform::Details::__abi_FunctorCapture__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8__void_::Invoke @ 0x180201900 (Platform--Details--__abi_FunctorCapture__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8__void_--Invoke.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1801FBB24 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ @ 0x18020B230 (-Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ.c)
 *     ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160 (-ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHostWindow::ChangeVisibilityHelper(
        XamlExplorerHostWindow *this,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  char v4; // bp
  __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64 *); // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx

  v4 = a2;
  v5 = Windows::UI::Xaml::Window::Current::get((__int64)this, a2, a3, a4);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptr_dtor(v5);
  if ( v6 )
  {
    v7 = __abi_winrt_cast_to(0, v6, (__int64)&_uuidof__AUIWindowPrivate_Xaml_UI_Windows__);
    v8 = __abi_winrt_ptr_ctor(v7);
    __abi_winrt_ptr_dtor(v7);
    if ( v4 )
      IXamlSwitcherWindowInteractionEvents::ViewLoaded(v8, v9);
    else
      Windows::UI::Xaml::IWindowPrivate::Show(v8, v9);
    __abi_winrt_ptr_dtor(v8);
  }
  __abi_winrt_ptr_dtor((__int64)v6);
}
