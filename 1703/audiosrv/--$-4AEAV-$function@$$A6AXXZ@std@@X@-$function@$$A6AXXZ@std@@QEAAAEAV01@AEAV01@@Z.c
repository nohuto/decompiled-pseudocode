/*
 * XREFs of ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18004526C
 * Callers:
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180045104 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180045214 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::operator=<std::function<void (void)> &,void>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rax
  _BYTE v9[56]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+68h] [rbp-60h]
  _BYTE v11[64]; // [rsp+70h] [rbp-58h] BYREF

  v4 = std::function<void (void)>::function<void (void)>((__int64)v11, a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v8 = *(_QWORD *)(a1 + 56), v8 == a1) )
  {
    v10 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v9, v4);
    std::_Func_class<void,>::_Reset_move(v4, a1);
    std::_Func_class<void,>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v6);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v8;
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::_Func_class<void,>::_Tidy((__int64)v11, v3);
  return a1;
}
