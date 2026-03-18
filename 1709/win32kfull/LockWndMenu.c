/*
 * XREFs of LockWndMenu @ 0x1C007C744
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetDialogSystemMenu @ 0x1C011DA80 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C0138420 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C0138F9C (xxxSetMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockWndMenu(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v7; // rcx
  _QWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( *a2 )
  {
    v7 = (_QWORD *)(*a2 + 88LL);
    if ( *v7 == a1 )
      HMAssignmentUnlock(v7);
  }
  if ( a3 && !*(_QWORD *)(a3 + 88) )
  {
    v8 = (_QWORD *)(a3 + 88);
    v9 = a1;
    HMAssignmentLock(&v8);
  }
  v8 = a2;
  v9 = a3;
  return HMAssignmentLock(&v8);
}
