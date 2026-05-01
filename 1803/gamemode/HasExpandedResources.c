/*
 * XREFs of HasExpandedResources @ 0x180001310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __stdcall HasExpandedResources(BOOL *hasExpandedResources)
{
  BOOL v1; // ebx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 4;
  v1 = 0;
  *hasExpandedResources = 0;
  v4 = 0;
  v6 = 0;
  if ( (int)NtQueryWnfStateData(&WNF_RM_GAME_MODE_ACTIVE, 0LL, 0LL, &v6, &v4, &v5) >= 0 )
  {
    LOBYTE(v1) = GetCurrentProcessId() == v4;
    *hasExpandedResources = v1;
  }
  return 0;
}
