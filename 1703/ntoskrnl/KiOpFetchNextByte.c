/*
 * XREFs of KiOpFetchNextByte @ 0x1400091CC
 * Callers:
 *     KiOpDecode @ 0x14000906C (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140009294 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x140167FEC (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x140206A08 (KiOpFetchBytes.c)
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
