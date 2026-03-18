/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1405DD868
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetCurrentUserUILanguage @ 0x1405DD8D8 (ExpGetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // rdi

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LanguageId = (LANGID *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v1 < 0x7FFFFFFF0000LL )
      LanguageId = v1;
    *LanguageId = *LanguageId;
  }
  if ( (int)ExpGetCurrentUserUILanguage(LanguageId, v1) < 0 )
    *v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
