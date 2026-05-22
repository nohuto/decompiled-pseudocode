/*
 * XREFs of _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x1800E6B2B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18005E9D4 (--1-$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_____ptr64_unsigned_long_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<MPCRawInputProvider>::~ComPtr<MPCRawInputProvider>(*(volatile signed __int32 ***)(a2 + 96));
  }
  return result;
}
