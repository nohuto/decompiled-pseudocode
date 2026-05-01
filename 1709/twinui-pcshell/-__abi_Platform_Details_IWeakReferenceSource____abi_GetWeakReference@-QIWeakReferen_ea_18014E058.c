/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18014E058
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WCA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18014F0F0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18014F0F0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18016AB30 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18016AB30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    *a2 = v3;
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
