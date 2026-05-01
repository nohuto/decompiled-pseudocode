/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B44A8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication_____ptr64_&___ptr64_IUnknown_____ptr64_&___ptr64_enum_ACTIVATEOPTIONSINTERNAL_&___ptr64__::_1_::dtor$2 @ 0x1802B42A4 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_1802B42A4.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x1802B4801 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1);
}
