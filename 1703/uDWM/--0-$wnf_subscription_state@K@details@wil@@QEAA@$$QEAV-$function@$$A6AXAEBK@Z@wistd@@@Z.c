/*
 * XREFs of ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x18004934C
 * Callers:
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x180049258 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx

  a1[1] = 0LL;
  *a1 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
  a1[15] = 0LL;
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      a1[15] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 8LL))(v4, a1 + 2);
      wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
    }
    else
    {
      a1[15] = v4;
      *(_QWORD *)(a2 + 104) = 0LL;
    }
  }
  else
  {
    a1[15] = 0LL;
  }
  return a1;
}
