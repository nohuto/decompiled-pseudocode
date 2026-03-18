/*
 * XREFs of CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x1801DEA30
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801DFC1C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_ @ 0x1801DEBF0 (_lambda_4c4b30c0bdee709bfcbf32217700bd40_--_lambda_4c4b30c0bdee709bfcbf32217700bd40_.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x1801DEC30 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x1801E1678 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___(
        __int64 a1,
        _QWORD *a2)
{
  char v2; // si
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *v11; // rbx
  int LastError; // esi
  __int64 v13; // rdx
  PTP_WORK ThreadpoolWork; // rax
  const char *v15; // r9
  char v17[24]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v18[7]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  if ( v6 )
  {
    v7 = (__int64 *)lambda_4c4b30c0bdee709bfcbf32217700bd40_::_lambda_4c4b30c0bdee709bfcbf32217700bd40_(v17, a1);
    v19 = 0LL;
    v8 = v7;
    v18[0] = off_18022D8E8;
    v9 = *v7;
    *v7 = 0LL;
    v18[1] = v9;
    v10 = v7[1];
    v7[1] = 0LL;
    v18[2] = v10;
    v19 = v18;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v7 + 1);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v8);
    *v6 = 0LL;
    v6[8] = 0LL;
    if ( v19 )
      v6[8] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v19)(v19, v6 + 1);
    v6[9] = 0LL;
    v6[10] = 0LL;
    *((_DWORD *)v6 + 22) = 0;
    *((_BYTE *)v6 + 92) = 0;
    v2 = 1;
  }
  else
  {
    v6 = 0LL;
  }
  v11 = v6;
  if ( (v2 & 1) != 0 && v19 )
  {
    LOBYTE(v5) = v19 != v18;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v19 + 32LL))(v19, v5);
  }
  if ( !v6 )
  {
    LastError = -2147024882;
    v13 = 52LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\AsyncTask.h",
      (const char *)(unsigned int)LastError);
    goto LABEL_18;
  }
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_,
                     v6,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
    v6,
    ThreadpoolWork);
  if ( *v6 )
  {
    SubmitThreadpoolWork((PTP_WORK)*v6);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x51,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\AsyncTask.h",
                  v15);
  }
  if ( LastError < 0 )
  {
    v13 = 54LL;
    goto LABEL_16;
  }
  v11 = 0LL;
  *a2 = v6;
  LastError = 0;
LABEL_18:
  if ( v11 )
    CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v11);
  return (unsigned int)LastError;
}
