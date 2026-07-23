/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x180022F34
 * Callers:
 *     LdrInitSecurityCookie @ 0x180022E04 (LdrInitSecurityCookie.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1800299D0 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        void *a1,
        unsigned int a2,
        _IMAGE_NT_HEADERS64 *a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 v5; // rbp
  __int64 Config; // rax
  void *v9; // rdx
  unsigned __int64 v10; // rbx
  PIMAGE_SECTION_HEADER v11; // rax
  __int64 v12; // r11
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+40h] [rbp+18h] BYREF

  NtHeaders = a3;
  v5 = a2;
  RtlImageNtHeaderEx(1u, a1, 0LL, &NtHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig((int)a1);
  if ( a4 )
    *a4 = 0;
  if ( Config
    && *(_DWORD *)Config >= 0x70u
    && (v10 = *(_QWORD *)(Config + 88)) != 0
    && v10 > (unsigned __int64)a1
    && v10 < (unsigned __int64)a1 + v5 - 8 )
  {
    v11 = RtlSectionTableFromVirtualAddress(NtHeaders, v9, (int)v10 - (int)a1);
    if ( v11 && (v11->Characteristics & 0x80000000) == 0 && a4 )
      *a4 = 1;
    if ( a5 )
      *a5 = v12;
    return v10;
  }
  else
  {
    if ( a5 )
    {
      if ( Config && *(_DWORD *)Config >= 4u )
        *a5 = Config;
      else
        *a5 = 0LL;
    }
    return 0LL;
  }
}
