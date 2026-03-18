/*
 * XREFs of VrpRegistryUnload @ 0x1406A38E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140714630 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_140354A30.LevelPlus1 > 5 )
    TlgWrite(&stru_140354A30, &unk_1402CF359, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_140354A30.RegHandle);
  stru_140354A30.RegHandle = 0LL;
  stru_140354A30.LevelPlus1 = 0;
  return result;
}
