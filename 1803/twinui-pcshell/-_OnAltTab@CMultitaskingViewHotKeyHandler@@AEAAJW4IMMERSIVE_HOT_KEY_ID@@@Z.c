/*
 * XREFs of ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1802701A0
 * Callers:
 *     ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x18026FFA0 (-OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F66C (MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1802704EC (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x180270514 (-_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::_OnAltTab(__int64 a1, int a2)
{
  __int64 v5; // rbx
  HWND WindowW; // rax
  HWND v7; // rsi
  HWND WindowLongPtrW; // rbx
  HWND ForegroundWindow; // r14
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  int v18[2]; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  CWinRTApplicationView *v21; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  CWinRTApplicationView *v23; // [rsp+90h] [rbp+40h] BYREF
  CWinRTApplicationView *v24; // [rsp+98h] [rbp+48h] BYREF

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab((CMultitaskingViewHotKeyHandler *)a1) )
  {
    CMultitaskingViewHotKeyHandler::_UnregisterHotKeys((CMultitaskingViewHotKeyHandler *)a1);
    return 0LL;
  }
  v23 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  (*(void (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v5 + 72LL))(v5, &v23);
  if ( !v23 )
  {
    WindowW = FindWindowW(L"Shell_CortanaProxy", 0LL);
    v7 = WindowW;
    if ( WindowW )
    {
      WindowLongPtrW = (HWND)GetWindowLongPtrW(WindowW, 0);
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow == WindowLongPtrW || ForegroundWindow == GetLastActivePopup(WindowLongPtrW) )
      {
        v24 = 0LL;
        v10 = *(_QWORD *)(a1 + 64);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
        v11 = (*(__int64 (__fastcall **)(__int64, HWND, CWinRTApplicationView **))(*(_QWORD *)v10 + 48LL))(
                v10,
                v7,
                &v24);
        if ( v11 >= 0 )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v23, &v24);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            176LL,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
            (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      }
    }
  }
  *(_QWORD *)v18 = 0LL;
  v12 = *(_QWORD *)(a1 + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v18);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v12 + 72LL))(
          v12,
          0LL,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v18);
  MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6 = v13;
  if ( v13 >= 0 )
  {
    v24 = 0LL;
    v20 = *(_QWORD *)v18;
    v19 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v20);
    v21 = v23;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6 = MakeMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6_(
                                                                              (__int64 *)&v24,
                                                                              (__int64)&v19);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
    if ( MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, CWinRTApplicationView *, __int64))(**(_QWORD **)(a1 + 56) + 24LL))(
              *(_QWORD *)(a1 + 56),
              v24,
              1LL);
      MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6 = v17;
      if ( v17 >= 0 )
      {
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        goto LABEL_19;
      }
      v15 = (unsigned int)v17;
      v16 = 226LL;
    }
    else
    {
      v15 = (unsigned int)MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6;
      v16 = 223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)v15);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v13);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v18);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return (unsigned int)MultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6;
}
