/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002DC30
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002E5D0 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002F4DC (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002FDD4 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C0030CCC (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C0030F2C (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0032D6C (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00336C8 (HUBDESC_ValidateDeviceDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C0033CA4 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0033FE4 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
