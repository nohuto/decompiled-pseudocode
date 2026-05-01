/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800EC13C
 * Callers:
 *     _lambda_f748ab983864a1d9251a0884a7c17331_::operator() @ 0x1800E8390 (_lambda_f748ab983864a1d9251a0884a7c17331_--operator().c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x1800EACE0 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18017CBC4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800381D8 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18003923C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx

  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    if ( a1[1] == -1 )
    {
      v8 = *a1;
      if ( v8 )
      {
        do
          ++v7;
        while ( *(_WORD *)(v8 + 2 * v7) );
      }
      else
      {
        v7 = 0LL;
      }
      a1[1] = v7;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           a3 + a1[1]);
    if ( v6 >= 0 )
    {
      StringCchCopyNW((char *)(*a1 + 2 * a1[1]), a3 + 1, a2, a3);
      a1[1] += a3;
    }
  }
  return (unsigned int)v6;
}
