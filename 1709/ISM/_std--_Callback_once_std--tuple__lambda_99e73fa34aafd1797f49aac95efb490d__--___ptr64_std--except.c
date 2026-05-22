/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_99e73fa34aafd1797f49aac95efb490d__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$8 @ 0x1800CF489
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18005E334 (--1-$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Callback_once_std::tuple__lambda_99e73fa34aafd1797f49aac95efb490d_______ptr64_std::exception_ptr_____ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 120) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    return Microsoft::WRL::ComPtr<MPCManager>::~ComPtr<MPCManager>((volatile signed __int32 **)(a2 + 40));
  }
  return result;
}
