/*
 * XREFs of _lambda_4e85baddd9af2aed2f97afae8fd139c5_::operator() @ 0x1801E479C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5___::Run @ 0x1801E6430 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4e85baddd9af2aed2f97afae8fd139c5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092A88 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ??$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801E3EC0 (--$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4e85baddd9af2aed2f97afae8fd139c5_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  _BYTE v5[80]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  LPVOID ppv; // [rsp+A0h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v5);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &ppv);
  v3 = v2;
  if ( v2 >= 0
    && (v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
               ppv,
               *(unsigned int *)(a1 + 24),
               0x80000000LL),
        v3 = v2,
        v2 >= 0) )
  {
    Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=((__int64 *)(*(_QWORD *)a1 + 136LL), (__int64 *)&ppv);
    ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int &,HWND__ * const &,unsigned long &>(
      (int *)(*(_QWORD *)a1 + 148LL),
      (__int64 *)(a1 + 16),
      a1 + 24);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppv);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
  return v3;
}
