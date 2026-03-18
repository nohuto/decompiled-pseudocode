/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x1404B13E8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiProcessKernelCfgImage @ 0x14006BEA0 (MiProcessKernelCfgImage.c)
 *     LdrInitSecurityCookie @ 0x1404B1454 (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406BD5E4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrCopySecurityCookie @ 0x1406EEF30 (LdrCopySecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // eax
  int v8; // r8d

  if ( !a3
    || (a4 ? (result = MiProcessKernelCfgImageLoadConfig(a1, a3)) : (result = MiProcessKernelCfgImage(a1, a2, a3)),
        (int)result >= 0) )
  {
    if ( a4 )
    {
      LdrCopySecurityCookie(
        *(_QWORD *)(a1 + 48),
        *(unsigned int *)(a1 + 64),
        a3,
        *(_QWORD *)(a4 + 48),
        *(_DWORD *)(a4 + 64));
    }
    else
    {
      ExGenRandom(0);
      v7 = ExGenRandom(0);
      LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v8, v7);
    }
    return 0LL;
  }
  return result;
}
