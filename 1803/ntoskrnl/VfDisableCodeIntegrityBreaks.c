/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x140815478
 * Callers:
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_140875420 = 0x200000002LL;
  qword_140875428 = 0x200000002LL;
  return result;
}
