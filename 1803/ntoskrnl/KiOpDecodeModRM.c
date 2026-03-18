/*
 * XREFs of KiOpDecodeModRM @ 0x140186954
 * Callers:
 *     KiOpDecode @ 0x1401319AC (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x140131B0C (KiOpFetchNextByte.c)
 *     KiOpFetchBytes @ 0x14024B73C (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecodeModRM(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 80) )
  {
    result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0
    || (*(_BYTE *)(a1 + 65) & 7) != 4
    || (result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 66)), (int)result >= 0) )
  {
    v2 = *(_BYTE *)(a1 + 65) >> 6;
    if ( !v2 && (*(_BYTE *)(a1 + 65) & 7) == 5 || v2 == 2 )
    {
      result = KiOpFetchBytes(a1, 4LL, a1 + 68);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      if ( v2 != 1 )
        return 0LL;
      result = KiOpFetchBytes(a1, 1LL, &v4);
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(a1 + 68) = v4;
        return 0LL;
      }
    }
  }
  return result;
}
