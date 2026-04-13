/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180037ED8
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800545F8 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18005FA80 (-LowerCaseBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WPEAD@Z @ 0x180061464 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@_ea_180061464.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180061558 (-Concat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // ebx
  _WORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _WORD *v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  LPVOID v12; // rax

  v2 = -1LL;
  if ( a2 + 1 >= a2 )
    v2 = a2 + 1;
  v4 = a2 + 1 < a2 ? 0x80070216 : 0;
  if ( a2 + 1 >= a2 )
  {
    if ( *(_QWORD *)(a1 + 16) == -1LL )
    {
      if ( *(_QWORD *)(a1 + 8) == -1LL )
      {
        v5 = *(_WORD **)a1;
        if ( v5 )
        {
          v6 = -1LL;
          do
            ++v6;
          while ( v5[v6] );
        }
        else
        {
          v6 = 0LL;
        }
        *(_QWORD *)(a1 + 8) = v6;
      }
      if ( *(_QWORD *)a1 )
        v7 = *(_QWORD *)(a1 + 8) + 1LL;
      else
        v7 = 0LL;
      *(_QWORD *)(a1 + 16) = v7;
    }
    v8 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
    {
      if ( !is_mul_ok(v2, 2uLL) )
        return (unsigned int)-2147024362;
      v4 = 0;
      v9 = CoTaskMemAlloc(2 * v2);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v9;
        *v9 = 0;
        return v4;
      }
      return (unsigned int)-2147024882;
    }
    if ( v2 > v8 )
    {
      v10 = 2 * v8;
      if ( is_mul_ok(v8, 2uLL) )
      {
        v4 = 0;
      }
      else
      {
        v10 = -1LL;
        v4 = -2147024362;
      }
      if ( (v4 & 0x80000000) == 0 )
      {
        v11 = v8 + 2048;
        if ( v10 - v8 <= 0x800 )
          v11 = v10;
        if ( v2 > v11 )
          v11 = v2;
        v12 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v11);
        if ( v12 )
        {
          *(_QWORD *)(a1 + 16) = v11;
          *(_QWORD *)a1 = v12;
          return v4;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  return v4;
}
