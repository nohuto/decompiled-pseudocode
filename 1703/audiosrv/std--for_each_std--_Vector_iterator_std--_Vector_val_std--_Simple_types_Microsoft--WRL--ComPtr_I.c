/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x18009FC28
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator() @ 0x18009FEB8 (_lambda_2c59ef132d6a4717c9cbd171e794a48a_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = a2; i != a3; i += 8LL )
    lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator()(a4, i);
  result = a1;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 16);
  return result;
}
