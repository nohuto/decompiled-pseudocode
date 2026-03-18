/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x14014B8A8
 * Callers:
 *     NtSetDefaultLocale @ 0x140587354 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140587B34 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
