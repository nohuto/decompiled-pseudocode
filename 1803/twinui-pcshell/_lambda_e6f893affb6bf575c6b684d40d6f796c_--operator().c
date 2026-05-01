/*
 * XREFs of _lambda_e6f893affb6bf575c6b684d40d6f796c_::operator() @ 0x18026BFE4
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::RunTask @ 0x18026CFB0 (CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x18027274C (--$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z.c)
 */

__int64 __fastcall lambda_e6f893affb6bf575c6b684d40d6f796c_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  HWND v12; // rax
  BOOL v13; // eax
  const char *v14; // r9
  __int64 v15; // rdx
  HWND WindowW; // rax
  BOOL v17; // eax
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v24; // [rsp+40h] [rbp+10h] BYREF
  __int64 v25; // [rsp+50h] [rbp+20h] BYREF

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
              a2,
              2LL,
              &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
              &v25);
      v5 = v22;
      if ( v22 < 0 )
      {
        v20 = (unsigned int)v22;
        v21 = 379LL;
        goto LABEL_44;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 48LL))(
             v25,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             0LL);
      LODWORD(v24) = *(_DWORD *)(a1 + 24);
      if ( v5 < 0 )
      {
        v21 = 380LL;
        goto LABEL_43;
      }
LABEL_41:
      MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(&v24);
LABEL_45:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      return (unsigned int)v5;
    case 2:
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
              a2,
              2LL,
              &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
              &v25);
      v5 = v19;
      if ( v19 < 0 )
      {
        v20 = (unsigned int)v19;
        v21 = 387LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)v20);
        goto LABEL_45;
      }
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
      LODWORD(v24) = *(_DWORD *)(a1 + 24);
      if ( v5 < 0 )
      {
        v21 = 388LL;
LABEL_43:
        v20 = (unsigned int)v5;
        goto LABEL_44;
      }
      goto LABEL_41;
    case 3:
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      v17 = PostMessageW(WindowW, 0x579u, 3uLL, 0LL);
      LODWORD(v24) = *(_DWORD *)(a1 + 24);
      if ( !v17 )
      {
        v15 = 393LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v15,
                 (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
                 v14);
      }
LABEL_30:
      MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(&v24);
      return 0LL;
    case 4:
      v12 = FindWindowW(L"Shell_TrayWnd", 0LL);
      v13 = PostMessageW(v12, 0x579u, 2uLL, 0LL);
      LODWORD(v24) = *(_DWORD *)(a1 + 24);
      if ( !v13 )
      {
        v15 = 397LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v15,
                 (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
                 v14);
      }
      goto LABEL_30;
    case 5:
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
              a2,
              1LL,
              &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
              &v25);
      v5 = v11;
      if ( v11 < 0 )
      {
        v6 = (unsigned int)v11;
        v7 = 403LL;
        goto LABEL_14;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v25 + 48LL))(
             v25,
             *(_QWORD *)(a1 + 16),
             4LL,
             *(_QWORD *)(a1 + 32));
      LODWORD(v24) = *(_DWORD *)(a1 + 24);
      if ( v5 >= 0 )
        goto LABEL_11;
      v7 = 404LL;
LABEL_13:
      v6 = (unsigned int)v5;
      goto LABEL_14;
    case 6:
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
             a2,
             1LL,
             &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
             &v24);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v25 = *(_QWORD *)a1;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 72LL))(v24, &v25);
        v5 = v9;
        if ( v9 >= 0 )
        {
LABEL_22:
          v8 = &v24;
          goto LABEL_16;
        }
        v10 = 413LL;
      }
      else
      {
        v10 = 411LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 24) != 7 )
    return 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         1LL,
         &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
         &v25);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 420LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)v6);
    goto LABEL_15;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
  LODWORD(v24) = *(_DWORD *)(a1 + 24);
  if ( v5 < 0 )
  {
    v7 = 421LL;
    goto LABEL_13;
  }
LABEL_11:
  MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(&v24);
LABEL_15:
  v8 = &v25;
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return (unsigned int)v5;
}
