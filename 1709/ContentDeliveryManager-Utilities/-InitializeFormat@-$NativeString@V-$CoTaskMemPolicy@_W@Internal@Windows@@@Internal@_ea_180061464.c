/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WPEAD@Z @ 0x180061464
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800613C4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180061440 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180001770 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180037ED8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        va_list a3)
{
  unsigned __int64 v6; // rbp
  signed int v7; // ebx
  __int64 v8; // rbx
  wchar_t *v9; // rdi
  bool v10; // al
  unsigned __int64 v11; // rcx
  int Value; // [rsp+68h] [rbp+20h] BYREF

  v6 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v6);
    if ( v7 < 0 )
      break;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(wchar_t **)a1;
    _set_errno(0);
    v7 = StringCchVPrintfW(v9, v8, a2, a3);
    if ( v7 == -2147024774 )
    {
      _get_errno(&Value);
      v7 = -2147024809;
      if ( Value != 22 )
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
