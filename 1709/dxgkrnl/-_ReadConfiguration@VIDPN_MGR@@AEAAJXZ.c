/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C010F864
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0110304 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this)
{
  VIDPN_MGR *v1; // rbx
  int RegistryValues; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v25[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h]
  const wchar_t *v28; // [rsp+58h] [rbp-B0h]
  _DWORD *v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  _DWORD *v31; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  int v34; // [rsp+88h] [rbp-80h]
  const wchar_t *v35; // [rsp+90h] [rbp-78h]
  char *v36; // [rsp+98h] [rbp-70h]
  int v37; // [rsp+A0h] [rbp-68h]
  char *v38; // [rsp+A8h] [rbp-60h]
  int v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+C0h] [rbp-48h]
  _BYTE v42[40]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v43[22]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v24 = 2;
    memset(v43, 0, 0xA8uLL);
    v43[0] = 0LL;
    LODWORD(v43[4]) = 0x4000000;
    v43[2] = L"BadMonitorModeDiag";
    LODWORD(v43[11]) = 0x4000000;
    v43[3] = &v24;
    LODWORD(v43[1]) = 288;
    v43[9] = L"AssertOnDdiViolation";
    v43[5] = 0LL;
    v43[10] = &g_DmmAssertOnDdiViolation;
    LODWORD(v43[6]) = 0;
    v43[7] = 0LL;
    LODWORD(v43[8]) = 288;
    v43[12] = 0LL;
    LODWORD(v43[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v43, 0LL, 0LL);
    v4 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v24;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v3);
      *(_QWORD *)(v5 + 24) = v4;
      WdLogEvent5_WdDmmEvent(v5);
      if ( (_DWORD)v4 != -1073741772 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v18);
      }
      this = 2LL;
      v24 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v19 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v19 + 24) = v24;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedVSync",
              &v24,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v24 != 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdDmmEvent(v7);
    WdLogEvent5_WdDmmEvent(v8);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedHSync",
              &v24,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v24 != 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v9);
    WdLogEvent5_WdDmmEvent(v10);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedPixelRate",
              &v24,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v24 != 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v11);
    WdLogEvent5_WdDmmEvent(v12);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"ForceDualViewBehavior",
              &v24,
              4LL) >= 0 )
  {
    *((_BYTE *)v1 + 464) = v24 != 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v13);
    WdLogEvent5_WdDmmEvent(v14);
    *((_BYTE *)v1 + 464) = 0;
  }
  v25[0] = 1000;
  v15 = (_DWORD *)((char *)v1 + 488);
  LODWORD(v30) = 67108868;
  v37 = 67108868;
  v28 = L"RapidHPDTime";
  *((_DWORD *)v1 + 122) = 5;
  v29 = v25;
  v26 = 0LL;
  v31 = v25;
  v35 = L"RapidHPDThresholdCount";
  LODWORD(v27) = 288;
  LODWORD(v32) = 4;
  v33 = 0LL;
  v34 = 288;
  v36 = (char *)v1 + 488;
  v38 = (char *)v1 + 488;
  v39 = 4;
  v40 = 0LL;
  v41 = 0;
  memset(v42, 0, sizeof(v42));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v26, 0LL, 0LL);
  v16 = v25[0];
  if ( v25[0] > 0xEA60u )
    v16 = 60000;
  v25[0] = v16;
  *((_DWORD *)v1 + 121) = 10000 * v16 / KeQueryTimeIncrement();
  if ( *v15 == 1 )
  {
    *v15 = 0;
  }
  else if ( *v15 > 0x20u )
  {
    *v15 = 32;
  }
  return 0LL;
}
