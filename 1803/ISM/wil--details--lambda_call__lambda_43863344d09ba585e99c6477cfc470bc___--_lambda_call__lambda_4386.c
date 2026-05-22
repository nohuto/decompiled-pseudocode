/*
 * XREFs of wil::details::lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___::_lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___ @ 0x1800A8E30
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization_::_1_::dtor$1 @ 0x1800E8E83 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8E83.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A9A80 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___::_lambda_call__lambda_43863344d09ba585e99c6477cfc470bc___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Stop(*(SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization **)(a1 + 8));
  }
  return result;
}
