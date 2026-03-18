/*
 * XREFs of XRestoreSHelper @ 0x140189C40
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x14000B274 (KeRestoreExtendedAndSupervisorState.c)
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
