/*
 * XREFs of ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x18011D194
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        char a3,
        struct FRAME_TIME_INFO *a4)
{
  char v4; // r10
  char v5; // r8

  if ( a3 )
    *((_DWORD *)a2 + 24) = 0;
  v4 = *((_BYTE *)this + 21342);
  v5 = *((_BYTE *)this + 21340);
  *((_QWORD *)a4 + 1) = (char *)this + 80;
  *((_QWORD *)a4 + 2) = (char *)this + 21024;
  *(_QWORD *)a4 = a2;
  *((_DWORD *)a4 + 6) = 1;
  *((_BYTE *)a4 + 28) = v5;
  *((_BYTE *)a4 + 29) = v4;
}
