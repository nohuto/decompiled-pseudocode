/*
 * XREFs of ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B785C
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00BEC28 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 * Callees:
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B7824 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B7F90 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00FD254 (-ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 */

bool __fastcall ndisBindReadProtocolDriverConfiguration(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  bool result; // al

  if ( ndisIsInNetSetupMode() && ndisBindReadProtocolDriverFromV2Registry(a1) )
    return 1;
  result = ndisBindReadProtocolDriverFromV1Registry(a1);
  if ( result )
    return 1;
  return result;
}
