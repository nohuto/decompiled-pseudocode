/*
 * XREFs of ExpCheckForLookasideList @ 0x140286EC8
 * Callers:
 *     ExpCheckForLookaside @ 0x140286E60 (ExpCheckForLookaside.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 */

__int64 __fastcall ExpCheckForLookasideList(_QWORD *a1, __int64 a2, _QWORD **a3, KSPIN_LOCK *a4)
{
  unsigned __int64 v5; // r12
  int v8; // r15d
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // r14
  __int64 result; // rax

  v5 = (unsigned __int64)a1 + a2;
  v8 = a2;
  v9 = KeAcquireSpinLockRaiseToDpc(a4);
  v10 = *a3;
  v11 = v9;
  while ( v10 != a3 )
  {
    if ( v10 - 8 >= a1 && (unsigned __int64)(v10 - 8) < v5 )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains a lookaside structure that has not been deleted first\n",
        a1,
        v8);
      __debugbreak();
    }
    v10 = (_QWORD *)*v10;
  }
  KxReleaseSpinLock(a4);
  result = v11;
  __writecr8(v11);
  return result;
}
