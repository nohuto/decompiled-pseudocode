/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008510 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008560 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C00E5FD0 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C01AA894 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        char *a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // r8
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v17; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v19; // rbx
  char v20; // al
  __int64 v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // rbx
  __int64 LowPart; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  int IsMonitorConnected; // eax
  __int64 v41; // rcx
  unsigned int v42; // [rsp+2Ch] [rbp-5Dh] BYREF
  SESSION_VIEW *v43; // [rsp+50h] [rbp-39h]
  _BYTE v44[8]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v45[32]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v46[88]; // [rsp+80h] [rbp-9h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId, v14);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
    v43 = (SESSION_VIEW *)SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v23[3] = v6;
      v23[4] = a1->HighPart;
      LowPart = a1->LowPart;
      v23[5] = LowPart;
      v23[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart);
      WdLogEvent5_WdEvent(v23);
      result = 0LL;
      *a3 = 1;
      *a4 = 0;
      return result;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v30 + 24) = 973LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
    if ( *((_DWORD *)PrimaryDisplaySource + 4) != (_DWORD)v6
      || a1->LowPart != (_DWORD)v19
      || (v20 = 1, a1->HighPart != HIDWORD(v19)) )
    {
      v20 = 0;
    }
    *a3 = v20;
    while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( a1->LowPart != *(_DWORD *)(v21 + 268) || a1->HighPart != *(_DWORD *)(v21 + 272) )
        break;
LABEL_14:
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v43, PrimaryDisplaySource);
      if ( !PrimaryDisplaySource )
      {
        if ( v7 > *a4 )
          v5 = -2147483643;
        *a4 = v7;
        return v5;
      }
      LODWORD(v6) = a2;
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v44,
      *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
      0LL);
    v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
    v33 = v31;
    if ( v31 >= 0 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 133LL) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v35 + 24) = 1019LL;
        WdLogEvent5_WdAssertion(v35);
      }
      if ( !a5 || v7 >= *a4 )
      {
        ++v7;
        goto LABEL_42;
      }
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                  *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                  *((_DWORD *)PrimaryDisplaySource + 4),
                  1LL,
                  &v42) < 0
        || v42 != -1 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v37 + 24) = 1037LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v38 = DmmEnumClientVidPnPathTargetsFromSource(
              *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((_DWORD *)PrimaryDisplaySource + 4),
              0LL,
              &v42);
      v27 = v38;
      if ( v38 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        goto LABEL_23;
      }
      if ( v42 == -1 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v27 = -1073741811LL;
LABEL_23:
        v29 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_24:
        v28[3] = v29;
        v28[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
        v28[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        v28[6] = v27;
        WdLogEvent5_WdError(v28);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        return (unsigned int)v27;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(
                             *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                             v42,
                             1u);
      v27 = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v41);
        v29 = v42;
        goto LABEL_24;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v34[3] = v42;
      v34[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
      v34[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
      v34[6] = v27;
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v34[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
      v34[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
      v34[5] = v33;
    }
    WdLogEvent5_WdEvent(v34);
LABEL_42:
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    COREACCESS::~COREACCESS((COREACCESS *)v45);
    goto LABEL_14;
  }
  v25 = WdLogNewEntry5_WdError(v11);
  LODWORD(v27) = -1073741811;
  *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26);
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v25);
  return (unsigned int)v27;
}
