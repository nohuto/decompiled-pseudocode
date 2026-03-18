/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C011D204
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C011CE54 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C011D0A0 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125DFC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // eax
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  memset(a2, 0, 0xC0uLL);
  v6 = *(_DWORD *)(a3 + 464);
  if ( (v6 & 4) == 0 && (v6 & 8) == 0 )
  {
    v7 = (_OWORD *)((-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF28uLL) + a3 + 256);
    v8 = v7[1];
    *a2 = *v7;
    v9 = v7[2];
    a2[1] = v8;
    v10 = v7[3];
    a2[2] = v9;
    v11 = v7[4];
    a2[3] = v10;
    v12 = v7[5];
    a2[4] = v11;
    v13 = v7[6];
    a2[5] = v12;
    a2[6] = v13;
    v14 = v7[7];
    v7 += 8;
    a2[7] = v14;
    v15 = v7[1];
    a2[8] = *v7;
    v16 = v7[2];
    a2[9] = v15;
    v17 = v7[3];
    a2[10] = v16;
    a2[11] = v17;
    CTouchProcessor::SetDelegateActionInt(a1);
  }
  return a2;
}
