/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0116638
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C010E340 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C011AD38 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  const struct CPointerInputFrame *v8; // rax
  struct CPointerInputFrame *v9; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v11; // rdx
  struct CPointerInfoNode *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _DWORD v26[44]; // [rsp+20h] [rbp-B8h] BYREF

  memset(a2, 0, 0xB0uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(a1, v8, *(_WORD *)(a3 + 236), 0LL);
    v12 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v13 = *(unsigned __int16 *)(a3 + 236);
      if ( *((_WORD *)ValidNodeInFrame + 118) != (_WORD)v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11);
      v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 32), 1);
      v15 = INPUTDEST_FROM_PWND(v26, v14);
      v16 = v15[1];
      *a2 = *v15;
      v17 = v15[2];
      a2[1] = v16;
      v18 = v15[3];
      a2[2] = v17;
      v19 = v15[4];
      a2[3] = v18;
      v20 = v15[5];
      a2[4] = v19;
      v21 = v15[6];
      a2[5] = v20;
      v22 = v15[8];
      a2[6] = v21;
      a2[7] = v15[7];
      v23 = v15[9];
      a2[8] = v22;
      v24 = v15[10];
      a2[9] = v23;
      a2[10] = v24;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
