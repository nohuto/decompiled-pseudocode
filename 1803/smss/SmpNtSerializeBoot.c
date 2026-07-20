/*
 * XREFs of SmpNtSerializeBoot @ 0x140007034
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002160 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x140009D00 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140002ECC (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x140007660 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
