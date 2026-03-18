/*
 * XREFs of UserFunctionalizeDisplayConfig @ 0x1C00D7E44
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00F9EA4 (DrvFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall UserFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        unsigned int *a3,
        struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a4,
        int a5)
{
  __int64 result; // rax

  if ( (a5 & 0xFFFF6B9F) != 0 )
    return 3221225485LL;
  result = DrvSetDisplayConfigValidateParams(*a1, a2, *a3, a4, a5 | 0x8460u, 0, 1);
  if ( (int)result >= 0 )
    return DrvFunctionalizeDisplayConfig(a1, a2, a3, a4, a5 | 0x8460u);
  return result;
}
