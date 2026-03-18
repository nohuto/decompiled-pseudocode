/*
 * XREFs of ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C0129000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C012789C (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C012EB30 (GetAdjustedPointerPixelLocation.c)
 *     ApiSetEditionDoPointerDPITransforms @ 0x1C013A534 (ApiSetEditionDoPointerDPITransforms.c)
 *     ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C013D4BC (ApiSetPointerPromotionOnPointerInputRetrieval.c)
 */

__int64 __fastcall CTouchProcessor::UpdatePointerInfoTarget(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v9; // rbp
  unsigned int v11; // esi
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v16; // r14
  _QWORD *v17; // rdi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  _OWORD *v25; // r12
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  struct _ERESOURCE *v29; // rcx
  _OWORD v31[12]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v32[208]; // [rsp+120h] [rbp-118h] BYREF

  v9 = a2;
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      95,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 200));
  if ( v9 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(v9 + 28));
    v16 = FrameById;
    if ( FrameById )
    {
      v11 = 1;
      _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
      CInputDest::CInputDest((CInputDest *)v32, (const struct CInputDest *)a3);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        v16,
        *(_DWORD *)(v9 + 32),
        (const struct CInputDest *)v32,
        a4,
        0LL,
        1,
        0,
        1,
        0);
      CInputDest::SetEmpty((CInputDest *)v32);
      v17 = (_QWORD *)(*((_QWORD *)v16 + 12) + 608LL * *(unsigned int *)(v9 + 32));
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v17[35], *(_QWORD *)((char *)v17 + 228), a6) )
        *a6 = v17[35];
      if ( !(unsigned int)GetAdjustedPointerPixelLocation(v17[37], *(_QWORD *)((char *)v17 + 228), a7) )
        *a7 = v17[37];
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v16);
      ApiSetPointerPromotionOnPointerInputRetrieval(*(unsigned __int16 *)(v9 + 16), *(unsigned int *)(v9 + 28), *a7, a5);
      v18 = a3[1];
      v31[0] = *a3;
      v19 = a3[2];
      v31[1] = v18;
      v20 = a3[3];
      v31[2] = v19;
      v21 = a3[4];
      v31[3] = v20;
      v22 = a3[5];
      v31[4] = v21;
      v23 = a3[6];
      v31[5] = v22;
      v31[6] = v23;
      v24 = a3[7];
      v25 = a3 + 8;
      v31[7] = v24;
      v26 = v25[1];
      v31[8] = *v25;
      v27 = v25[2];
      v31[9] = v26;
      v28 = v25[3];
      v31[10] = v27;
      v31[11] = v28;
      ApiSetEditionDoPointerDPITransforms(v31, a6, a7);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 98;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 97;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 96;
LABEL_15:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v13->DeviceExtension, v12, 11, v14, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v29 = *(struct _ERESOURCE **)(a1 + 200);
  *(_QWORD *)(a1 + 232) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v29);
  return v11;
}
