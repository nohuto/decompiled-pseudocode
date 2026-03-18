/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C
 * Callers:
 *     DCompHitTest @ 0x1C006ED00 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0001210 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C006EECC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C006F2DC (ApiSetRemoveMagnificationOutputTransform.c)
 *     ApiSetClientCallDitThread @ 0x1C006F344 (ApiSetClientCallDitThread.c)
 *     WPP_RECORDER_SF_Ddqdd @ 0x1C006F3D0 (WPP_RECORDER_SF_Ddqdd.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C006F5E4 (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetEditionTryDwmHitTest @ 0x1C006F65C (ApiSetEditionTryDwmHitTest.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     GetBoundMonitorForType @ 0x1C012EB84 (GetBoundMonitorForType.c)
 */

_BYTE *__fastcall CSpatialProcessor::HitTest(
        __int64 a1,
        _BYTE *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char v13; // r12
  int v14; // eax
  unsigned int v15; // edi
  char v16; // r15
  char v17; // r14
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  CSpatialProcessor *v23; // rcx
  CInputDest *v24; // rax
  _BYTE *v25; // rbx
  __int64 v27; // rbx
  _QWORD *BoundMonitorForType; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  int *v32; // rax
  __int64 v33; // rax
  char v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+54h] [rbp-ACh]
  _QWORD v38[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[208]; // [rsp+140h] [rbp+40h] BYREF

  memset(a2, 0, 0xC0uLL);
  v13 = 0;
  a2[192] = 0;
  memset(v38, 0, sizeof(v38));
  v34 = 0;
  v14 = a4 & 0x400;
  v15 = a4 & 0xFFFFFBFF;
  v35 = v14;
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( !a3 || (v16 = 0, a3 == 6) )
    v16 = 1;
  if ( !a8 && !(unsigned int)ApiSetEditionTryDwmHitTest() )
    return a2;
  HIDWORD(v38[21]) = v15;
  v17 = 0;
  LODWORD(v38[23]) = a8;
  LODWORD(v38[0]) = a3;
  v38[2] = a5;
  v38[3] = 0LL;
  HIDWORD(v38[14]) = 1065353216;
  LODWORD(v38[12]) = 1065353216;
  HIDWORD(v38[9]) = 1065353216;
  LODWORD(v38[7]) = 1065353216;
  memset((void *)(a1 + 40), 0, 0xA0uLL);
  if ( v16 && ((unsigned __int8)gInputSinkInfoRetrieval & 8) != 0 )
  {
    v38[5] = a1 + 40;
    v13 = 1;
    LODWORD(v38[6]) = 20;
  }
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    memset((void *)(a1 + 40), 0, 0xA0uLL);
    if ( v35 )
    {
      LODWORD(v38[22]) = 1024;
    }
    else
    {
      v38[5] = a1 + 40;
      v13 = 1;
      LODWORD(v38[6]) = 20;
    }
  }
  else
  {
    ApiSetAddMagnificationOutputTransform(&v38[2], &v38[7]);
    v34 = 1;
  }
  v21 = *(_QWORD **)(a1 + 24);
  if ( v21 && *(_DWORD *)(a1 + 32) )
  {
    v27 = HMValidateSharedHandleNoRip(*v21);
    if ( !v27 )
      goto LABEL_14;
    v38[1] = *v21;
  }
  else
  {
    if ( a3 != 5 )
      goto LABEL_14;
    BoundMonitorForType = (_QWORD *)GetBoundMonitorForType();
    v27 = (__int64)BoundMonitorForType;
    if ( !BoundMonitorForType )
      goto LABEL_14;
    v38[1] = *BoundMonitorForType;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v29 = (_DWORD *)(*(_QWORD *)(v27 + 40) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v29 = (_DWORD *)(*(_QWORD *)(v27 + 40) + 60LL);
  }
  else
  {
    v29 = (_DWORD *)(*(_QWORD *)(v27 + 40) + 28LL);
  }
  LODWORD(v38[2]) -= *v29;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v30 = *(_QWORD *)(v27 + 40) + 44LL;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v30 = *(_QWORD *)(v27 + 40) + 60LL;
  }
  else
  {
    v30 = *(_QWORD *)(v27 + 40) + 28LL;
  }
  v17 = 1;
  HIDWORD(v38[2]) -= *(_DWORD *)(v30 + 4);
LABEL_14:
  WPP_RECORDER_SF_Ddqdd(*(_QWORD *)(a1 + 8), v18, v19, v20);
  if ( !(unsigned int)ApiSetClientCallDitThread(v22, v38) )
    return a2;
  if ( v34 )
    ApiSetRemoveMagnificationOutputTransform(&v38[7]);
  if ( v16 )
  {
    CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v23, (const struct tagDITCALLBACKSTRUCT *)v38);
    v25 = a2;
  }
  else
  {
    if ( v35 && (v38[22] & 0x40000000000LL) != 0 )
      v13 |= 2u;
    if ( v17 )
    {
      v31 = HMValidateSharedHandleNoRip(v38[1]);
      if ( v31 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v32 = (int *)(*(_QWORD *)(v31 + 40) + 44LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v32 = (int *)(*(_QWORD *)(v31 + 40) + 60LL);
        }
        else
        {
          v32 = (int *)(*(_QWORD *)(v31 + 40) + 28LL);
        }
        *(float *)&v38[13] = *(float *)&v38[13] + (float)*v32;
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v33 = *(_QWORD *)(v31 + 40) + 44LL;
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL) & 1) != 0 )
        {
          v33 = *(_QWORD *)(v31 + 40) + 60LL;
        }
        else
        {
          v33 = *(_QWORD *)(v31 + 40) + 28LL;
        }
        *((float *)&v38[13] + 1) = *((float *)&v38[13] + 1) + (float)*(int *)(v33 + 4);
      }
    }
    v24 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
            (CSpatialProcessor *)a1,
            (CInputDest *)v39,
            (__int64)v38,
            a7,
            v13);
    v25 = a2;
    CInputDest::operator=((__int64)a2, v24);
    CInputDest::SetEmpty((CInputDest *)v39);
    if ( *(_DWORD *)a2 )
    {
      if ( a9 )
        *a9 = -(v38[21] & 1);
      if ( a10 )
        *a10 = v38[15];
    }
  }
  if ( v38[4] )
    NtClose((HANDLE)v38[4]);
  return v25;
}
