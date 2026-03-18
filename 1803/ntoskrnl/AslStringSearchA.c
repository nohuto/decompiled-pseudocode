/*
 * XREFs of AslStringSearchA @ 0x1407D90B8
 * Callers:
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringSearchA(__int64 a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  _BYTE *v10; // rdi
  char v11; // si
  unsigned int v12; // eax

  v4 = 0LL;
  if ( a2 && a4 <= a2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      v9 = v7;
      if ( a4 )
      {
        v10 = a3;
        do
        {
          if ( v9 >= a2 )
            break;
          v11 = *(_BYTE *)(v9 + a1);
          if ( !v11 && v9 + 1 >= a2 )
            return v4;
          v12 = v9 + 1;
          if ( v11 )
            v12 = v9;
          if ( *(_BYTE *)(v12 + a1) != *v10 )
            break;
          ++v8;
          ++v10;
          v9 = v12 + 1;
        }
        while ( v8 < a4 );
      }
      if ( v8 == a4 )
        break;
      if ( ++v7 + a4 > a2 )
        return v4;
    }
    return a1 + v7;
  }
  return v4;
}
