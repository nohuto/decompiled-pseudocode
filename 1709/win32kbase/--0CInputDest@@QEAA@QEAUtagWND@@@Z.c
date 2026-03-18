/*
 * XREFs of ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C960 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011D088 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0016F4C (INPUTDEST_FROM_PWND.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 */

CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, struct tagWND *const a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v15[12]; // [rsp+20h] [rbp-188h] BYREF
  _DWORD v16[50]; // [rsp+E0h] [rbp-C8h] BYREF

  v3 = INPUTDEST_FROM_PWND(v16, (__int64)a2);
  v4 = v3[1];
  v15[0] = *v3;
  v5 = v3[2];
  v15[1] = v4;
  v6 = v3[3];
  v15[2] = v5;
  v7 = v3[4];
  v15[3] = v6;
  v8 = v3[5];
  v15[4] = v7;
  v9 = v3[6];
  v15[5] = v8;
  v15[6] = v9;
  v10 = v3[7];
  v3 += 8;
  v15[7] = v10;
  v11 = v3[1];
  v15[8] = *v3;
  v12 = v3[2];
  v15[9] = v11;
  v13 = v3[3];
  v15[10] = v12;
  v15[11] = v13;
  CInputDest::CInputDest(this, (const struct CInputDest *)v15);
  return this;
}
