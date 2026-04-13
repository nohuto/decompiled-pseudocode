/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800613C4
 * Callers:
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F548 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WPEAD@Z @ 0x180061464 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@_ea_180061464.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180061558 (-Concat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::ConcatFormat(
        _QWORD *a1,
        __int64 a2,
        ...)
{
  int v3; // ebx
  LPVOID pv[7]; // [rsp+20h] [rbp-38h] BYREF
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( *a1 && *(_WORD *)*a1 )
  {
    memset(pv, 0, 24);
    v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
           pv,
           a2,
           (__int64 *)va);
    if ( v3 >= 0 )
      v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::Concat(a1, pv);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  else
  {
    return (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
                           a1,
                           a2,
                           (__int64 *)va);
  }
  return (unsigned int)v3;
}
