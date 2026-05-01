/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x18005AE10
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005A980 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18017CBC4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800029D4 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800381D8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const unsigned __int16 *a2,
        va_list a3)
{
  unsigned __int64 v6; // rbp
  signed int v7; // ebx
  __int64 v8; // rbx
  wchar_t *v9; // rdi
  bool v10; // al
  unsigned __int64 v11; // rcx
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v6);
    if ( v7 < 0 )
      break;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(wchar_t **)a1;
    _o__set_errno(0LL);
    v7 = StringCchVPrintfW(v9, v8, a2, a3);
    if ( v7 == -2147024774 )
    {
      _o__get_errno(&v13);
      v7 = -2147024809;
      if ( v13 != 22 )
        v7 = -2147024774;
    }
    v10 = v7 == -2147024774;
    if ( v7 == -2147024774 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v6 = -1LL;
      if ( v11 + 32 >= v11 )
        v6 = v11 + 32;
      v7 = v11 + 32 < v11 ? 0x80070216 : 0;
      v10 = v11 + 32 >= v11;
    }
    if ( !v10 )
    {
      if ( v7 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = -1LL;
        return (unsigned int)v7;
      }
      break;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return (unsigned int)v7;
}
