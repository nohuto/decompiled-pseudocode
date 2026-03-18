/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00AB6B4
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00116B0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00AD81C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 result; // rax
  _DWORD v7[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 416);
    memset(v7, 0, sizeof(v7));
    v7[4] = 0;
    v7[8] |= 0x10u;
    v7[5] = 1;
    v7[12] = i;
    *(_QWORD *)(v3 + 280) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v3 + 240));
    while ( 1 )
    {
      result = *(unsigned int *)(v3 + 2768);
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v7, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, v5, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
