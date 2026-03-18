/*
 * XREFs of EtwSetInformation @ 0x1405892A0
 * Callers:
 *     BapdWriteEtwEvents @ 0x14014CABC (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x14014CE90 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x1401EB18C (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x1405892F4 (EtwpSetProviderTraitsKm.c)
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
      if ( EventInformation && InformationLength == 1 && *(_BYTE *)EventInformation < 2u )
      {
        *(_BYTE *)(RegHandle + 102) = *(_BYTE *)EventInformation;
        return v4;
      }
    }
    else if ( EventInformation && InformationLength - 3 <= 0x7FFC )
    {
      return EtwpSetProviderTraitsKm(RegHandle, EventInformation, (unsigned __int16)InformationLength);
    }
    return -1073741811;
  }
  return -1073741816;
}
