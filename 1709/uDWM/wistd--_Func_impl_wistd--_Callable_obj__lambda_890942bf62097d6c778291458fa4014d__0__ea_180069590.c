/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180069590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18003F4E4 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  int ControlMode; // eax
  void *v3; // rdx
  wil::details **v4; // rcx
  wil::details *v5; // rcx

  ControlMode = PerceptionSimulationSettings::GetControlMode();
  v4 = *(wil::details ***)(a1 + 8);
  if ( ControlMode )
    v5 = *v4;
  else
    v5 = v4[1];
  wil::details::SetEvent(v5, v3);
}
