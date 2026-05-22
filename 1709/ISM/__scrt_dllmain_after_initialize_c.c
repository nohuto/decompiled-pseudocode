/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800CA284
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800C9E20 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA?B_KXZ @ 0x180030570 (-GetNumPosesRequired@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAA-B_KX.c)
 *     __isa_available_init @ 0x1800CA808 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800CA9C4 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1800CAA18 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1800CAA2A (_initialize_narrow_environment.c)
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
