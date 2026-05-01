/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x1800659F0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1801C1AD0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801C20F8 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1801DF990 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x1801DFC50 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1801DFCB0 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18007B35C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1801C0D0C (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        void **a6)
{
  unsigned __int64 v6; // rsi
  signed int v9; // ebx

  v6 = -1LL;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 )
    v6 = a4 + 1;
  v9 = a4 + 1 < a4 ? 0x80070216 : 0;
  if ( a4 + 1 >= a4 )
  {
    *a6 = 0LL;
    if ( is_mul_ok(v6, 2uLL) )
    {
      v9 = CTCoAllocPolicy::Alloc((IMalloc *)0x80070216LL, 0, 2 * v6, a6);
      if ( v9 >= 0 )
        StringCchCopyNExW((char *)*a6, v6, a3, a4);
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)v9;
}
