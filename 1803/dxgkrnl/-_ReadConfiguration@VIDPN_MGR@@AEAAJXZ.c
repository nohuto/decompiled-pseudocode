/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C02181E4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this)
{
  VIDPN_MGR *v1; // rbx
  int RegistryValues; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // al
  _DWORD *v26; // rdi
  int v27; // eax
  unsigned int v29; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v30[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h]
  const wchar_t *v33; // [rsp+58h] [rbp-B0h]
  _DWORD *v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  _DWORD *v36; // [rsp+70h] [rbp-98h]
  __int64 v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+88h] [rbp-80h]
  const wchar_t *v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  int v42; // [rsp+A0h] [rbp-68h]
  char *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  int v46; // [rsp+C0h] [rbp-48h]
  _BYTE v47[40]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v48[22]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v29 = 2;
    memset(v48, 0, 0xA8uLL);
    v48[0] = 0LL;
    LODWORD(v48[4]) = 0x4000000;
    v48[2] = L"BadMonitorModeDiag";
    LODWORD(v48[11]) = 0x4000000;
    v48[3] = &v29;
    LODWORD(v48[1]) = 288;
    v48[9] = L"AssertOnDdiViolation";
    v48[5] = 0LL;
    v48[10] = &g_DmmAssertOnDdiViolation;
    LODWORD(v48[6]) = 0;
    v48[7] = 0LL;
    LODWORD(v48[8]) = 288;
    v48[12] = 0LL;
    LODWORD(v48[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v48, 0LL, 0LL);
    v4 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v29;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v3);
      *(_QWORD *)(v5 + 24) = v4;
      WdLogEvent5_WdDmmEvent(v5);
      if ( (_DWORD)v4 != -1073741772 )
      {
        v7 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v7);
      }
      this = 2LL;
      v29 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v8 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v8 + 24) = v29;
      WdLogEvent5_WdError(v8);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v9 = *((_QWORD *)v1 + 1);
  v29 = 0;
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
    v9 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v9 + 16) + 192LL),
              L"AllowUnspecifiedVSync",
              (char *)&v29,
              4u,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v29 != 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v11);
    WdLogEvent5_WdDmmEvent(v12);
  }
  v13 = *((_QWORD *)v1 + 1);
  v29 = 0;
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
    v13 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v13 + 16) + 192LL),
              L"AllowUnspecifiedHSync",
              (char *)&v29,
              4u,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v29 != 0;
  }
  else
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v15);
    WdLogEvent5_WdDmmEvent(v16);
  }
  v17 = *((_QWORD *)v1 + 1);
  v29 = 0;
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v18);
    v17 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v17 + 16) + 192LL),
              L"AllowUnspecifiedPixelRate",
              (char *)&v29,
              4u,
              2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v29 != 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdDmmEvent(v19);
    WdLogEvent5_WdDmmEvent(v20);
  }
  v21 = *((_QWORD *)v1 + 1);
  v29 = 0;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v22);
    v21 = *((_QWORD *)v1 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v21 + 16) + 192LL),
              L"ForceDualViewBehavior",
              (char *)&v29,
              4u,
              2) >= 0 )
  {
    v25 = v29 != 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v23);
    WdLogEvent5_WdDmmEvent(v24);
    v25 = 0;
  }
  *((_BYTE *)v1 + 464) = v25;
  v26 = (_DWORD *)((char *)v1 + 488);
  v30[0] = 1000;
  LODWORD(v35) = 67108868;
  v33 = L"RapidHPDTime";
  v42 = 67108868;
  v34 = v30;
  *((_DWORD *)v1 + 122) = 5;
  v36 = v30;
  v40 = L"RapidHPDThresholdCount";
  v31 = 0LL;
  LODWORD(v32) = 288;
  LODWORD(v37) = 4;
  v38 = 0LL;
  v39 = 288;
  v41 = (char *)v1 + 488;
  v43 = (char *)v1 + 488;
  v44 = 4;
  v45 = 0LL;
  v46 = 0;
  memset(v47, 0, sizeof(v47));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v31, 0LL, 0LL);
  v27 = v30[0];
  if ( v30[0] > 0xEA60u )
    v27 = 60000;
  v30[0] = v27;
  *((_DWORD *)v1 + 121) = 10000 * v27 / KeQueryTimeIncrement();
  if ( *v26 == 1 )
  {
    *((_DWORD *)v1 + 122) = 0;
  }
  else if ( *v26 > 0x20u )
  {
    *v26 = 32;
  }
  return 0LL;
}
