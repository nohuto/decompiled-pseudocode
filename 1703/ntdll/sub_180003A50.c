/*
 * XREFs of sub_180003A50 @ 0x180003A50
 * Callers:
 *     sub_180003890 @ 0x180003890 (sub_180003890.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003A50(int a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = word_18015BF84;
  v2 = 0;
  if ( word_18015BF84 )
  {
    while ( 1 )
    {
      result = v2;
      if ( a1 == dword_18015BF70[v2] )
        break;
      if ( ++v2 >= (unsigned __int16)word_18015BF84 )
        return result;
    }
    while ( v2 < v1 - 1 )
    {
      v4 = v2++;
      dword_18015BF70[v4] = dword_18015BF70[v4 + 1];
    }
    result = 0xFFFFLL;
    word_18015BF84 = v1 - 1;
  }
  return result;
}
