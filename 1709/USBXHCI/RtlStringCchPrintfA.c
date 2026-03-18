/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000E0D8
 * Callers:
 *     Controller_TelemetryReport @ 0x1C00126B4 (Controller_TelemetryReport.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C001B280 (Endpoint_SetLogIdentifier.c)
 *     Command_PrepareHardware @ 0x1C00553E0 (Command_PrepareHardware.c)
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C00575AC (Controller_PopulateAcpiDeviceInformation.c)
 *     Controller_SetLogIdentifier @ 0x1C00590A0 (Controller_SetLogIdentifier.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
