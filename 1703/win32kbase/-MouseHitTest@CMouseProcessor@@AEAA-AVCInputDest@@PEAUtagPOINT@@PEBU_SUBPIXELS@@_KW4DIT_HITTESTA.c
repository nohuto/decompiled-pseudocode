/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C00454AC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C004535C (ApiSetEditionMouseSpeedHitTest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C008BA80 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  _OWORD v32[12]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v33[12]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v34[13]; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( (a8 & 1) == 0 && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2744), 1, 1) )
  {
    CInputDest::CInputDest((CInputDest *)v34, (const struct CInputDest *)(a1 + 2544));
    ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a3, *a3, a4, v34);
    memset(a2, 0, 0xC0uLL);
    *((_BYTE *)a2 + 192) = 0;
    v23 = v34[1];
    *a2 = v34[0];
    v24 = v34[2];
    a2[1] = v23;
    v25 = v34[3];
    a2[2] = v24;
    v26 = v34[4];
    a2[3] = v25;
    v27 = v34[5];
    a2[4] = v26;
    v28 = v34[6];
    a2[5] = v27;
    a2[6] = v28;
    a2[7] = v34[7];
    v29 = v34[9];
    a2[8] = v34[8];
    v30 = v34[10];
    a2[9] = v29;
    v31 = v34[11];
    a2[10] = v30;
    a2[11] = v31;
    memset(v34, 0, 0xC8uLL);
    CInputDest::SetEmpty((CInputDest *)v34);
  }
  else
  {
    v11 = ApiSetEditionMouseSpeedHitTest(v33, (__int64)a3, a4, a5, a6, a7, a8);
    v12 = v11[1];
    v32[0] = *v11;
    v13 = v11[2];
    v32[1] = v12;
    v14 = v11[3];
    v32[2] = v13;
    v15 = v11[4];
    v32[3] = v14;
    v16 = v11[5];
    v32[4] = v15;
    v17 = v11[6];
    v32[5] = v16;
    v32[6] = v17;
    v18 = v11[7];
    v11 += 8;
    v32[7] = v18;
    v19 = v11[1];
    v32[8] = *v11;
    v20 = v11[2];
    v32[9] = v19;
    v21 = v11[3];
    v32[10] = v20;
    v32[11] = v21;
    CInputDest::CInputDest((CInputDest *)a2, (const struct CInputDest *)v32);
  }
  return a2;
}
