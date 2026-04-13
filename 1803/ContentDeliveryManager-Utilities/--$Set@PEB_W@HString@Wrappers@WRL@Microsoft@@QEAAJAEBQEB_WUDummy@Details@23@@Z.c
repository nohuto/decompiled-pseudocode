/*
 * XREFs of ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18006B7F0
 * Callers:
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800692A0 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006B440 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
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
    v8 = &Src;
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
