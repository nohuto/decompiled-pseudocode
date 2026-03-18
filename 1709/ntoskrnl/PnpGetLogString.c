/*
 * XREFs of PnpGetLogString @ 0x1401333E8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140792EA4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140792EA4;
  return result;
}
