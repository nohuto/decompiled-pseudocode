/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C006D098
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1C006D070 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C00118D0 (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(__int64 a1)
{
  char result; // al
  __int64 v3; // r9
  __int64 v4; // r9
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v5, 0, 0xA0uLL);
  v5[4] = 3;
  v5[5] = 1;
  *(_QWORD *)(a1 + 1776) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(a1 + 1736));
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending(a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, a1, 0LL, v3, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(a1, (__int64)v5, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
