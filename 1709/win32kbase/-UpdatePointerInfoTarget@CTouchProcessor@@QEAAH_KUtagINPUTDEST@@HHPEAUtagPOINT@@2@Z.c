/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01288A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0126EF4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012E030 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C013980C (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C013C98C (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        PERESOURCE *a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v10; // edi
  PERESOURCE *v11; // rbx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v15; // rbp
  _QWORD *v16; // rbx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  _OWORD *v24; // r15
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  struct _ERESOURCE *v28; // rcx
  _OWORD v31[12]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v32[208]; // [rsp+120h] [rbp-118h] BYREF

  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Fu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v11 = a1 + 28;
  CInpLockGuard::LockExclusive(a1 + 28);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    v15 = FrameById;
    if ( FrameById )
    {
      v10 = 1;
      _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
      CInputDest::CInputDest((CInputDest *)v32, (const struct CInputDest *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v15,
        *(_DWORD *)(a2 + 32),
        (const struct CInputDest *)v32,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v32);
      v16 = (_QWORD *)(*((_QWORD *)v15 + 12) + 608LL * *(unsigned int *)(a2 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[35], *(_QWORD *)((char *)v16 + 228), a6) )
        *a6 = v16[35];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v16[37], *(_QWORD *)((char *)v16 + 228), a7) )
        *a7 = v16[37];
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v15);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(a2 + 16), *(unsigned int *)(a2 + 28), *a7, a5);
      v17 = a3[1];
      v31[0] = *a3;
      v18 = a3[2];
      v31[1] = v17;
      v19 = a3[3];
      v31[2] = v18;
      v20 = a3[4];
      v31[3] = v19;
      v21 = a3[5];
      v31[4] = v20;
      v22 = a3[6];
      v31[5] = v21;
      v31[6] = v22;
      v23 = a3[7];
      v24 = a3 + 8;
      v31[7] = v23;
      v25 = v24[1];
      v31[8] = *v24;
      v26 = v24[2];
      v31[9] = v25;
      v27 = v24[3];
      v31[10] = v26;
      v31[11] = v27;
      ApiSetEditionDoPointerDPITransforms(v31, a6, a7);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x62u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v11 = a1 + 28;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 97;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 96;
LABEL_16:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  v28 = *v11;
  v11[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v28);
  return v10;
}
