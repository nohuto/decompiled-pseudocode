/*
 * XREFs of ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x180134114
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        char a3,
        struct FRAME_TIME_INFO *a4)
{
  int v4; // r8d
  char v5; // r11
  char v6; // r10

  if ( a3 )
    *((_DWORD *)a2 + 24) = 0;
  v4 = *((_DWORD *)this + 42);
  v5 = *((_BYTE *)this + 21826);
  v6 = *((_BYTE *)this + 21824);
  *((_QWORD *)a4 + 1) = (char *)this + 136;
  *((_QWORD *)a4 + 2) = (char *)this + 21504;
  *(_QWORD *)a4 = a2;
  *((_DWORD *)a4 + 6) = v4;
  *((_BYTE *)a4 + 28) = v6;
  *((_BYTE *)a4 + 29) = v5;
}
