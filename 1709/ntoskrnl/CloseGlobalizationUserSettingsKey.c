/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x140153840
 * Callers:
 *     NtSetDefaultLocale @ 0x1405DD0F4 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x1405DD8D8 (ExpGetCurrentUserUILanguage.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
