/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180127B3C
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@WDI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180127AA0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180127AA0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@3@WHA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180127BE0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180127BE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_3_UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx

  v3 = 0;
  if ( *(_BYTE *)(a1 + 128) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(a1 + 88));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *a2 = v4;
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v3;
}
