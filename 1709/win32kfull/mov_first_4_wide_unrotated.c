/*
 * XREFs of mov_first_4_wide_unrotated @ 0x1C02B0280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall mov_first_4_wide_unrotated(int a1, __int64 a2, int a3, char *a4, __int64 a5)
{
  __int64 v6; // r11
  _WORD *v7; // rcx
  __int64 v8; // r10
  char *v9; // rdx
  __int64 result; // rax
  char *v11; // r9
  _BYTE *v12; // rcx
  char v13; // al
  unsigned __int64 v14; // r8

  v6 = a3;
  v7 = (_WORD *)a5;
  v8 = 0LL;
  v9 = &a4[4 * a1];
  result = a5 & 3;
  if ( (a5 & 3) != 0 )
  {
    result = (unsigned int)(result - 1);
    if ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      if ( !(_DWORD)result )
      {
        while ( a4 != v9 )
        {
          *v7 = *(_WORD *)a4;
          result = *((unsigned __int16 *)a4 + 1);
          v7[1] = result;
          v7 = (_WORD *)((char *)v7 + a3);
          a4 += 4;
        }
        return result;
      }
      if ( (_DWORD)result != 1 )
        return result;
    }
    if ( a4 != v9 )
    {
      v11 = a4 + 2;
      v12 = (_BYTE *)(a5 + 2);
      do
      {
        *(v12 - 2) = *(v11 - 2);
        *(v12 - 1) = *(v11 - 1);
        v13 = *v11;
        v11 += 4;
        *v12 = v13;
        v12[1] = *(v11 - 3);
        v12 += a3;
        result = (__int64)(v11 - 2);
      }
      while ( v11 - 2 != v9 );
    }
  }
  else
  {
    v14 = (unsigned __int64)(v9 - a4 + 3) >> 2;
    if ( a4 > v9 )
      v14 = 0LL;
    if ( v14 )
    {
      do
      {
        result = *(unsigned int *)a4;
        ++v8;
        *(_DWORD *)v7 = result;
        a4 += 4;
        v7 = (_WORD *)((char *)v7 + v6);
      }
      while ( v8 != v14 );
    }
  }
  return result;
}
