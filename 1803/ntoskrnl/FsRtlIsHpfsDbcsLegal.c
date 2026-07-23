/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x140716410
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x140716410 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x140715C60 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x140716410 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v8; // cl
  char *v9; // rcx
  char *Buffer; // rbx
  __m128i v11; // xmm1
  __int16 v12; // ax
  unsigned int v13; // r8d
  unsigned __int8 v14; // r9
  __int64 v15; // rcx
  _STRING RemainingName; // [rsp+20h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-28h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-18h] BYREF

  Length = DbcsName->Length;
  if ( !DbcsName->Length )
    return 0;
  if ( !WildCardsPermissible
    || (Length != 1 || (v8 = *DbcsName->Buffer, v8 != 46) && v8 != 34)
    && (Length != 2 || ((v9 = DbcsName->Buffer, *v9 != 46) || v9[1] != 46) && (*v9 != 34 || v9[1] != 34)) )
  {
    Buffer = DbcsName->Buffer;
    if ( *Buffer != 92 )
      goto LABEL_16;
    if ( !LeadingBackslashPermissible )
      return 0;
    if ( Length > 1u )
    {
      ++Buffer;
      --Length;
      DbcsName->Buffer = Buffer;
      --DbcsName->MaximumLength;
      DbcsName->Length = Length;
LABEL_16:
      if ( PathNamePermissible )
      {
        v11 = *(__m128i *)DbcsName;
        v12 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
        RemainingName = *DbcsName;
        if ( v12 )
        {
          while ( *(_BYTE *)_mm_srli_si128(v11, 8).m128i_i8[0] != 92 )
          {
            Path = (ANSI_STRING)v11;
            FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
            Path = FirstName;
            if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
              break;
            if ( !RemainingName.Length )
              return 1;
            v11 = (__m128i)RemainingName;
          }
          return 0;
        }
      }
      else
      {
        if ( Length > 0xFFu )
          return 0;
        v13 = 0;
        if ( Length )
        {
          do
          {
            v14 = Buffer[v13];
            if ( v14 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v14] )
            {
              if ( v13 == DbcsName->Length - 1 )
                return 0;
              ++v13;
            }
            else if ( (v14 & 0x80u) == 0
                   && ((WildCardsPermissible != 0 ? 10 : 2) & (unsigned __int8)byte_1402F91A0[v14]) == 0 )
            {
              return 0;
            }
            ++v13;
          }
          while ( v13 < Length );
          if ( v14 <= 0x2Eu )
          {
            v15 = 0x400500000000LL;
            if ( _bittest64(&v15, v14) )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}
