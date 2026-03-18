/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0067434
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7DB4 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  return (unsigned __int8)((__int64 (*)(void))qword_1C0190700)() != 0 ? 0x20000 : 0;
}
