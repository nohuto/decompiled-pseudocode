/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180116724
 * Callers:
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18011131C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x180114810 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1801C9904 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1801CA010 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800399D4 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  _WORD *v10; // r8
  __int64 v11; // rsi
  __int16 v12; // ax
  _WORD *v13; // rax

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
      v9 = a3 + 1;
      v10 = (_WORD *)(*a1 + 2 * a1[1]);
      if ( a3 > 0x7FFFFFFE )
      {
        if ( a3 != -1LL )
          *v10 = 0;
      }
      else
      {
        v11 = a2 - (_QWORD)v10;
        do
        {
          if ( v9 == 1 )
            break;
          v12 = *(_WORD *)((char *)v10 + v11);
          if ( !v12 )
            break;
          *v10++ = v12;
          --v9;
        }
        while ( v9 );
        v13 = v10 - 1;
        if ( v9 )
          v13 = v10;
        *v13 = 0;
      }
      a1[1] += a3;
    }
  }
  return (unsigned int)v6;
}
