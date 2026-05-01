/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlTaskbarProxy_IImmersiveMonitor_____ptr64_&___ptr64_CreationThreadDispatcher_____ptr64_&___ptr64_IXamlTaskbarProxyHost_____ptr64__::_1_::dtor$0 @ 0x18019FB0F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E6CC (--1-$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int32 *__fastcall wil::MakeAndInitializeOrThrow_XamlTaskbarProxy_IImmersiveMonitor_____ptr64_____ptr64_CreationThreadDispatcher_____ptr64_____ptr64_IXamlTaskbarProxyHost_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlTaskbarProxy>::~ComPtr<XamlTaskbarProxy>(*(volatile signed __int32 ***)(a2 + 80));
  }
  return result;
}
