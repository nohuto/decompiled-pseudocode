/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1122b30b9c622c6c9bea198871386fcb___ @ 0x18009820C
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18009BF00 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_1122b30b9c622c6c9bea198871386fcb___ @ 0x1800980D4 (std--_For_each_unchecked_Microsoft--WRL--ComPtr_IStreamGroupProxy______ptr64__lambda_1122b30b9c6.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1122b30b9c622c6c9bea198871386fcb___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rcx

  std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_1122b30b9c622c6c9bea198871386fcb___(
    a2,
    a3,
    a4);
  v6 = *a4;
  *a1 = *a4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a1;
}
