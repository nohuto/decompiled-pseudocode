/*
 * XREFs of _lambda_a82905e17e8ce16c5170ad40f44874ec_::operator() @ 0x180157980
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_a82905e17e8ce16c5170ad40f44874ec__void_::Invoke @ 0x18015F580 (Platform--Details--__abi_FunctorCapture__lambda_a82905e17e8ce16c5170ad40f44874ec__void_--Invoke.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_a82905e17e8ce16c5170ad40f44874ec_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 176LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 200LL))(v4, *(_QWORD *)(v3 + 112));
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL));
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL) = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 152LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL));
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 104LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL));
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 120LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL));
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 136LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL));
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL) + 168LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL));
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(v12 + 96);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, *(_QWORD *)(v12 + 160));
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 96LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL));
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
