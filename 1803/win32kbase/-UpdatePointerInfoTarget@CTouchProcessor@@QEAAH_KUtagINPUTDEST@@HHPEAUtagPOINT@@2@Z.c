/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C011EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012E260 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C013DD28 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C01411A0 (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  const struct CPointerInputFrame *v14; // r13
  _QWORD *v15; // rsi
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _OWORD v26[12]; // [rsp+60h] [rbp-108h] BYREF

  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Du,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 72));
  if ( a2 )
  {
    v14 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)a1, *(unsigned int *)(a2 + 28));
    if ( v14 )
    {
      CInputDest::CInputDest((CInputDest *)v26, (const struct tagINPUTDEST *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v14,
        *(_DWORD *)(a2 + 32),
        (const struct CInputDest *)v26,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v26);
      v15 = (_QWORD *)(*((_QWORD *)v14 + 12) + 576LL * *(unsigned int *)(a2 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v15[33], *(_QWORD *)((char *)v15 + 212), a6) )
        *a6 = v15[33];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v15[35], *(_QWORD *)((char *)v15 + 212), a7) )
        *a7 = v15[35];
      CTouchProcessor::UnreferenceFrame((struct _KTHREAD **)a1, v14);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(a2 + 16), *(unsigned int *)(a2 + 28), *a7, a5);
      v16 = *(_OWORD *)(a3 + 16);
      v26[0] = *(_OWORD *)a3;
      v17 = *(_OWORD *)(a3 + 32);
      v26[1] = v16;
      v18 = *(_OWORD *)(a3 + 48);
      v26[2] = v17;
      v19 = *(_OWORD *)(a3 + 64);
      v26[3] = v18;
      v20 = *(_OWORD *)(a3 + 80);
      v26[4] = v19;
      v21 = *(_OWORD *)(a3 + 96);
      v26[5] = v20;
      v22 = *(_OWORD *)(a3 + 128);
      v26[6] = v21;
      v26[7] = *(_OWORD *)(a3 + 112);
      v23 = *(_OWORD *)(a3 + 144);
      v26[8] = v22;
      v24 = *(_OWORD *)(a3 + 160);
      v26[9] = v23;
      v26[10] = v24;
      ApiSetEditionDoPointerDPITransforms(v26, a6, a7);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x70u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v11 = 1;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 111;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 110;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)(a1 + 72));
  return v11;
}
