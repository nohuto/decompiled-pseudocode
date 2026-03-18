/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C011BCB8
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C011C164 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C011C064 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  int v9; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  const struct CInputDest *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  bool v26; // zf
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  _OWORD v42[12]; // [rsp+20h] [rbp-E0h] BYREF
  char v43; // [rsp+E0h] [rbp-20h]
  _BYTE v44[192]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v45[26]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v42, 0, sizeof(v42));
  v8 = *(_QWORD *)(a3 + 40);
  v9 = 0;
  v43 = 0;
  if ( v8 )
  {
    *(_WORD *)a5 = *(_WORD *)(v8 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v8 + 24);
    v19 = (const struct CInputDest *)CTouchProcessor::DelegateCaptureInt(a1, v44, v8, 1LL);
    CInputDest::CInputDest((CInputDest *)v45, v19);
    CInputDest::operator=((__int64)v42, v45);
    CInputDest::SetEmpty((CInputDest *)v45);
    v20 = v42[1];
    *(_OWORD *)(a5 + 8) = v42[0];
    v21 = v42[2];
    *(_OWORD *)(a5 + 24) = v20;
    v22 = v42[3];
    *(_OWORD *)(a5 + 40) = v21;
    v23 = v42[4];
    *(_OWORD *)(a5 + 56) = v22;
    v24 = v42[5];
    *(_OWORD *)(a5 + 72) = v23;
    v25 = v42[6];
    *(_OWORD *)(a5 + 88) = v24;
    *(_OWORD *)(a5 + 104) = v25;
    v26 = HIDWORD(v42[5]) == 0;
    *(_OWORD *)(a5 + 120) = v42[7];
    LOBYTE(v9) = !v26;
    v27 = v42[8];
    *(_DWORD *)(a5 + 200) = v9;
    v28 = v42[9];
    *(_OWORD *)(a5 + 136) = v27;
    v29 = v42[10];
    *(_OWORD *)(a5 + 152) = v28;
    v30 = v42[11];
    *(_OWORD *)(a5 + 168) = v29;
    v31 = v42[1];
    *(_OWORD *)(a5 + 184) = v30;
    *a2 = v42[0];
    v32 = v42[2];
    a2[1] = v31;
    v33 = v42[3];
    a2[2] = v32;
    v34 = v42[4];
    a2[3] = v33;
    v35 = v42[5];
    a2[4] = v34;
    v36 = v42[6];
    a2[5] = v35;
    v37 = v42[7];
    a2[6] = v36;
    a2[7] = v37;
    v38 = v42[9];
    a2[8] = v42[8];
    v39 = v42[10];
    a2[9] = v38;
    v40 = v42[11];
    a2[10] = v39;
    a2[11] = v40;
  }
  else
  {
    v10 = v42[1];
    *a2 = v42[0];
    v11 = v42[2];
    a2[1] = v10;
    v12 = v42[3];
    a2[2] = v11;
    v13 = v42[4];
    a2[3] = v12;
    v14 = v42[5];
    a2[4] = v13;
    v15 = v42[6];
    a2[5] = v14;
    a2[6] = v15;
    a2[7] = v42[7];
    v16 = v42[9];
    a2[8] = v42[8];
    v17 = v42[10];
    a2[9] = v16;
    v18 = v42[11];
    a2[10] = v17;
    a2[11] = v18;
  }
  CInputDest::SetEmpty((CInputDest *)v42);
  return a2;
}
