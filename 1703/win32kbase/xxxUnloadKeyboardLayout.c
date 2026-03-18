/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C012D390
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C00E5A90 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagKL **a1, __int64 a2)
{
  struct tagKL *result; // rax

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0);
  return result;
}
