/*
 * XREFs of xxxHandleHealthyThread @ 0x1C01340D0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x1C0086730 (xxxGetInputEvent.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C0060008 (IsWindowGhosted.c)
 *     xxxHandleHealthyWindow @ 0x1C013418C (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  __int64 v5; // rbp

  v1 = 0;
  while ( *(int *)(a1 + 464) < 0 )
  {
    *(_DWORD *)(a1 + 464) &= ~0x80000000;
    v3 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v3 + gSharedInfo[1] + 24) == 1 )
      {
        v5 = *(_QWORD *)(gpKernelHandleTable + 24 * v3);
        if ( *(_QWORD *)(v5 + 16) == a1
          && (unsigned int)IsWindowGhosted(*(_QWORD *)(gpKernelHandleTable + 24 * v3))
          && (unsigned int)xxxHandleHealthyWindow(v5) )
        {
          v1 = 1;
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= giheLast );
  }
  return v1;
}
