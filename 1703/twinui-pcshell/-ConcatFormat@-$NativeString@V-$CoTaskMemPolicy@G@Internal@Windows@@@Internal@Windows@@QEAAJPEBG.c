/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18017CBC4
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x18017CA98 (-IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x18005AE10 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_18005AE10.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800EC13C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        __int64 *a1,
        const unsigned __int16 *a2,
        ...)
{
  int v3; // eax
  void *v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r8
  LPVOID pv; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( *a1 && *(_WORD *)*a1 )
  {
    pv = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           (__int64)&pv,
           a2,
           va);
    v4 = pv;
    v5 = v3;
    if ( v3 >= 0 )
    {
      v6 = v9;
      if ( v9 == -1LL )
      {
        if ( pv )
        {
          do
            ++v6;
          while ( *((_WORD *)pv + v6) );
        }
        else
        {
          v6 = 0LL;
        }
      }
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             a1,
             (char *)pv,
             v6);
    }
    if ( v4 )
      CoTaskMemFree(v4);
  }
  else
  {
    return (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                           (__int64)a1,
                           a2,
                           va);
  }
  return v5;
}
