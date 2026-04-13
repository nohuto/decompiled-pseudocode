/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_3f61723cca9ee14616220b7598fa5ec3__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move @ 0x180073060
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_3f61723cca9ee14616220b7598fa5ec3__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  if ( !a2 )
  {
    a2 = operator new(0x18uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *a2 = off_1800D9D58;
  v3 = (_QWORD *)(a1 + 8);
  a2[1] = 0LL;
  if ( a2 + 1 != (_QWORD *)(a1 + 8) )
  {
    a2[1] = *v3;
    *v3 = 0LL;
  }
  return a2;
}
