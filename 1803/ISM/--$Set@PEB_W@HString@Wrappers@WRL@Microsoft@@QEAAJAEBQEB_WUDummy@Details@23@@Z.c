/*
 * XREFs of ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x1800A2194
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A50D4 (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rdi
  unsigned __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // r8d
  UINT32 v7; // edx
  const WCHAR *v8; // rcx

  v2 = *a2;
  if ( !*a2 )
  {
    WindowsDeleteString(*string);
    v7 = 0;
    v8 = &sourceString;
    goto LABEL_9;
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
  {
    WindowsDeleteString(*string);
    v7 = v5;
    v8 = v2;
LABEL_9:
    *string = 0LL;
    return (unsigned int)WindowsCreateString(v8, v7, string);
  }
  return v6;
}
