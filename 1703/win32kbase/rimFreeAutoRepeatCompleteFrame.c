/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4
 * Callers:
 *     rimPassivateSecondaryRims @ 0x1C00930C4 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     rimDispatchCompleteFrame @ 0x1C010CB20 (rimDispatchCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 400) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x12u,
      (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
      a1);
    v2 = *(_QWORD *)(a1 + 400);
    *(_DWORD *)(a1 + 184) &= ~0x20000000u;
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  return result;
}
