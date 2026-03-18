/*
 * XREFs of MiCheckDosCalls @ 0x1406B5068
 * Callers:
 *     MiVerifyImageHeader @ 0x140494BDC (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckDosCalls(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int16 v2; // r9
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx
  unsigned __int16 v7; // cx
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned __int8 v10; // di

  v2 = a1[15];
  if ( v2 )
  {
    v5 = (unsigned __int16)a1[20];
    v6 = (_WORD *)((char *)a1 + v5);
    if ( v5 + 2 * (unsigned __int64)v2 <= a2 )
    {
      v7 = 0;
      v8 = (unsigned __int16)a1[21];
      do
      {
        v9 = *v6;
        if ( v9 + v8 >= a2 )
          break;
        v10 = *((_BYTE *)a1 + v9 + v8);
        if ( !v10 || v8 + v9 + (unsigned __int64)v10 >= a2 )
          break;
        if ( v10 == 8 && *(_QWORD *)((char *)a1 + v9 + v8 + 1) == *(_QWORD *)"DOSCALLS" )
          return 1LL;
        ++v6;
        ++v7;
      }
      while ( v7 < v2 );
    }
  }
  return 0LL;
}
