/*
 * XREFs of or_all_2_wide_unrotated @ 0x1C00EBF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall or_all_2_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int16 *a4, __int64 a5)
{
  int v5; // eax
  _BYTE *v6; // rcx
  unsigned __int16 *v7; // rdx
  unsigned __int16 v8; // ax
  __int16 result; // ax

  v5 = a1;
  v6 = (_BYTE *)a5;
  v7 = &a4[v5];
  if ( (a5 & 1) != 0 )
  {
    do
    {
      v8 = *a4++;
      *v6 |= v8;
      result = HIBYTE(v8);
      v6[1] |= result;
      v6 += a3;
    }
    while ( a4 != v7 );
  }
  else
  {
    do
    {
      result = *a4++;
      *(_WORD *)v6 |= result;
      v6 += a3;
    }
    while ( a4 != v7 );
  }
  return result;
}
