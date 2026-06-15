/*
 * XREFs of ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18000C8D0
 * Callers:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18005B10C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 * Callees:
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Move @ 0x18000C9B0 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Move.c)
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this @ 0x18000C9E0 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Delete_thi.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,>::_Reset_move(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 (__fastcall *v5)(_QWORD *, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 (__fastcall *v9)(void *); // rax

  v4 = (_QWORD *)a2[7];
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL);
      if ( (char *)v5 == (char *)std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Move )
        v6 = std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Move(v4, a1);
      else
        v6 = v5(v4, a1);
      *(_QWORD *)(a1 + 56) = v6;
      v8 = (_QWORD *)a2[7];
      if ( v8 )
      {
        v9 = *(__int64 (__fastcall **)(void *))(*v8 + 32LL);
        if ( v9 == std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this )
        {
          std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this(v8);
        }
        else
        {
          LOBYTE(v7) = v8 != a2;
          ((void (__fastcall *)(_QWORD *, __int64))v9)(v8, v7);
        }
        a2[7] = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      a2[7] = 0LL;
    }
  }
}
