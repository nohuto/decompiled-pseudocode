/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_::Invoke @ 0x1801556A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_::Invoke(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // r9
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 80LL);
  AcquireSRWLockExclusive(v2);
  v7 = Windows::UI::Xaml::Window::Current::get(v4, v3, v5, v6);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 168LL))(v7);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *(_QWORD *)(v9 + 64) = 0LL;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
