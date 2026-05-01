/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1802FD8FC
 * Callers:
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1801925D0 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1801CBAF4 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1802B2F10 (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x18008025C (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

int __fastcall CallerIdentity::GetPackageFullNameFromAppId(CallerIdentity *this, void **a2, unsigned __int16 **a3)
{
  int result; // eax
  __int64 v5; // rdx
  bool v6; // sf
  unsigned __int64 v7; // r9
  UINT32 *bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v10; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR packageFullNames; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR buffer[128]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 128;
  *a2 = 0LL;
  packageFullNames = 0LL;
  count = 1;
  result = ParseAppUserModelId((const unsigned __int16 *)this, packageFamilyName, (__int64)a3, 0LL, 0LL);
  if ( result >= 0 )
  {
    result = FindPackagesByPackageFamily(packageFamilyName, 0x10u, &count, &packageFullNames, &v10, buffer, 0LL);
    v6 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0x80070000;
      v6 = result < 0;
    }
    if ( !v6 )
    {
      if ( count != 1 )
        result = -2147221165;
      if ( result >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( buffer[v7] );
        return _AllocStringWorker<CTCoAllocPolicy>(2147746131LL, v5, buffer, v7, (__int64)bufferLength, a2);
      }
    }
  }
  return result;
}
