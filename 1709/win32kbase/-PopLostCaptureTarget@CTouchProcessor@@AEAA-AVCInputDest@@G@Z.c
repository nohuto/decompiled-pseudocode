/*
 * XREFs of ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0122B98
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C011D77C (-FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::PopLostCaptureTarget(CTouchProcessor *a1, _OWORD *a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerCaptureLostTarget ****v7; // rax
  struct tagCPointerCaptureLostTarget ***v8; // rbx
  CTouchProcessor *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  _OWORD v29[13]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v29, 0, 0xC8uLL);
  LOBYTE(v29[12]) = 0;
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( !NodeById
    || (v7 = (struct tagCPointerCaptureLostTarget ****)((char *)NodeById + 328),
        v8 = *v7,
        *v7 == (struct tagCPointerCaptureLostTarget ***)v7) )
  {
    memset(a2, 0, 0xC0uLL);
    v19 = v29[1];
    *a2 = v29[0];
    v20 = v29[2];
    a2[1] = v19;
    v21 = v29[3];
    a2[2] = v20;
    v22 = v29[4];
    a2[3] = v21;
    v23 = v29[5];
    a2[4] = v22;
    v24 = v29[6];
    a2[5] = v23;
    a2[6] = v24;
    a2[7] = v29[7];
    v25 = v29[9];
    a2[8] = v29[8];
    v26 = v29[10];
    a2[9] = v25;
    v27 = v29[11];
    a2[10] = v26;
    a2[11] = v27;
  }
  else
  {
    CInputDest::operator=((__int64)v29, (__int64)(v8 + 2));
    CTouchProcessor::FreeLostCaptureTarget(v9, v8);
    memset(a2, 0, 0xC0uLL);
    v10 = v29[1];
    *a2 = v29[0];
    v11 = v29[2];
    a2[1] = v10;
    v12 = v29[3];
    a2[2] = v11;
    v13 = v29[4];
    a2[3] = v12;
    v14 = v29[5];
    a2[4] = v13;
    v15 = v29[6];
    a2[5] = v14;
    a2[6] = v15;
    a2[7] = v29[7];
    v16 = v29[9];
    a2[8] = v29[8];
    v17 = v29[10];
    a2[9] = v16;
    v18 = v29[11];
    a2[10] = v17;
    a2[11] = v18;
  }
  *((_BYTE *)a2 + 192) = 0;
  memset(v29, 0, 0xC8uLL);
  CInputDest::SetEmpty((CInputDest *)v29);
  return a2;
}
