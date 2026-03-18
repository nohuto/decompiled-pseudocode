/*
 * XREFs of ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01182F8
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C0111E74 (-FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::PopLostCaptureTarget(CTouchProcessor *a1, _OWORD *a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerCaptureLostTarget ****v7; // rax
  struct tagCPointerCaptureLostTarget ***v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _OWORD v28[12]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v28, 0, 0xB8uLL);
  LOBYTE(v28[11]) = 0;
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( !NodeById
    || (v7 = (struct tagCPointerCaptureLostTarget ****)((char *)NodeById + 312),
        v8 = *v7,
        *v7 == (struct tagCPointerCaptureLostTarget ***)v7) )
  {
    memset(a2, 0, 0xB0uLL);
    v18 = v28[1];
    *a2 = v28[0];
    v19 = v28[2];
    a2[1] = v18;
    v20 = v28[3];
    a2[2] = v19;
    v21 = v28[4];
    a2[3] = v20;
    v22 = v28[5];
    a2[4] = v21;
    v23 = v28[6];
    a2[5] = v22;
    v24 = v28[8];
    a2[6] = v23;
    a2[7] = v28[7];
    v25 = v28[9];
    a2[8] = v24;
    v26 = v28[10];
    a2[9] = v25;
    a2[10] = v26;
  }
  else
  {
    CInputDest::operator=((__int64)v28, (__int64)(v8 + 2));
    CTouchProcessor::FreeLostCaptureTarget((struct _KTHREAD **)a1, v8);
    memset(a2, 0, 0xB0uLL);
    v9 = v28[1];
    *a2 = v28[0];
    v10 = v28[2];
    a2[1] = v9;
    v11 = v28[3];
    a2[2] = v10;
    v12 = v28[4];
    a2[3] = v11;
    v13 = v28[5];
    a2[4] = v12;
    v14 = v28[6];
    a2[5] = v13;
    v15 = v28[8];
    a2[6] = v14;
    a2[7] = v28[7];
    v16 = v28[9];
    a2[8] = v15;
    v17 = v28[10];
    a2[9] = v16;
    a2[10] = v17;
  }
  *((_BYTE *)a2 + 176) = 0;
  memset(v28, 0, 0xB8uLL);
  CInputDest::SetEmpty((CInputDest *)v28);
  return a2;
}
