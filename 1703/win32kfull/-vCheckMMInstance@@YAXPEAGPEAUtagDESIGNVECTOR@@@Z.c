/*
 * XREFs of ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C003B744
 * Callers:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreGetCannonicalName @ 0x1C027413C (GreGetCannonicalName.c)
 */

void __fastcall vCheckMMInstance(STRSAFE_PCNZWCH pszSrc, struct tagDESIGNVECTOR *a2)
{
  STRSAFE_PCNZWCH v3; // rbx
  wchar_t v4; // ax
  wchar_t pszDest[264]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v6[528]; // [rsp+240h] [rbp-238h] BYREF

  *((_DWORD *)a2 + 1) = 0;
  v3 = pszSrc;
  while ( 1 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    ++v3;
    if ( v4 == 40 )
    {
      if ( *v3 && !_wcsicmp(v3, L"OpenType)") && RtlStringCchCopyNW(pszDest, 0x104uLL, pszSrc, v3 - pszSrc - 1) >= 0 )
        GreGetCannonicalName(pszDest, v6);
      return;
    }
  }
}
