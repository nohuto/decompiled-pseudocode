/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001B3D8
 * Callers:
 *     DCompHitTest @ 0x1C0035BB0 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C00028A8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C001B1F4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     GetMouseHitTestContext @ 0x1C0055864 (GetMouseHitTestContext.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0063C14 (WPP_RECORDER_SF_ddd.c)
 *     ApiSetClientCallDitThread @ 0x1C00648D8 (ApiSetClientCallDitThread.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0064D70 (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C0064F14 (ApiSetRemoveMagnificationOutputTransform.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BYTE *__fastcall CSpatialProcessor::HitTest(
        __int64 a1,
        _BYTE *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // r13
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  CSpatialProcessor *v19; // rcx
  CInputDest *v20; // rax
  _QWORD v23[14]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v24[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v25[192]; // [rsp+160h] [rbp+60h] BYREF

  memset(a2, 0, 0xB0uLL);
  v12 = 0;
  a2[176] = 0;
  memset(v23, 0, sizeof(v23));
  v15 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  if ( !a3 || a3 == 6 )
    v12 = 1;
  v23[2] = a5;
  HIDWORD(v23[11]) = a4;
  LODWORD(v23[12]) = a7;
  LODWORD(v23[0]) = a3;
  if ( (unsigned int)(a3 - 4) <= 1 )
    GetMouseHitTestContext(a1 + 48);
  *(_QWORD *)((char *)&v23[12] + 4) = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)(a1 + 16);
  LODWORD(v23[11]) = 1065353216;
  HIDWORD(v23[8]) = 1065353216;
  LODWORD(v23[6]) = 1065353216;
  HIDWORD(v23[3]) = 1065353216;
  if ( v16 == 1 )
    goto LABEL_10;
  if ( v16 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
LABEL_10:
    ApiSetAddMagnificationOutputTransform(&v23[2], (char *)&v23[3] + 4);
    v15 = 1;
  }
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a1 + 8),
    v13,
    8,
    10,
    (__int64)&WPP_d9096e32b26035e698e53624e5db1f74_Traceguids,
    v23[0],
    v23[2],
    SBYTE4(v23[2]));
  memset(v24, 0, sizeof(v24));
  if ( (unsigned int)ApiSetClientCallDitThread(v17, v23, v24) )
  {
    if ( v15 )
      ApiSetRemoveMagnificationOutputTransform(&v24[3]);
    if ( v12 )
    {
      if ( *(_DWORD *)a2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v19, (const struct _InputHitTestResult *)v24);
    }
    else
    {
      v20 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
              (CSpatialProcessor *)a1,
              (CInputDest *)v25,
              (__int64)v24,
              v23[0],
              a6);
      CInputDest::operator=(a2, v20);
      CInputDest::SetEmpty((CInputDest *)v25);
      if ( *(_DWORD *)a2 )
      {
        if ( a8 )
          *a8 = -((__int64)v24[17] & 1);
        if ( a9 )
          *a9 = v24[11];
      }
    }
    if ( v24[2] )
      NtClose(v24[2]);
  }
  return a2;
}
