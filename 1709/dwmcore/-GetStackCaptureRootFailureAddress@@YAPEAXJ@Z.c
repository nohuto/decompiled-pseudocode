/*
 * XREFs of ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180194044
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStackCaptureRootFailureAddress(int a1)
{
  __int64 v2; // rbx
  int v3; // edi
  DWORD CurrentThreadId; // r9d
  volatile int v5; // edx
  __int64 v6; // r8

  v2 = 0LL;
  v3 = -1;
  CurrentThreadId = GetCurrentThreadId();
  if ( g_nCurrentStackCaptureIndex >= 0 )
  {
    v5 = g_nCurrentStackCaptureIndex;
    v6 = g_nCurrentStackCaptureIndex;
    do
    {
      if ( *((_DWORD *)&g_StackCaptureFrames + 12 * v6) != a1
        || *((_DWORD *)&g_StackCaptureFrames + 12 * v6 + 1) != CurrentThreadId )
      {
        break;
      }
      v3 = v5;
      if ( v5 )
      {
        --v5;
        --v6;
      }
      else
      {
        v5 = 255;
        v6 = 255LL;
      }
    }
    while ( v5 != g_nCurrentStackCaptureIndex );
    if ( v3 >= 0 )
      return *((_QWORD *)&g_StackCaptureFrames + 6 * v3 + 3);
  }
  return v2;
}
