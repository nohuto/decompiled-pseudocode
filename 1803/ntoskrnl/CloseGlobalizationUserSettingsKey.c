/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x14016A2DC
 * Callers:
 *     NtSetDefaultLocale @ 0x14060E4A0 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x14060EC80 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
