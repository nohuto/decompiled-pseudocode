/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x180119B80
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x18011AA00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  CWinRTApplicationView *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
  v5 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( (*(int (__fastcall **)(__int64 *, __int64, CWinRTApplicationView **))(v5 + 48))(a2, v6, &v8) >= 0 )
    (*(void (__fastcall **)(__int64 *, CWinRTApplicationView *, _QWORD, _QWORD))(*a2 + 160))(
      a2,
      v8,
      *((unsigned int *)a1 + 2),
      0LL);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
}
