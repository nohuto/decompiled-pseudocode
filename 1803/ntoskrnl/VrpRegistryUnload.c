/*
 * XREFs of VrpRegistryUnload @ 0x140707F50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140778830 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_1403970D0.LevelPlus1 > 5 )
    TlgWrite(&stru_1403970D0, &unk_140308D25, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_1403970D0.RegHandle);
  stru_1403970D0.RegHandle = 0LL;
  stru_1403970D0.LevelPlus1 = 0;
  return result;
}
