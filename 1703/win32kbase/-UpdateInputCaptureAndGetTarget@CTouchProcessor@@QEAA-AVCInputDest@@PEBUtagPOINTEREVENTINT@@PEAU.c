/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0128B84
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00A114C (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A830 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionFireViewHitTestCallback @ 0x1C013AABC (ApiSetEditionFireViewHitTestCallback.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C013B230 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013BB58 (ApiSetEditionPointerSpeedHitTest.c)
 */

_DWORD *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        CInputDest *a6,
        _WORD *a7,
        _DWORD *a8,
        int a9)
{
  int v12; // edx
  CTouchProcessor *v13; // rcx
  int v14; // edx
  int v15; // r14d
  int IsPointerInputRedirected; // r15d
  unsigned int InputProcessContext; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct _ERESOURCE *v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int16 v33; // bx
  int v34; // ecx
  __int16 v35; // cx
  int v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+3Ch] [rbp-C4h]
  __int64 v41; // [rsp+40h] [rbp-C0h]
  _DWORD *v42; // [rsp+48h] [rbp-B8h]
  CInputDest *v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  _OWORD v45[12]; // [rsp+60h] [rbp-A0h] BYREF
  char v46; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[192]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v48[26]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD v49[26]; // [rsp+370h] [rbp+270h] BYREF
  int v50; // [rsp+4C0h] [rbp+3C0h]

  v43 = a6;
  v44 = a1;
  v40 = a9;
  v41 = a3;
  v42 = a8;
  memset(a2, 0, 0xC0uLL);
  *((_BYTE *)a2 + 192) = 0;
  v37 = 0;
  v39 = a5 & 0x10000;
  v50 = a5 & 0x40000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      11,
      60,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 12), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 12), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 12));
  }
  CInputDest::operator=((__int64)a2, (__int64)(a4 + 12));
  v14 = 0;
  if ( *a2 )
  {
    v37 = 1;
    v15 = -__CFSHR__(a4[86], 5);
    IsPointerInputRedirected = -__CFSHR__(a4[86], 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v13, *(_QWORD *)(a3 + 24));
    memset(v47, 0, sizeof(v47));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(InputProcessContext, a4[10], v47);
    CInputDest::CInputDest((CInputDest *)v48, (const struct CInputDest *)v47);
    CInputDest::operator=((__int64)a2, v48);
    CInputDest::SetEmpty((CInputDest *)v48);
    v14 = 0;
    v15 = IsPointerInputRedirected;
    if ( !*a2 )
    {
      CInputDest::operator=((__int64)a2, (__int64)v43);
      v18 = HMValidateHandleNoSecure(*(_QWORD *)(v41 + 24), 19);
      v14 = 0;
      v19 = *(_QWORD *)(v18 + 472);
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 1624);
      else
        v20 = 0LL;
      if ( v20 && (*(_DWORD *)(v20 + 732) & 1) != 0 )
      {
        v15 = 1;
        *v42 = *(_DWORD *)(v20 + 728);
        a4[86] |= 0x40u;
      }
      if ( !*a2 )
      {
        v21 = v44 + 200;
        v38 = 0;
        *(_DWORD *)(v44 + 240) = 1;
        *(_QWORD *)(v21 + 24) = KeGetCurrentThread();
        ++glMitInGuard;
        v22 = *(struct _ERESOURCE **)v21;
        *(_QWORD *)(v21 + 32) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(v22);
        v23 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                          (unsigned int)&v46,
                          (int)v41 + 8,
                          v40,
                          (unsigned int)&v38,
                          (__int64)v42);
        v24 = v23[1];
        v45[0] = *v23;
        v25 = v23[2];
        v45[1] = v24;
        v26 = v23[3];
        v45[2] = v25;
        v27 = v23[4];
        v45[3] = v26;
        v28 = v23[5];
        v45[4] = v27;
        v29 = v23[6];
        v45[5] = v28;
        v45[6] = v29;
        v45[7] = v23[7];
        v30 = v23[9];
        v45[8] = v23[8];
        v31 = v23[10];
        v45[9] = v30;
        v32 = v23[11];
        v45[10] = v31;
        v45[11] = v32;
        CInputDest::CInputDest((CInputDest *)v49, (const struct CInputDest *)v45);
        CInputDest::operator=((__int64)a2, v49);
        CInputDest::SetEmpty((CInputDest *)v49);
        if ( v39 )
        {
          ApiSetEditionFireViewHitTestCallback(v41, *((_QWORD *)a2 + 12), *(_QWORD *)(v41 + 24), *(_DWORD *)(v41 + 8));
          a4[86] |= 0x1000u;
        }
        CInpLockGuard::LockExclusive((PERESOURCE *)v21);
        CInpLockGuard::LeaveGuard((CInpLockGuard *)v21);
        v14 = 0;
        if ( v38 )
        {
          a4[86] |= 0x40u;
          v15 = 1;
        }
      }
    }
  }
  v33 = 32;
  if ( v39 && *a2 )
  {
    CInputDest::operator=((__int64)(a4 + 12), (__int64)a2);
    v34 = a4[86] ^ (a4[86] ^ (16 * v15)) & 0x10;
    a4[86] = v34 ^ (v34 ^ (32 * IsPointerInputRedirected)) & 0x20;
LABEL_26:
    v14 = 0;
    goto LABEL_27;
  }
  if ( v50 && a4[12] )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 12));
    a4[86] &= 0xFFFFFFCF;
    goto LABEL_26;
  }
LABEL_27:
  *a7 |= v37 != 0 ? 0x10 : 0;
  if ( !v15 && (a4[86] & 0x40) == 0 )
    v33 = 0;
  v35 = (IsPointerInputRedirected != 0 ? 0x40 : 0) | v33 | *a7;
  *a7 = v35;
  *a7 = (2 * (a4[86] & 0x40)) | v35;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      11,
      61,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInputDest::SetEmpty(v43);
  return a2;
}
