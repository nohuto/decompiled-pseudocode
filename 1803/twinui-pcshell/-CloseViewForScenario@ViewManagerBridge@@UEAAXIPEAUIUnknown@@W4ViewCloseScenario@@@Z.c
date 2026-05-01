/*
 * XREFs of ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1801DBE80
 * Callers:
 *     _ViewEventDispatcher::ViewCreated_::_1_::catch$38 @ 0x1800B2DEC (_ViewEventDispatcher--ViewCreated_--_1_--catch$38.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$312 @ 0x1800B3169 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$312.c)
 *     _lambda_2338f6620c35f386186dd3a4c1d1b861_::operator() @ 0x1801C8D7C (_lambda_2338f6620c35f386186dd3a4c1d1b861_--operator().c)
 *     _lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator() @ 0x1801C8DDC (_lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180055BE0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F5D40 (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4ViewCloseScenario@@@Z @ 0x1801DADEC (--$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW.c)
 *     MapScenarioToErrorCodeForView @ 0x1801DD1F0 (MapScenarioToErrorCodeForView.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::CloseViewForScenario(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int i; // edi
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  const char *v15; // r9
  int v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  CWinRTApplicationView *v19[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = a4;
  v21 = a2;
  v19[1] = (CWinRTApplicationView *)-2LL;
  try
  {
    ViewManagerInteropTraceLogging::CloseViewForScenario<unsigned int &,enum ViewCloseScenario &>(
      (int *)&v21,
      (int *)&v23);
    v17 = 0LL;
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v13 = (**a3)(a3, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v17);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          186LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v13);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 )
      {
        v22 = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v22);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            167LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v9);
        for ( i = 0; (int)i < v22; ++i )
        {
          v18 = 0LL;
          v19[0] = 0LL;
          v11 = *(_QWORD *)(a1 + 120);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
          if ( (*(int (__fastcall **)(__int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v11 + 56LL))(v11, i, v19) >= 0
            && (int)Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(v19, &v18) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 152LL))(v18, &v16) >= 0
            && v16 == a2 )
          {
            v12 = v17;
            v17 = v18;
            v18 = v12;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
            break;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        }
      }
    }
    if ( !v17 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        189LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)0x80070490LL);
    if ( v17 )
      MapScenarioToErrorCodeForView(v17, a4);
    ViewManagerBridge::NavigateView(a1, a2, 0LL);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xC5,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
             v15);
  }
  return result;
}
