/*
 * XREFs of XSaveSHelper @ 0x1401B3890
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x1400C5810 (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1402454FC (KeSaveSupervisorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
