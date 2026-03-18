/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C001B1F4
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001B3D8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0011CB0 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CSpatialProcessor *a1,
        CInputDest *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v4; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  __int128 v16; // xmm0
  int v17; // ecx
  int v18; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _OWORD v23[11]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v24[11]; // [rsp+E0h] [rbp-20h] BYREF
  va_list va; // [rsp+1F0h] [rbp+F0h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  if ( a4 == 6 || !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  memset(v24, 0, sizeof(v24));
  if ( v4 )
  {
    if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a1, v4, a4, (struct tagINPUTDEST *)v24) && (v24[0] & 4) != 0 )
    {
      v22 = 0LL;
      if ( DWORD1(v24[5]) == 2 )
      {
        LOBYTE(v20) = 1;
        v22 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), v20);
        if ( !v22 )
        {
          memset(v23, 0, sizeof(v23));
          v24[0] = v23[0];
          v24[1] = v23[1];
          v24[2] = v23[2];
          v24[3] = v23[3];
          v24[4] = v23[4];
          v24[5] = v23[5];
          v24[6] = v23[6];
          v24[7] = v23[7];
          v24[8] = v23[8];
          v24[9] = v23[9];
          v24[10] = v23[10];
          goto LABEL_19;
        }
      }
      else if ( DWORD1(v24[5]) != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      }
      if ( (v24[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      ApiSetEditionUpdateInputTransformFromHitTest(
        (__int64)v24,
        v22,
        (__int64)v4,
        -(BYTE12(v24[0]) & 1),
        a3 + 24,
        (__int64)va);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
    {
      LOBYTE(v9) = 1;
      v12 = HMValidateHandleNoSecure(v10, v9);
      v13 = v24[0];
      if ( v12 )
      {
        v13 = LODWORD(v24[0]) | 4;
        DWORD1(v24[5]) = 2;
        LODWORD(v24[5]) |= 1u;
        LODWORD(v24[0]) |= 4u;
        *((_QWORD *)&v24[4] + 1) = v12;
      }
      if ( v13 )
        goto LABEL_8;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)a1 + 1),
        v11,
        8,
        11,
        (__int64)&WPP_d9096e32b26035e698e53624e5db1f74_Traceguids,
        *(_QWORD *)(a3 + 8));
    }
  }
LABEL_19:
  if ( !LODWORD(v24[0]) )
    goto LABEL_11;
LABEL_8:
  v14 = *(_DWORD *)(a3 + 152);
  v15 = *(_QWORD *)(a3 + 144);
  v24[6] = *(_OWORD *)(a3 + 24);
  *((_QWORD *)&v24[5] + 1) = v15;
  v16 = *(_OWORD *)(a3 + 56);
  v24[7] = *(_OWORD *)(a3 + 40);
  v24[8] = v16;
  v24[9] = *(_OWORD *)(a3 + 72);
  v17 = v14 - 1;
  if ( !v17 )
  {
LABEL_27:
    HIDWORD(v24[10]) = 1;
    goto LABEL_11;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    DWORD2(v24[10]) = 1;
    goto LABEL_11;
  }
  if ( v18 == 1 )
  {
    DWORD2(v24[10]) = 1;
    goto LABEL_27;
  }
LABEL_11:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v24);
  return a2;
}
