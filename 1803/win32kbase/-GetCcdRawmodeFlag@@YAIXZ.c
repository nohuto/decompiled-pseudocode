/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C004BB3C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CF034 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  return (unsigned __int8)((__int64 (*)(void))qword_1C01A1AE8)() != 0 ? 0x20000 : 0;
}
