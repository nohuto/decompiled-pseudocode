/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01212B0
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C00E80B0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ValidateHbwnd @ 0x1C00DBA10 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C011FB70 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C0129004 (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C013BFC0 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C013C3F0 (ApiSetHasInputTransform.c)
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
  int v9; // ecx
  __int64 v11; // r9
  unsigned __int64 *v12; // rbx
  int v13; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21[5]; // [rsp+30h] [rbp-28h] BYREF
  CTouchProcessor *v22; // [rsp+60h] [rbp+8h] BYREF
  void *v23; // [rsp+68h] [rbp+10h] BYREF

  v22 = this;
  v5 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v6 = a4;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
                        a3,
                        0LL,
                        0LL,
                        (HWND *)&v23);
  if ( !ThreadPointerData )
  {
    LODWORD(v20) = a3;
    WPP_RECORDER_SF_d(v5[1], 2u, 0xBu, 0x128u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids, v20);
LABEL_3:
    v9 = 87;
LABEL_4:
    UserSetLastError(v9);
    return 0LL;
  }
  if ( !ValidateHbwnd((unsigned __int64)v23) && !ValidateHwndEx(v23, 1LL, 0LL, v11) )
  {
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0x129u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    goto LABEL_3;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v23) )
  {
    WPP_RECORDER_SF_(v5[1], 2u, 4u, 0x12Au, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v9 = 232;
    goto LABEL_4;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v12 = v21;
  }
  else
  {
    v12 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v6, 2020176725LL);
    if ( !v12 )
    {
      WPP_RECORDER_SF_L(v5[1], v16, v17, 299, v19, v6);
      goto LABEL_3;
    }
  }
  LODWORD(v22) = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (CTouchProcessor *)v5,
                             ThreadPointerData,
                             v6,
                             v12,
                             (int *)&v22);
  if ( !PointerDataQPCTimeList )
  {
    if ( !(_DWORD)v22 )
    {
      WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0x12Cu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v15 = 232;
LABEL_21:
      UserSetLastError(v15);
      goto LABEL_22;
    }
    v18 = 301;
LABEL_20:
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, v18, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v15 = 87;
    goto LABEL_21;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v23, v6, (_DWORD)v12, v13, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    v18 = 302;
    goto LABEL_20;
  }
LABEL_22:
  if ( v12 != v21 )
    Win32FreePool((__int64)v12);
  return PointerDataQPCTimeList;
}
