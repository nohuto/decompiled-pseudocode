/*
 * XREFs of PnpGetLogString @ 0x140147190
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1407FF664;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1407FF664;
  return result;
}
