/*
 * XREFs of ??1HmdInfo@@QEAA@XZ @ 0x1800CF40C
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d95945aeb83d7b1855899d107fdf8904____::_1_::dtor$0 @ 0x1800CF356 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800CF356.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$2 @ 0x1800F8BE3 (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$2.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$3 @ 0x1800F8F0F (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HmdInfo::~HmdInfo(__int64 *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(this);
}
