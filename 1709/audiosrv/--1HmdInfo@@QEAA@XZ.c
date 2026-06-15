/*
 * XREFs of ??1HmdInfo@@QEAA@XZ @ 0x180098888
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_13b036c3bd03ff0c7e68ca121e297c0f____::_1_::dtor$0 @ 0x180098346 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_180098346.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$2 @ 0x1800C677F (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$2.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$3 @ 0x1800C6AAF (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HmdInfo::~HmdInfo(__int64 *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(this);
}
