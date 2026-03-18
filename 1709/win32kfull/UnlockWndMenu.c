/*
 * XREFs of UnlockWndMenu @ 0x1C011598C
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     VerifyChildMenu @ 0x1C01443E0 (VerifyChildMenu.c)
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
