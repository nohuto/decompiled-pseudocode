/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01135F8
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rbx
  int RegistryValues; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _DWORD *v30; // rdi
  int v31; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v40[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h]
  const wchar_t *v43; // [rsp+58h] [rbp-B0h]
  _DWORD *v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  _DWORD *v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h]
  int v49; // [rsp+88h] [rbp-80h]
  const wchar_t *v50; // [rsp+90h] [rbp-78h]
  char *v51; // [rsp+98h] [rbp-70h]
  int v52; // [rsp+A0h] [rbp-68h]
  char *v53; // [rsp+A8h] [rbp-60h]
  int v54; // [rsp+B0h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  _BYTE v57[40]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v58[22]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v39 = 2;
    memset(v58, 0, 0xA8uLL);
    v58[0] = 0LL;
    LODWORD(v58[4]) = 0x4000000;
    v58[2] = L"BadMonitorModeDiag";
    LODWORD(v58[11]) = 0x4000000;
    v58[3] = &v39;
    LODWORD(v58[1]) = 288;
    v58[9] = L"AssertOnDdiViolation";
    v58[5] = 0LL;
    v58[10] = &g_DmmAssertOnDdiViolation;
    LODWORD(v58[6]) = 0;
    v58[7] = 0LL;
    LODWORD(v58[8]) = 288;
    v58[12] = 0LL;
    LODWORD(v58[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v58, 0LL, 0LL);
    v7 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v39;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent(v6, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdDmmEvent(v8);
      if ( (_DWORD)v7 != -1073741772 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
        WdLogEvent5_WdAssertion(v33);
      }
      this = 2LL;
      v39 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v34 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v34 + 24) = v39;
      WdLogEvent5_WdError(v34);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v39 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v35 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedVSync",
              &v39,
              4LL,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v39 != 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
    WdLogEvent5_WdDmmEvent(v14);
  }
  v39 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedHSync",
              &v39,
              4LL,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v39 != 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
    WdLogEvent5_WdDmmEvent(v19);
  }
  v39 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedPixelRate",
              &v39,
              4LL,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v39 != 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
    WdLogEvent5_WdDmmEvent(v24);
  }
  v39 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 192LL),
              L"ForceDualViewBehavior",
              &v39,
              4LL,
              2) >= 0 )
  {
    *((_BYTE *)v4 + 456) = v39 != 0;
  }
  else
  {
    v29 = WdLogNewEntry5_WdDmmEvent(v26, v25, v27, v28);
    WdLogEvent5_WdDmmEvent(v29);
    *((_BYTE *)v4 + 456) = 0;
  }
  v40[0] = 1000;
  v30 = (_DWORD *)((char *)v4 + 480);
  LODWORD(v45) = 67108868;
  v52 = 67108868;
  v43 = L"RapidHPDTime";
  *((_DWORD *)v4 + 120) = 5;
  v44 = v40;
  v41 = 0LL;
  v46 = v40;
  v50 = L"RapidHPDThresholdCount";
  LODWORD(v42) = 288;
  LODWORD(v47) = 4;
  v48 = 0LL;
  v49 = 288;
  v51 = (char *)v4 + 480;
  v53 = (char *)v4 + 480;
  v54 = 4;
  v55 = 0LL;
  v56 = 0;
  memset(v57, 0, sizeof(v57));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v41, 0LL, 0LL);
  v31 = v40[0];
  if ( v40[0] > 0xEA60u )
    v31 = 60000;
  v40[0] = v31;
  *((_DWORD *)v4 + 119) = 10000 * v31 / KeQueryTimeIncrement();
  if ( *v30 == 1 )
  {
    *v30 = 0;
  }
  else if ( *v30 > 0x20u )
  {
    *v30 = 32;
  }
  return 0LL;
}
