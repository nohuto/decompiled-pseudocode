/*
 * XREFs of _lambda_582c6993ad05377755ea5aed50f4c8b6_::operator() @ 0x18026F854
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::RunTask @ 0x1802700D0 (CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x18026FA68 (-AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18026FF80 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18027058C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 */

__int64 __fastcall lambda_582c6993ad05377755ea5aed50f4c8b6_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // esi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*(_DWORD *)a1 - 41) & 0xFFFFFFF9) != 0 || (v4 = 5, *(_DWORD *)a1 == 47) )
    v4 = 6;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v5 = 1;
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         1LL,
         &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
         &v15) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
           a2,
           1LL,
           &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
           &v15);
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_14;
    if ( (unsigned int)(*(_DWORD *)a1 - 45) <= 1 )
    {
      v8 = 3;
    }
    else
    {
      v5 = 0;
      v8 = 2;
    }
    if ( v4 != 6 )
      v8 = v5;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
           v15,
           *(_QWORD *)(a1 + 8),
           v8,
           *(_QWORD *)(a1 + 16));
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_14;
    if ( MultitaskingViewTelemetry::IsEnabled(v10, v9) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v11,
        lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::AltTabInvoked_(v12, v8);
    }
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, v4);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_17;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDF,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v7;
}
