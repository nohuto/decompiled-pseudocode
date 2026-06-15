/*
 * XREFs of ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x1800EEF50
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005ED9C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180097980 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x1800EFB94 (-_Swap@-$_Func_class@X$$V@std@@IEAAXAEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ARM_EVENT::ARM_EVENT(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF

  *a1 = &ARM_EVENT::`vftable';
  a1[8] = 0LL;
  v3 = std::function<void (void)>::function<void (void)>((__int64)v8, a2);
  std::_Func_class<void,>::_Swap(v3, a1 + 1);
  std::_Func_class<void,>::_Tidy((__int64)v8, v4, v5, v6);
  return a1;
}
