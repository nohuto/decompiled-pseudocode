/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C001B0EC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0036F3C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C0078190 (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0124900 (-EnterGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01249F0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C013EC74 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013F498 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        CInputDest *a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  struct _KTHREAD **v9; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  CInputDest *v15; // r14
  __int64 v16; // rdx
  CTouchProcessor *v17; // rcx
  int v18; // r15d
  int v19; // r12d
  int IsPointerInputRedirected; // r15d
  unsigned int InputProcessContext; // ebx
  int v22; // eax
  CInputDest *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  bool v26; // zf
  int v27; // r14d
  CInpLockGuard *v28; // rbx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // rcx
  int v41; // edx
  __int16 v42; // bx
  int v43; // edx
  int v44; // ecx
  int v45; // ecx
  _WORD *v46; // r8
  __int16 v47; // dx
  __int16 v48; // cx
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+44h] [rbp-BCh]
  CInputDest *v55; // [rsp+48h] [rbp-B8h]
  _DWORD *v56; // [rsp+50h] [rbp-B0h]
  _WORD *v57; // [rsp+58h] [rbp-A8h]
  _QWORD v58[5]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v59[11]; // [rsp+90h] [rbp-70h] BYREF
  char v60; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v61[176]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v62[24]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD v63[24]; // [rsp+360h] [rbp+260h] BYREF
  int v64; // [rsp+4A0h] [rbp+3A0h]

  v9 = (struct _KTHREAD **)a1;
  v55 = a6;
  v57 = a7;
  v56 = a8;
  v52 = a9;
  memset(a2, 0, 0xB0uLL);
  *((_BYTE *)a2 + 176) = 0;
  v54 = 0;
  v14 = a5 & 0x10000;
  v64 = a5 & 0x40000;
  v53 = v14;
  if ( v9[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x48u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  *a8 = 0;
  v15 = (CInputDest *)(a4 + 48);
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 48), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 48), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 48));
  }
  CInputDest::operator=((__int64)a2, a4 + 48);
  if ( !*a2 )
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v17, *(_QWORD *)(a3 + 24));
    memset(v61, 0, sizeof(v61));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                 InputProcessContext,
                                 *(unsigned int *)(a4 + 40),
                                 v61);
    CInputDest::CInputDest((CInputDest *)v62, (const struct tagINPUTDEST *)v61);
    CInputDest::operator=((__int64)a2, v62);
    CInputDest::SetEmpty((CInputDest *)v62);
    v22 = *a2;
    v19 = IsPointerInputRedirected;
    if ( IsPointerInputRedirected )
    {
      if ( !v22 )
LABEL_14:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v16);
    }
    else if ( v22 )
    {
      goto LABEL_14;
    }
    v9 = (struct _KTHREAD **)a1;
    goto LABEL_16;
  }
  v18 = *(_DWORD *)(a4 + 328);
  v54 = 1;
  v19 = -__CFSHR__(v18, 5);
  IsPointerInputRedirected = -__CFSHR__(v18, 6);
LABEL_16:
  v23 = v55;
  if ( *(_DWORD *)(a4 + 40) != 5 && *(_DWORD *)v55 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v16);
    v23 = v55;
  }
  if ( *a2 )
    goto LABEL_35;
  CInputDest::operator=((__int64)a2, (__int64)v23);
  v24 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), 19) + 480);
  if ( v24 )
    v25 = *(_QWORD *)(v24 + 960);
  else
    v25 = 0LL;
  if ( v25 && (*(_DWORD *)(v25 + 580) & 1) != 0 )
  {
    v19 = 1;
    *v56 = *(_DWORD *)(v25 + 576);
    *(_DWORD *)(a4 + 328) |= 0x40u;
  }
  if ( *a2 )
  {
LABEL_35:
    v41 = *(_DWORD *)(a3 + 8);
    if ( (unsigned int)(v41 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        (CSpatialProcessor *)v9,
        v41,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        v52);
  }
  else
  {
    v26 = *(_DWORD *)(a4 + 40) == 3;
    v27 = 0;
    v51 = 0;
    if ( v26 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v27 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v27 |= 0x80u;
    }
    v28 = (CInpLockGuard *)(v9 + 9);
    CInpLockGuard::EnterGuard(v28);
    CInpLockGuard::UnLock((PERESOURCE *)v28);
    v29 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                      (unsigned int)&v60,
                      (int)a3 + 8,
                      v27,
                      v52,
                      (__int64)&v51,
                      (__int64)v56);
    v30 = v29[1];
    v59[0] = *v29;
    v31 = v29[2];
    v59[1] = v30;
    v32 = v29[3];
    v59[2] = v31;
    v33 = v29[4];
    v59[3] = v32;
    v34 = v29[5];
    v59[4] = v33;
    v35 = v29[6];
    v59[5] = v34;
    v36 = v29[7];
    v59[6] = v35;
    v37 = v29[8];
    v59[7] = v36;
    v38 = v29[9];
    v59[8] = v37;
    v39 = v29[10];
    v59[9] = v38;
    v59[10] = v39;
    CInputDest::CInputDest((CInputDest *)v63, (const struct tagINPUTDEST *)v59);
    CInputDest::operator=((__int64)a2, v63);
    CInputDest::SetEmpty((CInputDest *)v63);
    if ( v53 )
    {
      memset(v58, 0, sizeof(v58));
      v58[0] = *((_QWORD *)a2 + 11);
      v58[1] = *(_QWORD *)(a3 + 24);
      LODWORD(v58[2]) = *(_DWORD *)(a3 + 8);
      v58[3] = *(_QWORD *)(a1 + 40);
      v58[4] = *(_QWORD *)(a3 + 40);
      InputExtensibilityCallout::CoreMsgSendMessage(v40, 6);
    }
    CInpLockGuard::LockExclusive((PERESOURCE *)v28);
    CInpLockGuard::LeaveGuard(v28);
    v15 = (CInputDest *)(a4 + 48);
    if ( v51 )
    {
      *(_DWORD *)(a4 + 328) |= 0x40u;
      v19 = 1;
    }
  }
  v42 = 32;
  if ( v53 && *a2 )
  {
    CInputDest::operator=((__int64)v15, (__int64)a2);
    v43 = *(unsigned __int16 *)(a4 + 32);
    v44 = *(_DWORD *)(a4 + 328) ^ (*(_DWORD *)(a4 + 328) ^ (16 * v19)) & 0x10;
    *(_DWORD *)(a4 + 328) = v44 ^ (v44 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v45 = *(_DWORD *)(a3 + 8);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 88);
    *(_DWORD *)(a1 + 64) = v45;
    *(_DWORD *)(a1 + 68) = v43;
  }
  else if ( v64 && *(_DWORD *)v15 )
  {
    CInputDest::SetEmpty(v15);
    *(_DWORD *)(a4 + 328) &= 0xFFFFFFCF;
  }
  v46 = v57;
  v47 = *v57 | (16 * v54);
  *v57 = v47;
  if ( !v19 && (*(_DWORD *)(a4 + 328) & 0x40) == 0 )
    v42 = 0;
  v48 = v47 | v42 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v46 = v48;
  *v46 = v48 | (2 * (*(_WORD *)(a4 + 328) & 0x40));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x49u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInputDest::SetEmpty(v55);
  return a2;
}
