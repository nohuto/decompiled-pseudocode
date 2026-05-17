/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x180083760
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180063BE0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(int *a1, char *a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( byte_18015ADB1 )
  {
    if ( a3 )
      RtlUTF8ToUnicodeN(0LL, 0, a1, a2, a3);
    else
      *a1 = 0;
  }
  else
  {
    if ( NlsMbCodePageTag )
    {
      while ( a3 )
      {
        v5 = (unsigned __int8)*a2;
        --a3;
        ++a2;
        if ( word_18015ADC0[v5] )
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
    }
    else
    {
      v3 = 2 * a3;
    }
    *a1 = v3;
  }
  return 0LL;
}
