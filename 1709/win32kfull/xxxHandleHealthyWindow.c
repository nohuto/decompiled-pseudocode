/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C013418C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 *     xxxHandleHealthyThread @ 0x1C01340D0 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C013420C (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( GetProp(a1, *(_WORD *)(gpsi + 884LL), 1) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v1 = xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
    ThreadUnlock1(v8, v7);
  }
  return v1;
}
