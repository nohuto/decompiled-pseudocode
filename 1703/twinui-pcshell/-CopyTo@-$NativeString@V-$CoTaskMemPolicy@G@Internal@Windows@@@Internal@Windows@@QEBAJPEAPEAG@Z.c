/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180037FD0
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180033C40 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x180051560 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180063830 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x180082180 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  void *v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    memset(v8, 0, 24);
    if ( v4 == -1 )
    {
      do
        ++v4;
      while ( *(_WORD *)(v3 + 2 * v4) );
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(v8);
    if ( v5 < 0 )
    {
      v6 = (void *)v8[0];
    }
    else
    {
      v6 = 0LL;
      *a2 = v8[0];
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return (unsigned int)v5;
}
