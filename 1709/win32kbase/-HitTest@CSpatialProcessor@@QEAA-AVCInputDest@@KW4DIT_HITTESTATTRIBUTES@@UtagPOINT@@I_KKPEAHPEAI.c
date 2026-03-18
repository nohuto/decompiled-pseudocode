/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C0013170
 * Callers:
 *     DCompHitTest @ 0x1C0013850 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0012F50 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C0012F80 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00173C0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     GetMouseHitTestContext @ 0x1C0017B34 (GetMouseHitTestContext.c)
 *     WPP_RECORDER_SF_Ddqdd @ 0x1C008153C (WPP_RECORDER_SF_Ddqdd.c)
 *     ApiSetClientCallDitThread @ 0x1C0085264 (ApiSetClientCallDitThread.c)
 *     ApiSetEditionTryDwmHitTest @ 0x1C0085608 (ApiSetEditionTryDwmHitTest.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0085690 (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C00859BC (ApiSetRemoveMagnificationOutputTransform.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  int v14; // r12d
  char v15; // bl
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  char v19; // r14
  __int64 v20; // rcx
  CSpatialProcessor *v21; // rcx
  CInputDest *v22; // rax
  char v24; // [rsp+51h] [rbp-AFh]
  _QWORD v25[26]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[208]; // [rsp+130h] [rbp+30h] BYREF

  memset(a2, 0, 0xC0uLL);
  a2[192] = 0;
  memset(v25, 0, sizeof(v25));
  v14 = a4 & 0x400;
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( !a3 || (v24 = 0, a3 == 6) )
    v24 = 1;
  if ( a8 || (unsigned int)ApiSetEditionTryDwmHitTest() )
  {
    v25[3] = 0LL;
    v25[2] = a5;
    HIDWORD(v25[22]) = a4 & 0xFFFFFBFF;
    LODWORD(v25[0]) = a3;
    LODWORD(v25[24]) = a8;
    if ( (unsigned int)(a3 - 4) <= 1 )
      GetMouseHitTestContext(a1 + 48);
    *(_QWORD *)((char *)&v25[24] + 4) = *(_QWORD *)(a1 + 48);
    HIDWORD(v25[14]) = 1065353216;
    LODWORD(v25[12]) = 1065353216;
    v15 = 0;
    HIDWORD(v25[9]) = 1065353216;
    LODWORD(v25[7]) = 1065353216;
    memset((void *)(a1 + 56), 0, 0xA0uLL);
    if ( (a4 & 0x400) == 0 )
    {
      v25[5] = a1 + 56;
      v15 = 1;
      LODWORD(v25[6]) = 20;
    }
    if ( *(_DWORD *)(a1 + 16) == 2 )
    {
      v19 = 0;
      if ( v14 )
        LODWORD(v25[23]) = 1024;
    }
    else
    {
      ApiSetAddMagnificationOutputTransform(&v25[2], &v25[7]);
      v19 = 1;
    }
    WPP_RECORDER_SF_Ddqdd(*(_QWORD *)(a1 + 8), v16, v17, v18);
    if ( (unsigned int)ApiSetClientCallDitThread(v20, v25) )
    {
      if ( v19 )
        ApiSetRemoveMagnificationOutputTransform(&v25[7]);
      if ( v24 )
      {
        CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v21, (const struct tagDITCALLBACKSTRUCT *)v25);
      }
      else
      {
        if ( v14 && (v25[23] & 0x40000000000LL) != 0 )
          v15 |= 2u;
        v22 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
                (CSpatialProcessor *)a1,
                (CInputDest *)v26,
                (__int64)v25,
                a7,
                v15);
        CInputDest::operator=(a2, v22);
        CInputDest::~CInputDest((CInputDest *)v26);
        if ( *(_DWORD *)a2 )
        {
          if ( a9 )
            *a9 = -(v25[22] & 1);
          if ( a10 )
            *a10 = v25[15];
        }
      }
      if ( v25[4] )
        NtClose((HANDLE)v25[4]);
    }
  }
  return a2;
}
