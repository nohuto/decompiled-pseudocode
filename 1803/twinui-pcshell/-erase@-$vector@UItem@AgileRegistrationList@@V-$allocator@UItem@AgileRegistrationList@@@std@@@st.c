/*
 * XREFs of ?erase@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@@Z @ 0x180111954
 * Callers:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18010E6B8 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<AgileRegistrationList::Item>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 16;
  v8 = v3;
  if ( a3 + 16 != v3 )
  {
    do
    {
      *(_DWORD *)(v4 - 16) = *(_DWORD *)v4;
      v9 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 8) = 0LL;
      v10 = *(_QWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
    v8 = v3;
  }
  v11 = *(_QWORD *)(v3 - 8);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v8 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 16;
  result = a2;
  *a2 = a3;
  return result;
}
