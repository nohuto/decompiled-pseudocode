/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_de80f2c769e973bfde61777953eb8abd___ @ 0x180102350
 * Callers:
 *     ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x180109480 (-OnIdleStateChanged@CApplicationManager@@UEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_de80f2c769e973bfde61777953eb8abd___(
        __int64 a1,
        unsigned int *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 i; // rbx
  __int64 v7; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v3; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7);
    if ( (result & 1) != 0 || (result & 8) != 0 )
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 104LL))(v7, *a2);
  }
  return result;
}
