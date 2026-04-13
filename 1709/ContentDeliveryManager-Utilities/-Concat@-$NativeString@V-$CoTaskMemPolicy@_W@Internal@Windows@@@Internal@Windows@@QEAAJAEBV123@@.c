/*
 * XREFs of ?Concat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180061558
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800613C4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180037ED8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::Concat(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rsi
  int v6; // r10d
  unsigned __int64 v7; // r9
  _WORD *v8; // r8
  __int64 v9; // rsi
  __int16 v10; // ax
  _WORD *v11; // rax

  v2 = a2[1];
  v3 = -1LL;
  if ( v2 == -1LL )
  {
    if ( *a2 )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( *(_WORD *)(*a2 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  v5 = *a2;
  v6 = 0;
  if ( *a2 )
  {
    if ( a1[1] == -1LL )
    {
      if ( *a1 )
      {
        do
          ++v3;
        while ( *(_WORD *)(*a1 + 2 * v3) );
      }
      else
      {
        v3 = 0LL;
      }
      a1[1] = v3;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v2 + a1[1]);
    if ( v6 >= 0 )
    {
      v7 = v2 + 1;
      v8 = (_WORD *)(*a1 + 2LL * a1[1]);
      if ( v2 > 0x7FFFFFFE )
      {
        if ( v2 != -1LL )
          *v8 = 0;
      }
      else
      {
        v9 = v5 - (_QWORD)v8;
        do
        {
          if ( v7 == 1 )
            break;
          v10 = *(_WORD *)((char *)v8 + v9);
          if ( !v10 )
            break;
          *v8++ = v10;
          --v7;
        }
        while ( v7 );
        v11 = v8 - 1;
        if ( v7 )
          v11 = v8;
        *v11 = 0;
      }
      a1[1] += v2;
    }
  }
  return (unsigned int)v6;
}
