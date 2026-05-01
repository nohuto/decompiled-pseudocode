/*
 * XREFs of ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1802B159C
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z @ 0x1802B1220 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F7514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

_QWORD *__fastcall std::vector<ActivationHints::Hint>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 48;
  if ( a3 + 48 != v3 )
  {
    v8 = (__int64 *)(a3 + 40);
    do
    {
      std::wstring::operator=(v8 - 5, v4);
      *(v8 - 1) = v8[5];
      v9 = v8[6];
      v8[6] = 0LL;
      v10 = *v8;
      *v8 = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v4 += 48LL;
      v8 += 6;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(v3 - 8));
  std::wstring::_Tidy_deallocate(v3 - 48);
  *(_QWORD *)(a1 + 8) -= 48LL;
  result = a2;
  *a2 = a3;
  return result;
}
