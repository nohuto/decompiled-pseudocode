/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C011CE54
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C011D304 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C011D204 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  const struct CInputDest *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  bool v25; // zf
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  _OWORD v40[12]; // [rsp+20h] [rbp-E0h] BYREF
  char v41; // [rsp+E0h] [rbp-20h]
  _BYTE v42[192]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[26]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v40, 0, sizeof(v40));
  v8 = *(_QWORD *)(a3 + 40);
  v41 = 0;
  if ( v8 )
  {
    *(_WORD *)a5 = *(_WORD *)(v8 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v8 + 24);
    v18 = (const struct CInputDest *)CTouchProcessor::DelegateCaptureInt(a1, v42, v8, 1LL);
    CInputDest::CInputDest((CInputDest *)v43, v18);
    CInputDest::operator=((__int64)v40, v43);
    CInputDest::SetEmpty((CInputDest *)v43);
    v19 = v40[1];
    *(_OWORD *)(a5 + 8) = v40[0];
    v20 = v40[2];
    *(_OWORD *)(a5 + 24) = v19;
    v21 = v40[3];
    *(_OWORD *)(a5 + 40) = v20;
    v22 = v40[4];
    *(_OWORD *)(a5 + 56) = v21;
    v23 = v40[5];
    *(_OWORD *)(a5 + 72) = v22;
    v24 = v40[6];
    *(_OWORD *)(a5 + 88) = v23;
    *(_OWORD *)(a5 + 104) = v24;
    v25 = HIDWORD(v40[5]) == 0;
    *(_OWORD *)(a5 + 120) = v40[7];
    v26 = v40[9];
    *(_OWORD *)(a5 + 136) = v40[8];
    v27 = v40[10];
    *(_OWORD *)(a5 + 152) = v26;
    v28 = v40[11];
    *(_OWORD *)(a5 + 168) = v27;
    *(_DWORD *)(a5 + 200) = !v25;
    v29 = v40[1];
    *(_OWORD *)(a5 + 184) = v28;
    *a2 = v40[0];
    v30 = v40[2];
    a2[1] = v29;
    v31 = v40[3];
    a2[2] = v30;
    v32 = v40[4];
    a2[3] = v31;
    v33 = v40[5];
    a2[4] = v32;
    v34 = v40[6];
    a2[5] = v33;
    v35 = v40[7];
    a2[6] = v34;
    a2[7] = v35;
    v36 = v40[9];
    a2[8] = v40[8];
    v37 = v40[10];
    a2[9] = v36;
    v38 = v40[11];
    a2[10] = v37;
    a2[11] = v38;
  }
  else
  {
    v9 = v40[1];
    *a2 = v40[0];
    v10 = v40[2];
    a2[1] = v9;
    v11 = v40[3];
    a2[2] = v10;
    v12 = v40[4];
    a2[3] = v11;
    v13 = v40[5];
    a2[4] = v12;
    v14 = v40[6];
    a2[5] = v13;
    a2[6] = v14;
    a2[7] = v40[7];
    v15 = v40[9];
    a2[8] = v40[8];
    v16 = v40[10];
    a2[9] = v15;
    v17 = v40[11];
    a2[10] = v16;
    a2[11] = v17;
  }
  CInputDest::SetEmpty((CInputDest *)v40);
  return a2;
}
