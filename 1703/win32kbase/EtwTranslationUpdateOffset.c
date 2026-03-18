/*
 * XREFs of EtwTranslationUpdateOffset @ 0x1C00FCF20
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C00DC44C (Template_pqq.c)
 */

NTSTATUS __fastcall EtwTranslationUpdateOffset(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return Template_pqq(a1, &TranslationUpdateOffset, a3, a1, a2, a3);
  return result;
}
