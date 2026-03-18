/*
 * XREFs of RegistryUnload @ 0x140679000
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1406DE190 (PsFreeSiloContextSlot.c)
 */

NTSTATUS RegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(gDeviceObject);
  gDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)gVregSiloContextSlot);
  if ( stru_14033C400.LevelPlus1 > 5 )
    TlgWrite(&stru_14033C400, &unk_1402AB5A1, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_14033C400.RegHandle);
  stru_14033C400.RegHandle = 0LL;
  stru_14033C400.LevelPlus1 = 0;
  return result;
}
