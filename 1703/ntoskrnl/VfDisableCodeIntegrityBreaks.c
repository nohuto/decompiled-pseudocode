/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1407668AC
 * Callers:
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_1407BE418 = 0x200000002LL;
  qword_1407BE420 = 0x200000002LL;
  dword_1407BE428 = 2;
  return result;
}
