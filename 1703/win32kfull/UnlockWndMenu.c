/*
 * XREFs of UnlockWndMenu @ 0x1C010B5A8
 * Callers:
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     VerifyChildMenu @ 0x1C013E26C (VerifyChildMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockWndMenu(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx

  if ( !*a2 )
    return 0LL;
  v4 = (_QWORD *)(*a2 + 88LL);
  if ( a1 == *v4 )
    HMAssignmentUnlock(v4);
  return HMAssignmentUnlock(a2);
}
