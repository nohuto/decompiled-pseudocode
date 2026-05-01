/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180176490
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1800F05C8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z @ 0x18017DB2C (-GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801754A8 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CallerIdentity::GetPackageFullNameFromAppId(CallerIdentity *this, void **a2, unsigned __int16 **a3)
{
  int result; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  UINT32 *bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v9; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR packageFullNames; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR buffer[128]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 128;
  *a2 = 0LL;
  packageFullNames = 0LL;
  count = 1;
  result = ParseAppUserModelId((char *)this, (char *)packageFamilyName, (__int64)a3, 0LL, 0LL);
  if ( result >= 0 )
  {
    result = FindPackagesByPackageFamily(packageFamilyName, 0x10u, &count, &packageFullNames, &v9, buffer, 0LL);
    if ( result >= 0 )
    {
      if ( count != 1 )
        result = -2147221165;
      if ( result >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( buffer[v6] );
        return _AllocStringWorker<CTCoAllocPolicy>(2147746131LL, v5, buffer, v6, (__int64)bufferLength, a2);
      }
    }
  }
  return result;
}
