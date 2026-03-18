/*
 * XREFs of ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012A9EC
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012A90C (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C012B6BC (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013ACC8 (ApiSetEditionPointerSpeedHitTest.c)
 */

void __fastcall CPTPProcessor::HitTestPrimaryContact(CPTPProcessor *this, const struct PTPEnginePointerNode *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
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
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22[3]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v23[12]; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v25[9]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v26[208]; // [rsp+250h] [rbp+150h] BYREF

  v2 = *(_OWORD *)a2;
  v21 = 0;
  v4 = *((_OWORD *)a2 + 1);
  v22[0] = 0;
  v25[0] = v2;
  v5 = *((_OWORD *)a2 + 2);
  v25[1] = v4;
  v7 = *((_OWORD *)a2 + 3);
  v25[2] = v5;
  v8 = *((_OWORD *)a2 + 4);
  v25[3] = v7;
  v9 = *((_OWORD *)a2 + 5);
  v25[4] = v8;
  v25[5] = v9;
  v10 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                    (unsigned int)&v24,
                    (unsigned int)v25,
                    0,
                    (unsigned int)&v21,
                    (__int64)v22);
  v11 = v10[1];
  v23[0] = *v10;
  v12 = v10[2];
  v23[1] = v11;
  v13 = v10[3];
  v23[2] = v12;
  v14 = v10[4];
  v23[3] = v13;
  v15 = v10[5];
  v23[4] = v14;
  v16 = v10[6];
  v23[5] = v15;
  v23[6] = v16;
  v17 = v10[7];
  v10 += 8;
  v23[7] = v17;
  v18 = v10[1];
  v23[8] = *v10;
  v19 = v10[2];
  v23[9] = v18;
  v20 = v10[3];
  v23[10] = v19;
  v23[11] = v20;
  CInputDest::CInputDest((CInputDest *)v26, (const struct CInputDest *)v23);
  CHitTestState::Set((CPTPProcessor *)((char *)this + 552), (const struct CInputDest *)v26, v21 != 0, v22[0]);
  *((_QWORD *)this + 95) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 96) = *((_QWORD *)a2 + 4);
  CInputDest::SetEmpty((CInputDest *)v26);
}
