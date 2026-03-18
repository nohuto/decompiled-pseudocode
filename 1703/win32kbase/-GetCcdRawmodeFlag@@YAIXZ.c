/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0057C44
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F6D30 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  return (unsigned __int8)((__int64 (*)(void))qword_1C018BA98)() != 0 ? 0x20000 : 0;
}
