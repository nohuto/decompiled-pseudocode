/*
 * XREFs of EtwSetInformation @ 0x140603DA0
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x14016EBB0 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x14022D644 (HvlpEtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x140603DF4 (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // r10d
  __int32 v5; // edx

  v4 = 0;
  if ( RegHandle )
  {
    v5 = InformationClass - 2;
    if ( v5 )
    {
      if ( v5 != 1 )
        return -1073741808;
      if ( EventInformation && InformationLength == 1 )
      {
        if ( *(_BYTE *)EventInformation == 1 )
        {
          _InterlockedOr16((volatile signed __int16 *)(RegHandle + 98), 0x200u);
          return v4;
        }
        if ( !*(_BYTE *)EventInformation )
        {
          _InterlockedAnd16((volatile signed __int16 *)(RegHandle + 98), 0xFDFFu);
          return v4;
        }
      }
    }
    else if ( EventInformation && InformationLength - 3 <= 0x7FFC )
    {
      return EtwpSetProviderTraitsKm(RegHandle, EventInformation);
    }
    return -1073741811;
  }
  return -1073741816;
}
