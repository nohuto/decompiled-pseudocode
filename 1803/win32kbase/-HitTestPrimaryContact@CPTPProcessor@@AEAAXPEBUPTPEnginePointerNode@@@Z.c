/*
 * XREFs of ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012542C
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0125340 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C0126178 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013F498 (ApiSetEditionPointerSpeedHitTest.c)
 */

void __fastcall CPTPProcessor::HitTestPrimaryContact(CPTPProcessor *this, const struct PTPEnginePointerNode *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21[3]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v22[11]; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v24[9]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v25[192]; // [rsp+230h] [rbp+130h] BYREF

  v2 = *(_OWORD *)a2;
  v20 = 0;
  v3 = *((_OWORD *)a2 + 1);
  v21[0] = 0;
  v24[0] = v2;
  v6 = *((_OWORD *)a2 + 2);
  v24[1] = v3;
  v7 = *((_OWORD *)a2 + 3);
  v24[2] = v6;
  v8 = *((_OWORD *)a2 + 4);
  v24[3] = v7;
  v9 = *((_OWORD *)a2 + 5);
  v24[4] = v8;
  v24[5] = v9;
  v10 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                    (unsigned int)&v23,
                    (unsigned int)v24,
                    0,
                    0,
                    (__int64)&v20,
                    (__int64)v21);
  v11 = v10[1];
  v22[0] = *v10;
  v12 = v10[2];
  v22[1] = v11;
  v13 = v10[3];
  v22[2] = v12;
  v14 = v10[4];
  v22[3] = v13;
  v15 = v10[5];
  v22[4] = v14;
  v16 = v10[6];
  v22[5] = v15;
  v17 = v10[8];
  v22[6] = v16;
  v22[7] = v10[7];
  v18 = v10[9];
  v22[8] = v17;
  v19 = v10[10];
  v22[9] = v18;
  v22[10] = v19;
  CInputDest::CInputDest((CInputDest *)v25, (const struct tagINPUTDEST *)v22);
  CHitTestState::Set((CPTPProcessor *)((char *)this + 392), (const struct CInputDest *)v25, v20 != 0, v21[0]);
  *((_QWORD *)this + 73) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 74) = *((_QWORD *)a2 + 4);
  CInputDest::SetEmpty((CInputDest *)v25);
}
