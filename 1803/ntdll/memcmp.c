/*
 * XREFs of memcmp @ 0x18008EED0
 * Callers:
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_180004B48 @ 0x180004B48 (sub_180004B48.c)
 *     sub_180005F30 @ 0x180005F30 (sub_180005F30.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18000A0D0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     sub_1800242B4 @ 0x1800242B4 (sub_1800242B4.c)
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 *     RtlEqualSid @ 0x1800442A0 (RtlEqualSid.c)
 *     sub_180076DA0 @ 0x180076DA0 (sub_180076DA0.c)
 *     RtlSidHashLookup @ 0x18007CC90 (RtlSidHashLookup.c)
 *     RtlReplaceSidInSd @ 0x1800DFF60 (RtlReplaceSidInSd.c)
 *     sub_1800E3AAC @ 0x1800E3AAC (sub_1800E3AAC.c)
 *     RtlFindUnicodeSubstring @ 0x1800E4B20 (RtlFindUnicodeSubstring.c)
 *     sub_1800F4B74 @ 0x1800F4B74 (sub_1800F4B74.c)
 *     sub_18010DBB4 @ 0x18010DBB4 (sub_18010DBB4.c)
 *     sub_18010DCB4 @ 0x18010DCB4 (sub_18010DCB4.c)
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
