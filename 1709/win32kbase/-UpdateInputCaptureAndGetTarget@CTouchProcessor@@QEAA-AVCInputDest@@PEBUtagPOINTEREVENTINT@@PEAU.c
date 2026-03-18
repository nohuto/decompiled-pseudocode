/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00133EC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0017280 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AA6B4 (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A0F0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C013A4F4 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013ACC8 (ApiSetEditionPointerSpeedHitTest.c)
 */

_DWORD *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        CSpatialProcessor *a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        CInputDest *a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  _DWORD *v10; // rbx
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r14d
  int v16; // r15d
  int IsPointerInputRedirected; // r14d
  unsigned int InputProcessContext; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // rbx
  struct _ERESOURCE *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int16 v37; // bx
  int v38; // ecx
  _WORD *v39; // rdx
  __int16 v40; // cx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-CCh]
  int v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+3Ch] [rbp-C4h]
  void *v46; // [rsp+40h] [rbp-C0h]
  CSpatialProcessor *v47; // [rsp+48h] [rbp-B8h]
  CInputDest *v48; // [rsp+50h] [rbp-B0h]
  _WORD *v49; // [rsp+58h] [rbp-A8h]
  _QWORD v50[6]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v51[12]; // [rsp+90h] [rbp-70h] BYREF
  char v52; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v53[192]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v54[26]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _QWORD v55[26]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v56; // [rsp+4F0h] [rbp+3F0h]

  v10 = a8;
  v48 = a6;
  v49 = a7;
  v47 = a1;
  v43 = a9;
  v46 = a8;
  memset(a2, 0, 0xC0uLL);
  *((_BYTE *)a2 + 192) = 0;
  v44 = a5 & 0x10000;
  v56 = a5 & 0x40000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Cu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 12), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 12), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 12));
  }
  CInputDest::operator=((__int64)a2, (__int64)(a4 + 12));
  if ( *a2 )
  {
    v15 = a4[86];
    v45 = 16;
    v16 = -__CFSHR__(v15, 5);
    IsPointerInputRedirected = -__CFSHR__(v15, 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v13, *(_QWORD *)(a3 + 24), v14);
    memset(v53, 0, sizeof(v53));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(InputProcessContext, a4[10], v53);
    CInputDest::CInputDest((CInputDest *)v54, (const struct CInputDest *)v53);
    CInputDest::operator=((__int64)a2, v54);
    CInputDest::SetEmpty((CInputDest *)v54);
    v10 = v46;
    v45 = 0;
    v16 = IsPointerInputRedirected;
  }
  if ( *a2 )
    goto LABEL_22;
  CInputDest::operator=((__int64)a2, (__int64)v48);
  LOBYTE(v19) = 19;
  v22 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(a3 + 24), v19, v20, v21) + 472);
  if ( v22 )
    v23 = *(_QWORD *)(v22 + 960);
  else
    v23 = 0LL;
  if ( v23 && (*(_DWORD *)(v23 + 756) & 1) != 0 )
  {
    v16 = 1;
    *v10 = *(_DWORD *)(v23 + 752);
    a4[86] |= 0x40u;
  }
  if ( *a2 )
  {
LABEL_22:
    if ( *(_DWORD *)(a3 + 8) == 3 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v47,
        3,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(_DWORD *)(a3 + 12),
        v43);
  }
  else
  {
    v24 = (char *)v47 + 224;
    v42 = 0;
    *((_DWORD *)v47 + 66) = 1;
    *((_QWORD *)v24 + 3) = KeGetCurrentThread();
    ++glMitInGuard;
    v25 = *(struct _ERESOURCE **)v24;
    *((_QWORD *)v24 + 4) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(v25);
    v26 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                      (unsigned int)&v52,
                      (int)a3 + 8,
                      v43,
                      (unsigned int)&v42,
                      (__int64)v46);
    v27 = v26[1];
    v51[0] = *v26;
    v28 = v26[2];
    v51[1] = v27;
    v29 = v26[3];
    v51[2] = v28;
    v30 = v26[4];
    v51[3] = v29;
    v31 = v26[5];
    v51[4] = v30;
    v32 = v26[6];
    v51[5] = v31;
    v51[6] = v32;
    v33 = v26[7];
    v26 += 8;
    v51[7] = v33;
    v34 = v26[1];
    v51[8] = *v26;
    v35 = v26[2];
    v51[9] = v34;
    v36 = v26[3];
    v51[10] = v35;
    v51[11] = v36;
    CInputDest::CInputDest((CInputDest *)v55, (const struct CInputDest *)v51);
    CInputDest::operator=((__int64)a2, v55);
    CInputDest::SetEmpty((CInputDest *)v55);
    if ( v44 )
    {
      v46 = gFireViewHitTestConnectionHandle;
      if ( gFireViewHitTestConnectionHandle )
      {
        memset(v50, 0, 0x28uLL);
        v50[0] = *((_QWORD *)a2 + 12);
        v50[1] = *(_QWORD *)(a3 + 24);
        LODWORD(v50[2]) = *(_DWORD *)(a3 + 8);
        v50[3] = *((_QWORD *)v47 + 5);
        v50[4] = *(_QWORD *)(a3 + 40);
        CoreMsgSend(v46, 0, v50, (const GUID *)0x28);
        a4[86] |= 0x1000u;
      }
    }
    CInpLockGuard::LockExclusive((PERESOURCE *)v24);
    CInpLockGuard::LeaveGuard((CInpLockGuard *)v24);
    if ( v42 )
    {
      a4[86] |= 0x40u;
      v16 = 1;
    }
  }
  v37 = 32;
  if ( v44 && *a2 )
  {
    CInputDest::operator=((__int64)(a4 + 12), (__int64)a2);
    v38 = a4[86] ^ (a4[86] ^ (16 * v16)) & 0x10;
    a4[86] = v38 ^ (v38 ^ (32 * IsPointerInputRedirected)) & 0x20;
  }
  else if ( v56 && a4[12] )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 12));
    a4[86] &= 0xFFFFFFCF;
  }
  v39 = v49;
  *v49 |= v45;
  if ( !v16 && (a4[86] & 0x40) == 0 )
    v37 = 0;
  v40 = v37 | *v39 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v39 = v40;
  *v39 = v40 | (2 * (a4[86] & 0x40));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Du,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInputDest::SetEmpty(v48);
  return a2;
}
