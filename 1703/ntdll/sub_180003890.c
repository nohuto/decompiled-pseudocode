/*
 * XREFs of sub_180003890 @ 0x180003890
 * Callers:
 *     sub_180003824 @ 0x180003824 (sub_180003824.c)
 * Callees:
 *     sub_180003A50 @ 0x180003A50 (sub_180003A50.c)
 *     sub_1800E20D4 @ 0x1800E20D4 (sub_1800E20D4.c)
 */

char __fastcall sub_180003890(int a1)
{
  unsigned __int16 v1; // ax
  char v3; // di
  unsigned __int16 v5; // bx
  int v6; // r8d
  __int64 v7; // rcx

  v1 = word_18015BF84;
  v3 = 1;
  if ( word_18015BF84 == 5 )
  {
    v5 = 0;
    if ( (unsigned __int8)sub_1800E20D4(dword_18015BF70[0]) )
    {
      v6 = (unsigned __int16)word_18015BF84 - 1;
      if ( v6 > 0 )
      {
        do
        {
          v7 = v5++;
          dword_18015BF70[v7] = dword_18015BF70[v7 + 1];
        }
        while ( v5 < v6 );
      }
      dword_18015BF70[v6] = a1;
    }
    else
    {
      sub_180003A50(dword_18015BF70[0]);
      return 0;
    }
  }
  else
  {
    ++word_18015BF84;
    dword_18015BF70[v1] = a1;
  }
  return v3;
}
