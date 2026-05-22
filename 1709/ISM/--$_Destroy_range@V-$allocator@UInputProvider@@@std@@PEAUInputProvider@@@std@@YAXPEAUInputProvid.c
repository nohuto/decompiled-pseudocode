/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@PEAUInputProvider@@@std@@YAXPEAUInputProvider@@0AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@@Z @ 0x180005598
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch$4 @ 0x1800CE579 (_std--_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std--allo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<InputProvider>,InputProvider *>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 3;
      result = v3 - 2;
    }
    while ( v3 - 2 != a2 );
  }
  return result;
}
