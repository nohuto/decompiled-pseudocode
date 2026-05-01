/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1800E47B0 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18011AFF8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801C0C08 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromAppId(CallerIdentity *this, void **a2, unsigned __int16 **a3)
{
  __int64 v4; // rcx
  LONG PackagesByPackageFamily; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  UINT32 *bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v11; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR packageFullNames; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR buffer[128]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 128;
  *a2 = 0LL;
  packageFullNames = 0LL;
  count = 1;
  LODWORD(v4) = ParseAppUserModelId((char *)this, (char *)packageFamilyName, (__int64)a3, 0LL, 0LL);
  if ( (int)v4 >= 0 )
  {
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                &count,
                                &packageFullNames,
                                &v11,
                                buffer,
                                0LL);
    v4 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( PackagesByPackageFamily <= 0 )
      v4 = (unsigned int)PackagesByPackageFamily;
    if ( (int)v4 >= 0 )
    {
      if ( count != 1 )
        v4 = 2147746131LL;
      if ( (int)v4 >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( buffer[v7] );
        LODWORD(v4) = _AllocStringWorker<CTCoAllocPolicy>(v4, v6, buffer, v7, (__int64)bufferLength, a2);
      }
    }
  }
  return (unsigned int)v4;
}
