/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01096A0
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C010DA58 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C0109CBC (INPUTDEST_FROM_BASEWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CInputDest::CInputDest(_OWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdi
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  _OWORD *result; // rax
  __int128 v33; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h]
  _OWORD v35[11]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v36[44]; // [rsp+E8h] [rbp-20h] BYREF

  memset(a1, 0, 0xB0uLL);
  *((_BYTE *)a1 + 176) = 0;
  memset(v35, 0, sizeof(v35));
  if ( a3 == 2 )
  {
    v8 = HMValidateHandleNoSecure(a2, 1);
    v9 = INPUTDEST_FROM_PWND(v36, v8);
  }
  else
  {
    if ( a3 != 1 )
      goto LABEL_6;
    v10 = HMValidateHandleNoSecure(a2, 23);
    v9 = (_OWORD *)INPUTDEST_FROM_BASEWND(v36, v10);
  }
  v11 = v9[1];
  v35[0] = *v9;
  v12 = v9[2];
  v35[1] = v11;
  v13 = v9[3];
  v35[2] = v12;
  v14 = v9[4];
  v35[3] = v13;
  v15 = v9[5];
  v35[4] = v14;
  v16 = v9[6];
  v35[5] = v15;
  v17 = v9[7];
  v35[6] = v16;
  v7 = &v35[8];
  v18 = v9[8];
  v35[7] = v17;
  v19 = v9[9];
  v35[8] = v18;
  v20 = v9[10];
  v35[9] = v19;
  v35[10] = v20;
LABEL_6:
  if ( DWORD1(v35[5]) )
  {
    v21 = *((_QWORD *)&v35[4] + 1);
    if ( !*((_QWORD *)&v35[4] + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    v34 = v21;
    *((_QWORD *)&v33 + 1) = (char *)a1 + 72;
    HMAssignmentLock((__int64)&v33 + 8);
  }
  v22 = v35[1];
  *a1 = v35[0];
  v23 = v35[2];
  a1[1] = v22;
  v24 = v35[3];
  a1[2] = v23;
  v25 = v35[4];
  a1[3] = v24;
  v26 = v35[5];
  a1[4] = v25;
  v27 = v35[6];
  a1[5] = v26;
  v28 = v35[7];
  a1[6] = v27;
  v29 = v35[8];
  a1[7] = v28;
  v30 = v35[9];
  a1[8] = v29;
  v31 = v35[10];
  result = a1;
  a1[9] = v30;
  a1[10] = v31;
  return result;
}
