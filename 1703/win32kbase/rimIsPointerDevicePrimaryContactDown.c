/*
 * XREFs of rimIsPointerDevicePrimaryContactDown @ 0x1C0113428
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsPointerDevicePrimaryContactDown(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 1584);
  v2 = 0;
  if ( v1 && ((*(_DWORD *)(v1 + 2620) & 4) != 0 || (*(_DWORD *)(v1 + 2404) & 4) != 0) )
    return 1;
  return v2;
}
