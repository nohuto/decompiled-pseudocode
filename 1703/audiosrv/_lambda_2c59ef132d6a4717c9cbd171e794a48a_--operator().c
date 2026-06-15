/*
 * XREFs of _lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator() @ 0x18009FEB8
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x18009FC28 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FE14 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator()(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *result; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  v5 = *v4 - *(_QWORD *)a1;
  if ( *v4 == *(_QWORD *)a1 )
    v5 = v4[1] - *(_QWORD *)(a1 + 8);
  if ( !v5 && !**(_QWORD **)(a1 + 16) )
    return Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(*(__int64 **)(a1 + 16), a2);
  v6 = **(_QWORD **)(a1 + 16);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  if ( v7 < (__int64)result )
    return Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(*(__int64 **)(a1 + 16), a2);
  return result;
}
