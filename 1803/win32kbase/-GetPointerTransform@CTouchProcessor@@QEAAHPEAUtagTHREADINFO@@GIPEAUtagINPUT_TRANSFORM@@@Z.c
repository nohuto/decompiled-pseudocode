/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0116354
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C00B6EE0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ValidateHwndEx @ 0x1C0022ED0 (ValidateHwndEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ValidateHbwnd @ 0x1C009FF50 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0114770 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C011F76C (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C0140738 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C0140BBC (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 ThreadPointerData; // r14
  int v10; // ecx
  HWND v12; // rbp
  unsigned __int64 *v13; // rbx
  int v14; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  unsigned __int16 v20; // r9
  int v21; // [rsp+20h] [rbp-48h]
  HWND *v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23[7]; // [rsp+30h] [rbp-38h] BYREF
  HWND v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = (HWND)this;
  v5 = (__int64 *)gpTouchProcessor;
  v6 = a4;
  if ( a3 == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)v5,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        0LL,
                        0LL,
                        &v24);
  if ( !ThreadPointerData )
  {
    LODWORD(v22) = a3;
    WPP_RECORDER_SF_D(v5[1], 2u, 0xBu, 0x13Du, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids, v22);
LABEL_5:
    v10 = 87;
LABEL_6:
    UserSetLastError(v10);
    return 0LL;
  }
  v12 = v24;
  if ( !ValidateHbwnd((unsigned __int64)v24) && !ValidateHwndEx(v12, 1, 0) )
  {
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0x13Eu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_5;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v12) )
  {
    WPP_RECORDER_SF_(v5[1], 2u, 4u, 0x13Fu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v10 = 232;
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v13 = v23;
  }
  else
  {
    v13 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v6, 0x78697355u);
    if ( !v13 )
    {
      WPP_RECORDER_SF_L(v5[1], v18, v19, 320, v21, v6);
      goto LABEL_5;
    }
  }
  v25 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (CTouchProcessor *)v5,
                             ThreadPointerData,
                             v6,
                             v13,
                             &v25);
  if ( !PointerDataQPCTimeList )
  {
    v16 = v5[1];
    if ( !v25 )
    {
      WPP_RECORDER_SF_(v16, 2u, 0xBu, 0x141u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v17 = 232;
LABEL_23:
      UserSetLastError(v17);
      goto LABEL_24;
    }
    v20 = 322;
LABEL_22:
    WPP_RECORDER_SF_(v16, 2u, 0xBu, v20, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v17 = 87;
    goto LABEL_23;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v12, v6, (_DWORD)v13, v14, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    v16 = v5[1];
    v20 = 323;
    goto LABEL_22;
  }
LABEL_24:
  if ( v13 != v23 )
    Win32FreePool((__int64)v13);
  return PointerDataQPCTimeList;
}
