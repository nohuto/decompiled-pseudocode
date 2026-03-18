/*
 * XREFs of XRestoreSHelper @ 0x1401B38B0
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1400B5FF4 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1402454C0 (KeRestoreSupervisorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XRestoreSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}
