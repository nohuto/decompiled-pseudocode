/*
 * XREFs of ??1?$unique_ptr@VIPosePredictionModel@Holographic@Internal@Windows@@U?$default_delete@VIPosePredictionModel@Holographic@Internal@Windows@@@wistd@@@wistd@@QEAA@XZ @ 0x1800B9BA4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphNodeReference::_SpatialGraphNodeReference_::_1_::dtor$2 @ 0x1800D1B36 (_Windows--Internal--Holographic--SpatialGraphNodeReference--_SpatialGraphNodeRefere_ea_1800D1B36.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<Windows::Internal::Holographic::IPosePredictionModel,wistd::default_delete<Windows::Internal::Holographic::IPosePredictionModel>>::~unique_ptr<Windows::Internal::Holographic::IPosePredictionModel,wistd::default_delete<Windows::Internal::Holographic::IPosePredictionModel>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
