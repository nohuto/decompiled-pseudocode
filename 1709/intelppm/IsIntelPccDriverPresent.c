/*
 * XREFs of IsIntelPccDriverPresent @ 0x1C0003FEC
 * Callers:
 *     InitDriver @ 0x1C0035EF0 (InitDriver.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 */

bool IsIntelPccDriverPresent()
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( (int)GetRegistryDwordValueNoDefault(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
              L"Count",
              &v2) >= 0 )
    return v2 != 0;
  return v0;
}
