/*
 * XREFs of ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013B520
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@.c)
 *     ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x18013B1A4 (--$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerIntero.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e749f471b43b5c52416cbe595e41d9dc___ @ 0x18013BD6C (Windows--Internal--ComTaskPool--QueueTask__lambda_e749f471b43b5c52416cbe595e41d9dc___.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141554 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UAPViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v8; // r14
  volatile signed __int64 *v9; // rdx
  signed __int64 v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 result; // rax
  signed __int64 v14; // [rsp+20h] [rbp-30h]
  volatile signed __int64 *v15[4]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  PCWSTR StringRawBuffer; // [rsp+90h] [rbp+40h] BYREF
  signed __int64 v18; // [rsp+98h] [rbp+48h]

  v16 = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 160), 0LL);
  ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
    &StringRawBuffer,
    (int *)(a1 + 156),
    &v16);
  *(_DWORD *)(a1 + 552) = a2;
  if ( a2 || (int)CoreIsWindowServiceSupported(*(_QWORD *)(a1 + 264), &IID_IHostedViewDeferClose) < 0 )
    return ViewWrapperBase::NavigateInternal(a1, a2);
  ViewWrapperBase::NavigateInternal(a1, 3LL);
  v4 = a1 - 8;
  v5 = (volatile signed __int64 *)(a1 - 8);
  if ( a1 != 8 )
  {
    v6 = *(_QWORD *)(v4 + 552);
    v18 = v6;
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 552), v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_8:
    v5 = (volatile signed __int64 *)(a1 - 8);
  }
  v8 = *(volatile signed __int64 **)(a1 + 264);
  v9 = (volatile signed __int64 *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 160), 0LL);
  v15[0] = v5;
  if ( v5 )
  {
    v10 = *((_QWORD *)v5 + 69);
    v14 = v10;
    v11 = v10;
    while ( v11 >= 0 )
    {
      v10 = v11 + 1;
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v5 + 69, v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_14:
    v5 = (volatile signed __int64 *)(a1 - 8);
  }
  v15[1] = (volatile signed __int64 *)(a1 - 8);
  v15[2] = v8;
  v15[3] = v9;
  result = Windows::Internal::ComTaskPool::QueueTask__lambda_e749f471b43b5c52416cbe595e41d9dc___(
             v10,
             v9,
             *(unsigned int *)(a1 + 184),
             v15,
             v14,
             -2LL);
  if ( v15[0] )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v15[0]);
  if ( v5 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v5);
  return result;
}
