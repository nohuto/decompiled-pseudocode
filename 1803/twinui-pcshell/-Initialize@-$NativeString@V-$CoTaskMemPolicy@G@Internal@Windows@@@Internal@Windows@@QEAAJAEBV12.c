/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800F7BD0
 * Callers:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800F7BFC (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18019C9A0 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z @ 0x1802886D0 (-GetAccessibleName@CSwitchItemElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z @ 0x18029D3C0 (-GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x1802F7E38 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdx

  v2 = a2[1];
  v3 = *a2;
  if ( v2 == -1LL )
  {
    if ( v3 )
    {
      do
        ++v2;
      while ( *(_WORD *)(v3 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(a1, v3, v2);
}
