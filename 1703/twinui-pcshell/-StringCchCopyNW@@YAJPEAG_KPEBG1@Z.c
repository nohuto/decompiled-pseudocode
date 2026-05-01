/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18003923C
 * Callers:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800EC13C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 >= 0 )
  {
    if ( a4 <= 0x7FFFFFFE )
    {
      v4 = 0;
      if ( !a2 )
        goto LABEL_12;
      v5 = a4 - a2;
      v6 = a3 - a1;
      do
      {
        if ( !(v5 + a2) )
          break;
        v7 = *(_WORD *)&a1[v6];
        if ( !v7 )
          break;
        *(_WORD *)a1 = v7;
        a1 += 2;
        --a2;
      }
      while ( a2 );
      if ( !a2 )
      {
LABEL_12:
        a1 -= 2;
        v4 = -2147024774;
      }
    }
    else
    {
      v4 = -2147024809;
    }
    goto LABEL_14;
  }
  if ( a2 )
LABEL_14:
    *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
