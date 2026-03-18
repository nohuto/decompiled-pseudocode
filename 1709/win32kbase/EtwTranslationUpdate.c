/*
 * XREFs of EtwTranslationUpdate @ 0x1C00FD490
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq @ 0x1C00E3010 (McTemplateK0pqqqq.c)
 */

NTSTATUS __fastcall EtwTranslationUpdate(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  NTSTATUS result; // eax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pqqqq(a1, &TranslationUpdate, a3, a1, a2, a3, a4, a5);
  return result;
}
