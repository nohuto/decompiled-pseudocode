/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800E12D8
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800E0E70 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA?B_KXZ @ 0x180048130 (-GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA-B_KX.c)
 *     __isa_available_init @ 0x1800E185C (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800E1A18 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1800E1A7E (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1800E1A90 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *v0; // rcx
  _crt_argv_mode NumPosesRequired; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    NumPosesRequired = (unsigned int)Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::GetNumPosesRequired(v0);
    if ( o__configure_narrow_argv_0(NumPosesRequired) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
