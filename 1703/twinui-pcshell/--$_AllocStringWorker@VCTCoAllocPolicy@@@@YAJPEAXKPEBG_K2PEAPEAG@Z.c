/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180063D30 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18017616C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180176490 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1801765C4 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x180191A60 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x180191AC0 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801930C8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180078798 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1801755AC (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
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
