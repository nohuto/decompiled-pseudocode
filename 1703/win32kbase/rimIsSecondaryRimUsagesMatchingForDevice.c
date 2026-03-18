/*
 * XREFs of rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C0094628
 * Callers:
 *     RIMBroadcastToSecondaryRims @ 0x1C0094508 (RIMBroadcastToSecondaryRims.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0100E00 (RIMCompleteSecondaryRimReads.c)
 *     RIMUpdateSecondaryRim @ 0x1C010FB20 (RIMUpdateSecondaryRim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsSecondaryRimUsagesMatchingForDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r11
  __int64 v5; // r10

  v2 = *(_DWORD *)(a1 + 80);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 520);
  v5 = *(_QWORD *)(a1 + 88);
  while ( *(_WORD *)(v5 + 4 * v3) != *(_WORD *)(v4 + 40) || *(_WORD *)(v5 + 4 * v3 + 2) != *(_WORD *)(v4 + 42) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
