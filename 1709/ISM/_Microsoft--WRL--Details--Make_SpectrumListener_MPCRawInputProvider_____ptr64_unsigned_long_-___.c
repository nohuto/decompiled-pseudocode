/*
 * XREFs of _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x1800CFA25
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSpatialInputControllerHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18006742C (--1-$ComPtr@VSpatialInputControllerHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<SpatialInputControllerHeadEventHandler>::~ComPtr<SpatialInputControllerHeadEventHandler>(*(volatile signed __int32 ***)(a2 + 80));
  }
  return result;
}
