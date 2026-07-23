/*
 * XREFs of FsRtlIsFatDbcsLegal @ 0x14056E910
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x14056E910 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     FsRtlIsFatDbcsLegal @ 0x14056E910 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlDissectDbcs @ 0x140715C60 (FsRtlDissectDbcs.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x140715D50 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsFatDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // bx
  char v6; // si
  BOOLEAN result; // al
  char *v8; // rdi
  unsigned int v9; // r8d
  unsigned __int8 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // rcx
  char v13; // dl
  char *Buffer; // rdx
  __m128i v15; // xmm1
  __int16 v16; // ax
  unsigned int i; // ecx
  unsigned __int8 v18; // dl
  _STRING RemainingName; // [rsp+20h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-28h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-18h] BYREF

  Length = DbcsName->Length;
  v6 = 0;
  if ( !DbcsName->Length )
    return 0;
  result = 1;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v13 = *DbcsName->Buffer;
      if ( v13 == 46 || v13 == 34 )
        return 1;
      result = 1;
    }
    if ( Length == 2 )
    {
      Buffer = DbcsName->Buffer;
      if ( *(_WORD *)Buffer == 11822 || *Buffer == 34 && Buffer[1] == 34 )
        return 1;
    }
  }
  v8 = DbcsName->Buffer;
  if ( *v8 != 92 )
  {
LABEL_4:
    if ( !PathNamePermissible )
    {
      if ( WildCardsPermissible && FsRtlDoesDbcsContainWildCards(DbcsName) )
      {
        for ( i = 0; i < Length; ++i )
        {
          v18 = v8[i];
          if ( v18 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v18] )
          {
            ++i;
          }
          else if ( (v18 & 0x80u) == 0 && (byte_1402F91A0[v18] & 9) == 0 )
          {
            return 0;
          }
        }
        return 1;
      }
      if ( Length <= 0xCu )
      {
        v9 = 0;
        if ( !Length )
          return 1;
        do
        {
          v10 = v8[v9];
          if ( v10 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v10] )
          {
            if ( !v6 && v9 >= 7 )
              return 0;
            v11 = Length;
            if ( v9 == Length - 1 )
              return 0;
            ++v9;
          }
          else
          {
            if ( (v10 & 0x80u) == 0
              && ((unsigned __int8)(WildCardsPermissible != 0 ? 9 : 1) & byte_1402F91A0[(unsigned __int8)v8[v9]]) == 0 )
            {
              return 0;
            }
            if ( v10 == 46 || v10 == 34 )
            {
              if ( !v9 )
                return 0;
              if ( v6 )
                return 0;
              v11 = Length;
              v6 = 1;
              if ( Length - v9 - 1 > 3 || v8[v9 - 1] == 32 )
                return 0;
            }
            else
            {
              v11 = Length;
            }
            if ( v9 >= 8 && !v6 )
              return 0;
          }
          ++v9;
        }
        while ( v9 < v11 );
        if ( v10 > 0x2Eu )
          return 1;
        v12 = 0x400500000000LL;
        if ( !_bittest64(&v12, v10) )
          return 1;
      }
      return 0;
    }
    v15 = *(__m128i *)DbcsName;
    v16 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
    RemainingName = *DbcsName;
    if ( v16 )
    {
      while ( *(_BYTE *)_mm_srli_si128(v15, 8).m128i_i8[0] != 92 )
      {
        Path = (ANSI_STRING)v15;
        FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
        Path = FirstName;
        if ( !FsRtlIsFatDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
          break;
        if ( !RemainingName.Length )
          return 1;
        v15 = (__m128i)RemainingName;
      }
      return 0;
    }
    return 1;
  }
  if ( !LeadingBackslashPermissible )
    return 0;
  if ( Length > 1u )
  {
    --Length;
    DbcsName->Buffer = ++v8;
    --DbcsName->MaximumLength;
    DbcsName->Length = Length;
    goto LABEL_4;
  }
  return result;
}
