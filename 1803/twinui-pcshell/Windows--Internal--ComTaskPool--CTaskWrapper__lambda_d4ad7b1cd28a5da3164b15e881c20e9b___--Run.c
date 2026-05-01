/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run @ 0x18010A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run(
        __int64 a1)
{
  __int64 v2; // rdi
  CWinRTApplicationView *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v4);
  if ( (*(int (__fastcall **)(__int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v2 + 56LL))(
         v2,
         *(_QWORD *)(a1 + 24),
         &v4) >= 0 )
    (*(void (__fastcall **)(__int64, CWinRTApplicationView *))(*(_QWORD *)v2 + 144LL))(v2, v4);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v4);
}
