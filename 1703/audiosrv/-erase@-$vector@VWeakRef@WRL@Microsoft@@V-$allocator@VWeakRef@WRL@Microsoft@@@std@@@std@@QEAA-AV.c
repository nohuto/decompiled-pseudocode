/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18007CD58
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18007A060 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, char **a2, char *a3, char *a4)
{
  char *v4; // rdi
  char *v8; // r14
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 *i; // rdi
  __int64 v14; // rcx
  char **result; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(char **)(a1 + 8);
    v9 = (__int64 *)a3;
    if ( a4 != v8 )
    {
      do
      {
        v10 = 0LL;
        if ( &v16 != v4 )
        {
          v10 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
        }
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        ++v9;
        v4 += 8;
      }
      while ( v4 != v8 );
    }
    v12 = *(__int64 **)(a1 + 8);
    for ( i = v9; i != v12; ++i )
    {
      v14 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
