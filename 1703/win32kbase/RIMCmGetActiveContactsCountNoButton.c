/*
 * XREFs of RIMCmGetActiveContactsCountNoButton @ 0x1C0116BE8
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimFindOrCreateActiveContact @ 0x1C01132D4 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetActiveContactsCountNoButton(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 1576);
  if ( *(_DWORD *)(a1 + 24) == 7 )
    v2 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 1536) + 32LL), 2);
  else
    v2 = 0;
  if ( v2 )
    --v1;
  return v1;
}
