/*
 * XREFs of _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x180273164
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&___ptr64_::Run @ 0x180273460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_637b889d7309fa55c34979987552fc_ea_180273460.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800FA334 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YA.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x180272FB8 (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x1802735C0 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 */

__int64 __fastcall lambda_637b889d7309fa55c34979987552fc96_::operator()(__int64 a1)
{
  HGDIOBJ v2; // rbx
  DWORD LastError; // edi
  struct IWinRTApplicationView *v4; // rcx
  int IconSync; // eax
  unsigned int v6; // ebx
  HGDIOBJ v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HGDIOBJ ho; // [rsp+50h] [rbp+10h] BYREF

  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&ho);
  v2 = ho;
  if ( ho )
  {
    LastError = GetLastError();
    DeleteObject(v2);
    SetLastError(LastError);
  }
  v4 = *(struct IWinRTApplicationView **)a1;
  ho = 0LL;
  IconSync = CWinRTAppIconLoader::s_LoadIconSync(
               v4,
               (const struct tagSIZE *)(a1 + 8),
               (const struct tagSIZE *)(a1 + 16),
               (const struct tagSIZE *)(a1 + 24),
               *(_DWORD *)(a1 + 32),
               (HBITMAP *)&ho);
  v6 = IconSync;
  if ( IconSync >= 0 )
  {
    v7 = ho;
    v8 = *(_QWORD *)(a1 + 48);
    ho = 0LL;
    v11 = v7;
    v12 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___(
           *(_QWORD *)(a1 + 40),
           (__int64)&v11);
    v6 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)IconSync);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>(&ho);
  return v6;
}
