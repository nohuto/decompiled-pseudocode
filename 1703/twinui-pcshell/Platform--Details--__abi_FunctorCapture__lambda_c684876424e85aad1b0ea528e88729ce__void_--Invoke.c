/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_::Invoke @ 0x18012B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18011E630 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_::Invoke(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 64LL), &SRWLock);
  v6 = Windows::UI::Xaml::Window::Current::get(v3, v2, v4, v5);
  v11 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 48);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *(_QWORD *)(v8 + 48) = 0LL;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
