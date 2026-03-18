/*
 * XREFs of ?RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z @ 0x18013DF10
 * Callers:
 *     ?Reset@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013DA8C (-Reset@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CIndependentRefreshRateScheduler@@AEAAIXZ @ 0x18013CCA8 (-FindFirstOutstandingFrameIndex@CIndependentRefreshRateScheduler@@AEAAIXZ.c)
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::RetireFrames(CIndependentRefreshRateScheduler *this, bool a2)
{
  unsigned int v4; // edi
  unsigned int FirstOutstandingFrameIndex; // ebx
  int v6; // eax
  bool v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  FirstOutstandingFrameIndex = CIndependentRefreshRateScheduler::FindFirstOutstandingFrameIndex(this);
  if ( FirstOutstandingFrameIndex != -1 )
  {
    while ( 1 )
    {
      v6 = CIndependentRefreshRateScheduler::RetireFrame(
             this,
             (LARGE_INTEGER *)this + 166 * FirstOutstandingFrameIndex + 27,
             FirstOutstandingFrameIndex,
             &v8,
             a2);
      v4 = v6;
      if ( v6 < 0 )
        break;
      FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
      if ( !v8 || FirstOutstandingFrameIndex == *((_DWORD *)this + 5366) )
        return v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6C5u);
  }
  return v4;
}
