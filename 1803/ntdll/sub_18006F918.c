/*
 * XREFs of sub_18006F918 @ 0x18006F918
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     sub_1800E9B84 @ 0x1800E9B84 (sub_1800E9B84.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F287C @ 0x1800F287C (sub_1800F287C.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_18006F918(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
