/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140542FB0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiProcessKernelCfgImage @ 0x1400F9950 (MiProcessKernelCfgImage.c)
 *     LdrInitSecurityCookie @ 0x14054301C (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406EA3C4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrCopySecurityCookie @ 0x14072740C (LdrCopySecurityCookie.c)
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
