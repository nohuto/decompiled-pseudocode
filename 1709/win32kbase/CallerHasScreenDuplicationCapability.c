/*
 * XREFs of CallerHasScreenDuplicationCapability @ 0x1C014CB08
 * Callers:
 *     ?SetHandleProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C014D0B0 (-SetHandleProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool CallerHasScreenDuplicationCapability()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+40h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, L"screenDuplication");
  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, &DestinationString, &v2) >= 0 && v2 != 0;
}
