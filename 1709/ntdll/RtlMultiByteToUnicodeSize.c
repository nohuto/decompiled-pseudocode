/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x180087780
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x1800E90E0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(_DWORD *a1, char *a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( a3 )
      RtlUTF8ToUnicodeN(0LL, 0, a1, a2, a3);
    else
      *a1 = 0;
  }
  else if ( NlsMbCodePageTag )
  {
    while ( a3 )
    {
      v5 = (unsigned __int8)*a2;
      --a3;
      ++a2;
      if ( NlsLeadByteInfoTable[v5] )
      {
        if ( !a3 )
        {
          v3 += 2;
          break;
        }
        --a3;
        ++a2;
      }
      v3 += 2;
    }
    *a1 = v3;
  }
  else
  {
    *a1 = 2 * a3;
  }
  return 0LL;
}
