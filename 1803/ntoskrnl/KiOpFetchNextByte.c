/*
 * XREFs of KiOpFetchNextByte @ 0x140131B0C
 * Callers:
 *     KiOpDecode @ 0x1401319AC (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140131BD4 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x140186954 (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14024B73C (KiOpFetchBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
