/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_ @ 0x18013E940
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18002AC30 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64___lambda_edd19650adc2bed30a6707bf286b378d__&___ptr64_ @ 0x18013E698 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d__-___ptr64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_edd19650adc2bed30a6707bf286b378d______ptr64_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = (void *)-2LL;
  v6 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d______ptr64_::CTaskWrapper__lambda_edd19650adc2bed30a6707bf286b378d______ptr64___lambda_edd19650adc2bed30a6707bf286b378d______ptr64_(
           v7,
           a4);
  v10[0] = v6;
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, a3, 0, (struct Windows::Internal::IComPoolTask *)v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v8;
}
