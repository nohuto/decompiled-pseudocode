/*
 * XREFs of SmpNtSerializeBoot @ 0x1400071F4
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002150 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x140009E10 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140002EC8 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x140007820 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
