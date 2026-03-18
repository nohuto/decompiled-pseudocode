/*
 * XREFs of MiUnlockFaultPageTable @ 0x140059D10
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[2];
  if ( v1 )
  {
    result = MiUnlockPageTableInternal(*a1, v1);
    a1[2] = 0LL;
  }
  return result;
}
