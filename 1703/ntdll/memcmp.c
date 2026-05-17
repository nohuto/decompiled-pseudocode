/*
 * XREFs of memcmp @ 0x180099A70
 * Callers:
 *     sub_18001B870 @ 0x18001B870 (sub_18001B870.c)
 *     sub_18001B9D8 @ 0x18001B9D8 (sub_18001B9D8.c)
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     sub_180051CBC @ 0x180051CBC (sub_180051CBC.c)
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180054970 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlFindUnicodeSubstring @ 0x180068490 (RtlFindUnicodeSubstring.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     RtlSidHashLookup @ 0x180082620 (RtlSidHashLookup.c)
 *     RtlReplaceSidInSd @ 0x1800E55B0 (RtlReplaceSidInSd.c)
 *     sub_1800E8CE4 @ 0x1800E8CE4 (sub_1800E8CE4.c)
 *     sub_1800F6ECC @ 0x1800F6ECC (sub_1800F6ECC.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 *     sub_18010AD04 @ 0x18010AD04 (sub_18010AD04.c)
 *     sub_18010AE04 @ 0x18010AE04 (sub_18010AE04.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
