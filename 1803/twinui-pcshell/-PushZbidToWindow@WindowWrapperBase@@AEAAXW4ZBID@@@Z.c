/*
 * XREFs of ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801F2D90
 * Callers:
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     ?SetWindowBand@WindowWrapperBase@@UEAAJK@Z @ 0x1801F4250 (-SetWindowBand@WindowWrapperBase@@UEAAJK@Z.c)
 *     ?SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1801F42B0 (-SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::PushZbidToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 168LL))(*(_QWORD *)(a1 + 312));
  *(_DWORD *)(a1 + 472) = a2;
  v5 = *(int *)(a1 + 328);
  if ( *(_DWORD *)(a1 + 328) )
  {
    if ( a2 )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 312) + 120LL))(
                       *(_QWORD *)(a1 + 312),
                       &v7);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 32LL))(*v6, v5, 0LL, a2);
      return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v7);
    }
  }
  return result;
}
