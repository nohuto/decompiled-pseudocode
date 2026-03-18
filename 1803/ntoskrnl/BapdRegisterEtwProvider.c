/*
 * XREFs of BapdRegisterEtwProvider @ 0x14016EBB0
 * Callers:
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x1408A5094 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     EtwSetInformation @ 0x140603DA0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
