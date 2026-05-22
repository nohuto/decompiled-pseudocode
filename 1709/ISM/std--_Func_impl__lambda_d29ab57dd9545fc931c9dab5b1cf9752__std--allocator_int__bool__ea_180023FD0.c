/*
 * XREFs of std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Do_call @ 0x180023FD0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

bool __fastcall std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  if ( *a4 )
  {
    v5 = *a2;
    if ( *(_DWORD *)(v5 + 40) <= 8u )
    {
      memcpy_0(&v8, *(const void **)(v5 + 32), *(unsigned int *)(v5 + 40));
      v6 = 0;
    }
    else
    {
      v6 = -2147024774;
    }
    **(_DWORD **)(a1 + 24) = v6;
    if ( **(int **)(a1 + 24) >= 0 )
      *(_QWORD *)(***(_QWORD ***)(a1 + 8) + 8LL * (unsigned int)(***(_DWORD ***)(a1 + 16))++) = v8;
  }
  return **(_DWORD **)(a1 + 24) >= 0;
}
