/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0121FA4
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  CTouchProcessor *v9; // rcx
  struct CPointerInputFrame *v10; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v12; // rax
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _DWORD v25[48]; // [rsp+20h] [rbp-C8h] BYREF

  memset(a2, 0, 0xC0uLL);
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(a1, a4);
  v10 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
  {
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v9, PreviousFrameByDeviceInt, *(_WORD *)(a3 + 252), 0LL);
    if ( ValidNodeInFrame )
    {
      v12 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 34), 1);
      v13 = INPUTDEST_FROM_PWND(v25, v12);
      v14 = v13[1];
      *a2 = *v13;
      v15 = v13[2];
      a2[1] = v14;
      v16 = v13[3];
      a2[2] = v15;
      v17 = v13[4];
      a2[3] = v16;
      v18 = v13[5];
      a2[4] = v17;
      v19 = v13[6];
      a2[5] = v18;
      a2[6] = v19;
      v20 = v13[7];
      v13 += 8;
      a2[7] = v20;
      v21 = v13[1];
      a2[8] = *v13;
      v22 = v13[2];
      a2[9] = v21;
      v23 = v13[3];
      a2[10] = v22;
      a2[11] = v23;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v10);
  }
  return a2;
}
