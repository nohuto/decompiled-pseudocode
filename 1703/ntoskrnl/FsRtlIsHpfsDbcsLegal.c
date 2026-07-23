/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x140686530
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x140686530 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x140685D60 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x140686530 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v7; // dl
  char *v8; // rdx
  char *Buffer; // rax
  __m128i v10; // xmm1
  __int16 v11; // ax
  unsigned __int16 v12; // r10
  unsigned int v13; // r9d
  unsigned __int8 v14; // r8
  __int64 v15; // rcx
  _STRING RemainingName; // [rsp+20h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-28h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-18h] BYREF

  Length = DbcsName->Length;
  if ( !DbcsName->Length )
    return 0;
  if ( !WildCardsPermissible
    || (Length != 1 || (v7 = *DbcsName->Buffer, v7 != 46) && v7 != 34)
    && (Length != 2 || (v8 = DbcsName->Buffer, *(_WORD *)v8 != 11822) && (*v8 != 34 || v8[1] != 34)) )
  {
    Buffer = DbcsName->Buffer;
    if ( *Buffer != 92 )
      goto LABEL_15;
    if ( !LeadingBackslashPermissible )
      return 0;
    if ( Length > 1u )
    {
      DbcsName->Buffer = Buffer + 1;
      --DbcsName->MaximumLength;
      DbcsName->Length = Length - 1;
LABEL_15:
      if ( PathNamePermissible )
      {
        v10 = *(__m128i *)DbcsName;
        v11 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
        RemainingName = *DbcsName;
        if ( v11 )
        {
          while ( *(_BYTE *)_mm_srli_si128(v10, 8).m128i_i8[0] != 92 )
          {
            Path = (ANSI_STRING)v10;
            FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
            Path = FirstName;
            if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
              break;
            if ( !RemainingName.Length )
              return 1;
            v10 = (__m128i)RemainingName;
          }
          return 0;
        }
      }
      else
      {
        v12 = DbcsName->Length;
        if ( DbcsName->Length > 0xFFu )
          return 0;
        v13 = 0;
        if ( v12 )
        {
          do
          {
            v14 = DbcsName->Buffer[v13];
            if ( v14 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v14] )
            {
              if ( v13 == v12 - 1 )
                return 0;
              ++v13;
            }
            else if ( (v14 & 0x80u) == 0
                   && ((WildCardsPermissible != 0 ? 10 : 2) & (unsigned __int8)byte_14029D040[v14]) == 0 )
            {
              return 0;
            }
            ++v13;
          }
          while ( v13 < v12 );
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
