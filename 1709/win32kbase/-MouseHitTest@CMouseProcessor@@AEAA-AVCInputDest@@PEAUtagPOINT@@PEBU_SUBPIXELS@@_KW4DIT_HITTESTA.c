/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00133EC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C0017808 (ApiSetEditionMouseSpeedHitTest.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C009428C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        volatile signed __int32 *a1,
        _OWORD *a2,
        struct tagPOINT *a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8)
{
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  _OWORD v33[12]; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v35[13]; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( (a8 & 1) == 0 && _InterlockedCompareExchange(a1 + 724, 1, 1) )
  {
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate((CSpatialProcessor *)a1, 4, *a3, a5, 0, a7);
    CInputDest::CInputDest((CInputDest *)v35, (const struct CInputDest *)(a1 + 674));
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      a4,
      v35);
    memset(a2, 0, 0xC0uLL);
    *((_BYTE *)a2 + 192) = 0;
    v24 = v35[1];
    *a2 = v35[0];
    v25 = v35[2];
    a2[1] = v24;
    v26 = v35[3];
    a2[2] = v25;
    v27 = v35[4];
    a2[3] = v26;
    v28 = v35[5];
    a2[4] = v27;
    v29 = v35[6];
    a2[5] = v28;
    a2[6] = v29;
    a2[7] = v35[7];
    v30 = v35[9];
    a2[8] = v35[8];
    v31 = v35[10];
    a2[9] = v30;
    v32 = v35[11];
    a2[10] = v31;
    a2[11] = v32;
    memset(v35, 0, 0xC8uLL);
    CInputDest::SetEmpty((CInputDest *)v35);
  }
  else
  {
    v12 = (_OWORD *)ApiSetEditionMouseSpeedHitTest((unsigned int)&v34, (_DWORD)a3, a4, a5, a6, a7, a8);
    v13 = v12[1];
    v33[0] = *v12;
    v14 = v12[2];
    v33[1] = v13;
    v15 = v12[3];
    v33[2] = v14;
    v16 = v12[4];
    v33[3] = v15;
    v17 = v12[5];
    v33[4] = v16;
    v18 = v12[6];
    v33[5] = v17;
    v33[6] = v18;
    v19 = v12[7];
    v12 += 8;
    v33[7] = v19;
    v20 = v12[1];
    v33[8] = *v12;
    v21 = v12[2];
    v33[9] = v20;
    v22 = v12[3];
    v33[10] = v21;
    v33[11] = v22;
    CInputDest::CInputDest((CInputDest *)a2, (const struct CInputDest *)v33);
  }
  return a2;
}
