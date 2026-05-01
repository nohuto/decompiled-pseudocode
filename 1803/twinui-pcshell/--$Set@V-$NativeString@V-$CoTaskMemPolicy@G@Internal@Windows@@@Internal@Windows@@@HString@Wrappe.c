/*
 * XREFs of ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801B54EC
 * Callers:
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801B8EF0 (-RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUISer.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1801BC480 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1802656D4 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F5EB0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
        HSTRING *this,
        const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  unsigned __int64 v4; // rax
  UINT32 v5; // r8d
  unsigned int v6; // ecx

  v2 = *a2;
  if ( !v2 )
  {
    v5 = 0;
    v2 = &word_18035ABCC;
    return (unsigned int)Microsoft::WRL::Wrappers::HString::Set(this, v2, v5);
  }
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  v5 = -1;
  if ( v4 <= 0xFFFFFFFF )
    v5 = v4;
  v6 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v4 <= 0xFFFFFFFF )
    return (unsigned int)Microsoft::WRL::Wrappers::HString::Set(this, v2, v5);
  return v6;
}
