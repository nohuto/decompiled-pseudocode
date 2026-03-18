/*
 * XREFs of xxxHandleHealthyThread @ 0x1C0131FD0
 * Callers:
 *     xxxGetInputEvent @ 0x1C004C770 (xxxGetInputEvent.c)
 *     xxxClearWakeMask @ 0x1C004CA90 (xxxClearWakeMask.c)
 *     xxxUpdateInputHangInfo @ 0x1C00526B0 (xxxUpdateInputHangInfo.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     xxxHandleHealthyWindow @ 0x1C013208C (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // edi
  __int64 v5; // rbp

  v1 = 0;
  while ( *(int *)(a1 + 440) < 0 )
  {
    *(_DWORD *)(a1 + 440) &= ~0x80000000;
    v3 = 0;
    do
    {
      if ( *(_BYTE *)(32LL * v3 + gSharedInfo[1] + 24) == 1 )
      {
        v5 = *(_QWORD *)(gpKernelHandleTable + 16LL * v3);
        if ( *(_QWORD *)(v5 + 16) == a1
          && (unsigned int)IsWindowGhosted(*(_QWORD *)(gpKernelHandleTable + 16LL * v3))
          && (unsigned int)xxxHandleHealthyWindow(v5) )
        {
          v1 = 1;
        }
      }
      ++v3;
    }
    while ( v3 <= giheLast );
  }
  return v1;
}
