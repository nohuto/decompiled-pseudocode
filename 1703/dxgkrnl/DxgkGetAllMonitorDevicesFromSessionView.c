/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00AA3B8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00399D8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C00A9484 (MonitorIsMonitorConnected.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0195960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 LowPart; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdi
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  int IsMonitorConnected; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  bool v64; // zf
  __int64 v65; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v67; // r8d
  DXGADAPTERSOURCEHASH *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rax
  __int64 v75; // rcx
  DXGADAPTERSOURCEHASH *v76; // rcx
  char HashBitShift; // al
  unsigned int v78; // edi
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  int HashBitMask; // eax
  char v83[4]; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v84; // [rsp+2Ch] [rbp-5Dh] BYREF
  int v85; // [rsp+30h] [rbp-59h] BYREF
  int HashForAdapterAndSource; // [rsp+34h] [rbp-55h]
  unsigned int v87; // [rsp+38h] [rbp-51h] BYREF
  __int64 v88; // [rsp+40h] [rbp-49h]
  DXGADAPTERSOURCEHASH *v89; // [rsp+48h] [rbp-41h]
  SESSION_VIEW *v90; // [rsp+50h] [rbp-39h]
  char v91[8]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v92[32]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v93[88]; // [rsp+80h] [rbp-9h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11, v14, v15);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
    v90 = SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19);
      v20[3] = v6;
      v20[4] = a1->HighPart;
      LowPart = a1->LowPart;
      v20[5] = LowPart;
      v20[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart, v22, v23, v24);
      WdLogEvent5_WdEvent(v20);
      result = 0LL;
      *a3 = 1;
      *a4 = 0;
      return result;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
      v42 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
      *(_QWORD *)(v42 + 24) = 944LL;
      WdLogEvent5_WdAssertion(v42);
    }
    v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
    if ( *((_DWORD *)PrimaryDisplaySource + 4) != (_DWORD)v6
      || a1->LowPart != (_DWORD)v31
      || (v32 = 1, a1->HighPart != HIDWORD(v31)) )
    {
      v32 = 0;
    }
    *a3 = v32;
    while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
    {
      v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( a1->LowPart != *(_DWORD *)(v33 + 268) || a1->HighPart != *(_DWORD *)(v33 + 272) )
        break;
LABEL_15:
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v90, PrimaryDisplaySource);
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
      (COREADAPTERACCESS *)v91,
      *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
      0LL);
    v43 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91);
    v48 = v43;
    if ( v43 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v45);
      v49[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
      v49[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
      v49[5] = v48;
LABEL_30:
      WdLogEvent5_WdEvent(v49);
LABEL_46:
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      COREACCESS::~COREACCESS((COREACCESS *)v92);
      goto LABEL_15;
    }
    if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 134LL) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
      *(_QWORD *)(v50 + 24) = 990LL;
      WdLogEvent5_WdAssertion(v50);
    }
    if ( a5 && v7 < *a4 )
    {
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                  *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                  *((unsigned int *)PrimaryDisplaySource + 4),
                  1uLL,
                  &v84) < 0
        || v84 != -1 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
        *(_QWORD *)(v55 + 24) = 1008LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v56 = DmmEnumClientVidPnPathTargetsFromSource(
              *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((unsigned int *)PrimaryDisplaySource + 4),
              0LL,
              &v84);
      v39 = v56;
      if ( v56 < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        goto LABEL_24;
      }
      if ( v84 == -1 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v58, 0xFFFFFFFFLL);
        v39 = -1073741811LL;
LABEL_24:
        v41 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_25:
        v40[3] = v41;
        v40[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
        v40[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        v40[6] = v39;
        WdLogEvent5_WdError(v40);
        COREACCESS::~COREACCESS((COREACCESS *)v93);
        COREACCESS::~COREACCESS((COREACCESS *)v92);
        return (unsigned int)v39;
      }
      v60 = *((_QWORD *)PrimaryDisplaySource + 1);
      LOBYTE(v59) = 1;
      v83[0] = 0;
      IsMonitorConnected = MonitorIsMonitorConnected(*(DXGADAPTER **)(v60 + 16), v84, v59, v83);
      v39 = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
        v41 = v84;
        goto LABEL_25;
      }
      if ( !v83[0] )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v63);
        v49[3] = v84;
        v49[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
        v49[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        v49[6] = v39;
        goto LABEL_30;
      }
      DmmGetVideoOutputTechnology(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v84, &v85, 0LL);
      v64 = !IsInternalVideoOutput(v85);
      v65 = 5LL * v7;
      v88 = v65;
      *(_BYTE *)(a5 + 4 * v65 + 16) = !v64;
      *(_DWORD *)(a5 + 4 * v65) = 536870913;
      Global = DXGGLOBAL::GetGlobal();
      v67 = *((_DWORD *)PrimaryDisplaySource + 4);
      v68 = (struct DXGGLOBAL *)((char *)Global + 840);
      v69 = *((_QWORD *)PrimaryDisplaySource + 1);
      v89 = v68;
      HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v68,
                                  (const struct _LUID *)(*(_QWORD *)(v69 + 16) + 268LL),
                                  v67,
                                  &v87);
      if ( HashForAdapterAndSource >= 0 )
      {
        v76 = v89;
        *(_QWORD *)(a5 + 4 * v88 + 8) = v31;
        HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v76, v70, v72, v73);
        v78 = v87 << HashBitShift;
        HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v89, v79, v80, v81);
        *(_DWORD *)(a5 + 4 * v88 + 4) = v78 + (v84 & ~HashBitMask);
      }
      else
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
        v74[3] = *((unsigned int *)PrimaryDisplaySource + 4);
        v74[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
        v74[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        v74[6] = HashForAdapterAndSource;
        WdLogEvent5_WdError(v74);
        v75 = v88;
        *(_QWORD *)(a5 + 4 * v88 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        *(_DWORD *)(a5 + 4 * v75 + 4) = v84;
      }
    }
    ++v7;
    goto LABEL_46;
  }
  v34 = WdLogNewEntry5_WdError(v12, v11);
  LODWORD(v39) = -1073741811;
  *(_QWORD *)(v34 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v36, v35, v37, v38);
  *(_QWORD *)(v34 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v34);
  return (unsigned int)v39;
}
