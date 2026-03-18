/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C012C940
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C00EB800 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagKL **a1, __int64 a2)
{
  struct tagKL *result; // rax

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0);
  return result;
}
