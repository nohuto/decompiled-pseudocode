/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x1404B1500
 * Callers:
 *     LdrInitSecurityCookie @ 0x1404B1454 (LdrInitSecurityCookie.c)
 *     LdrCopySecurityCookie @ 0x1406EEF30 (LdrCopySecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1404B15A0 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        PVOID BaseAddress,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 v5; // rsi
  __int64 Config; // rax
  unsigned __int64 v9; // r8
  PIMAGE_NT_HEADERS NtHeader; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &NtHeader);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  if ( a4 )
    *a4 = 0;
  if ( Config
    && *(_DWORD *)Config >= 0x70u
    && (v9 = *(_QWORD *)(Config + 88)) != 0
    && v9 > (unsigned __int64)BaseAddress
    && v9 < (unsigned __int64)BaseAddress + v5 - 8 )
  {
    if ( a5 )
      *a5 = Config;
    return v9;
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
