/*
 * XREFs of ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180011CE8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180011594 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrames(CPartitionVerticalBlankScheduler *this, bool a2)
{
  unsigned int v4; // edi
  unsigned int FirstOutstandingFrameIndex; // ebx
  int v6; // eax
  bool v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
  if ( FirstOutstandingFrameIndex != -1 )
  {
    while ( 1 )
    {
      v6 = CPartitionVerticalBlankScheduler::RetireFrame(
             this,
             (CPartitionVerticalBlankScheduler *)((char *)this + 1304 * FirstOutstandingFrameIndex + 120),
             FirstOutstandingFrameIndex,
             &v8,
             a2);
      v4 = v6;
      if ( v6 < 0 )
        break;
      FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
      if ( !v8 || FirstOutstandingFrameIndex == *((_DWORD *)this + 5246) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x71Bu);
  }
  return v4;
}
