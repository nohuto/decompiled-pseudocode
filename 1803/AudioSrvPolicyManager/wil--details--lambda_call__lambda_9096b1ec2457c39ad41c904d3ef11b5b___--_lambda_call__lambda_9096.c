/*
 * XREFs of wil::details::lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___::_lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___ @ 0x18000A7E4
 * Callers:
 *     _CWindowsPolicyManager::InitAccessibilityAudioSettings_::_1_::dtor$0 @ 0x180036579 (_CWindowsPolicyManager--InitAccessibilityAudioSettings_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$67 @ 0x180036D93 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$67.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$4 @ 0x180037339 (_CApplicationManager--RpcGetProcess_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$3 @ 0x18003800C (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___::_lambda_call__lambda_9096b1ec2457c39ad41c904d3ef11b5b___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
