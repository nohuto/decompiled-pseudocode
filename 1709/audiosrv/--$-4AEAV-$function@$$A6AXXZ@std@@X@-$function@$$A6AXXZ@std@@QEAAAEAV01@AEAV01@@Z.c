/*
 * XREFs of ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18005B10C
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18000C8D0 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18005B1D0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::function<void (void)>::operator=<std::function<void (void)> &,void>(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD v8[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v9[8]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (_QWORD *)std::function<void (void)>::function<void (void)>(v9);
  v4 = (_QWORD *)v3[7];
  if ( v4 == v3 || (v5 = (_QWORD *)a1[7], v5 == a1) )
  {
    v8[7] = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v8, v3);
    std::_Func_class<void,>::_Reset_move((__int64)v3, a1);
    std::_Func_class<void,>::_Reset_move((__int64)a1, v8);
    std::_Func_class<void,>::_Tidy(v8, v6);
  }
  else
  {
    v3[7] = v5;
    a1[7] = v4;
  }
  std::_Func_class<void,>::_Tidy(v9, v2);
  return a1;
}
