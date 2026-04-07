/*
 * XREFs of ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18003F4E4
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003F3B0 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180069590 (wistd--_Func_impl_wistd--_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__ea_180069590.c)
 * Callees:
 *     <none>
 */

__int64 PerceptionSimulationSettings::GetControlMode()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 4;
  v0 = 0;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\PerceptionSimulationExtensions",
          L"Mode",
          0x10010u,
          0LL,
          &v2,
          &v3) )
    return v2;
  return v0;
}
