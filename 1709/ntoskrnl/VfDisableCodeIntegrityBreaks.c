/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1407A8448
 * Callers:
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_140805418 = 0x200000002LL;
  qword_140805420 = 0x200000002LL;
  dword_140805428 = 2;
  return result;
}
