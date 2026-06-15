/*
 * XREFs of ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x1800EFB94
 * Callers:
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x1800EEF50 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800EFB44 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

void __fastcall std::_Func_class<void,>::_Swap(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (v5 = *(_QWORD *)(a2 + 56), v5 == a2) )
  {
    v10 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v9, a1);
    std::_Func_class<void,>::_Reset_move(a1, a2);
    std::_Func_class<void,>::_Reset_move(a2, (__int64)v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v6, v7, v8);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v5;
    *(_QWORD *)(a2 + 56) = v4;
  }
}
