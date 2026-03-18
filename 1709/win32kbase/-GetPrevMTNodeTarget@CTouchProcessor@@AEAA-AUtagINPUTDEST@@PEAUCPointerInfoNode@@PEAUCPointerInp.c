/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0121574
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0007310 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0016F4C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011D4CC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _DWORD v28[48]; // [rsp+20h] [rbp-C8h] BYREF

  memset(a2, 0, 0xC0uLL);
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(a1, a4);
  v10 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
  {
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v9, PreviousFrameByDeviceInt, *(_WORD *)(a3 + 252), 0LL);
    if ( ValidNodeInFrame )
    {
      LOBYTE(v12) = 1;
      v15 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 34), v12, v13, v14);
      v16 = INPUTDEST_FROM_PWND(v28, v15);
      v17 = v16[1];
      *a2 = *v16;
      v18 = v16[2];
      a2[1] = v17;
      v19 = v16[3];
      a2[2] = v18;
      v20 = v16[4];
      a2[3] = v19;
      v21 = v16[5];
      a2[4] = v20;
      v22 = v16[6];
      a2[5] = v21;
      a2[6] = v22;
      v23 = v16[7];
      v16 += 8;
      a2[7] = v23;
      v24 = v16[1];
      a2[8] = *v16;
      v25 = v16[2];
      a2[9] = v24;
      v26 = v16[3];
      a2[10] = v25;
      a2[11] = v26;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v10);
  }
  return a2;
}
