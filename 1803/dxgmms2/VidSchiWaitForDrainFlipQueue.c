/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C00BCAF4
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1C00BBD80 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C002B1C4 (VidSchiIsMmIoFlipPending.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(__int64 a1)
{
  __int64 v2; // r9
  char result; // al
  __int64 v4; // r9
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v5, 0, 0xA0uLL);
  v5[4] = 3;
  v5[5] = 1;
  *(_QWORD *)(a1 + 1800) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(a1 + 1760));
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending(a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(a1, (__int64)v5, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, a1, 0LL, v2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
