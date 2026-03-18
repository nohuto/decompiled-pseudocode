/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C009C094
 * Callers:
 *     rimPassivateSecondaryRims @ 0x1C0009354 (rimPassivateSecondaryRims.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C000A28C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 *     rimDispatchCompleteFrame @ 0x1C010BA6C (rimDispatchCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
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
      (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids,
      a1);
    v2 = *(_QWORD *)(a1 + 400);
    *(_DWORD *)(a1 + 184) &= ~0x40000000u;
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  return result;
}
