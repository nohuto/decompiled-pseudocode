/*
 * XREFs of CmpKeyFullNameLength @ 0x140501640
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406659C0 (CmpConstructNameFromKcbNameBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyFullNameLength(__int64 a1)
{
  unsigned int i; // r8d
  __int64 v2; // rdx
  int v3; // eax

  for ( i = 0; a1; a1 = *(_QWORD *)(a1 + 64) )
  {
    if ( (*(_DWORD *)(a1 + 176) & 0x40000) == 0 || !*(_QWORD *)(a1 + 64) )
    {
      v2 = *(_QWORD *)(a1 + 72);
      v3 = *(unsigned __int16 *)(v2 + 24);
      if ( (*(_DWORD *)v2 & 1) != 0 )
        v3 *= 2;
      i += v3 + 2;
    }
  }
  return i;
}
