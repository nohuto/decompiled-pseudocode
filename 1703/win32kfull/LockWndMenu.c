/*
 * XREFs of LockWndMenu @ 0x1C00C315C
 * Callers:
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0114B80 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C0133650 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C01344BC (xxxSetMenu.c)
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
