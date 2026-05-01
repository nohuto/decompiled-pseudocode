/*
 * XREFs of ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJXZ @ 0x18012714C
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAJXZ @ 0x180127180 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$WriteOnlyArr_ea_180127180.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform_IDisposable____abi__Dispose___QIDisposable_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJXZ(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 56LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
