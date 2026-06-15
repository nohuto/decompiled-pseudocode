/*
 * XREFs of PdcInitializeETW @ 0x180035020
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McGenEventRegister @ 0x1800361E0 (McGenEventRegister.c)
 *     TraceLoggingRegisterEx @ 0x18003820C (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall PdcInitializeETW(__int64 a1, __int64 a2)
{
  TLG_STATUS result; // eax
  TLG_PENABLECALLBACK v3; // rdx
  PVOID v4; // r8

  result = _InterlockedIncrement(&g_RegistrationCount);
  if ( result == 1 )
  {
    McGenEventRegister(&PDC_EVENT_PROVIDER, a2, &PDC_EVENT_PROVIDER_Context, &Microsoft_Windows_PDCHandle);
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18012A3B0, v3, v4);
  }
  return result;
}
