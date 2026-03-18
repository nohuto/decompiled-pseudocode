/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00D86D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000BB44 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00AFB00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00D7D4C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00D8A78 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00D8B18 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 *     MonitorGetBrightnessNitsCaps @ 0x1C0100B94 (MonitorGetBrightnessNitsCaps.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(struct _LUID a1, unsigned int a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  DWORD LowPart; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // r14
  __int64 v11; // rdi
  DXGGLOBAL *Global; // rax
  DWORD v13; // ebx
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rcx
  DXGADAPTER *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _FAST_MUTEX *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 v25; // r12
  __int64 v26; // rcx
  int MonitorInstance; // eax
  __int64 v28; // rcx
  int v29; // r13d
  __int64 v30; // rcx
  int CCDMonitorID; // eax
  __int64 v33; // rcx
  int AdvancedColorParams; // eax
  char v35; // al
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 HighPart; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  char v51; // [rsp+68h] [rbp-61h] BYREF
  char v52; // [rsp+69h] [rbp-60h] BYREF
  char v53; // [rsp+6Ah] [rbp-5Fh] BYREF
  _BYTE v54[5]; // [rsp+6Bh] [rbp-5Eh] BYREF
  struct _LUID v55; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-51h] BYREF
  int v57; // [rsp+7Ch] [rbp-4Dh] BYREF
  struct DXGMONITOR *v58; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v59[2]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v60[8]; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v61[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-21h]
  struct DXGADAPTER *v63; // [rsp+B0h] [rbp-19h]
  char v64; // [rsp+B8h] [rbp-11h]
  _BYTE v65[8]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-1h]
  struct DXGADAPTER *v67; // [rsp+D0h] [rbp+7h]
  char v68; // [rsp+D8h] [rbp+Fh]
  struct _LUID v69; // [rsp+128h] [rbp+5Fh] BYREF
  __int64 v70; // [rsp+140h] [rbp+77h]

  v70 = a4;
  v69 = a1;
  v6 = a2;
  LowPart = a1.LowPart;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v69, a2, &v55, &v56);
  MonitorHandle = 0LL;
  v11 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v13 = v55.LowPart;
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v55, v59);
    v16 = v14;
    if ( v14 )
    {
      if ( *((_QWORD *)v14 + 288) )
      {
        v63 = v14;
        v64 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 3);
        v67 = v14;
        v62 = -1LL;
        v68 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 3);
        v66 = -1LL;
        DXGADAPTER::ReleaseReferenceNoTracking(v14);
        v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60);
        v21 = (struct _FAST_MUTEX *)v17;
        if ( v17 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
          v40[3] = v55.HighPart;
          v40[4] = v55.LowPart;
          v40[5] = v21;
          WdLogEvent5_WdWarning(v40);
LABEL_23:
          COREACCESS::~COREACCESS((COREACCESS *)v65);
          COREACCESS::~COREACCESS((COREACCESS *)v61);
          return (unsigned int)v21;
        }
        v22 = WdLogNewEntry5_WdTrace(v19, v18);
        v24 = v56;
        v25 = v56;
        *(_QWORD *)(v22 + 24) = v56;
        *(_QWORD *)(v22 + 32) = v16;
        if ( v24 != -1 )
        {
          DXGADAPTER::IsCoreResourceSharedOwner(v16);
          if ( !*((_QWORD *)v16 + 288) )
          {
            v41 = WdLogNewEntry5_WdAssertion(v26);
            WdLogEvent5_WdAssertion(v41);
          }
          v21 = *(struct _FAST_MUTEX **)(*((_QWORD *)v16 + 288) + 96LL);
          if ( v21 )
          {
            v58 = 0LL;
            MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, v24, 0, (ULONG **)&v58);
            v29 = MonitorInstance;
            if ( MonitorInstance != -1073741275 )
            {
              if ( MonitorInstance >= 0 )
              {
                v21 = (struct _FAST_MUTEX *)v58;
                if ( !v58 )
                {
                  v45 = WdLogNewEntry5_WdAssertion(v28);
                  WdLogEvent5_WdAssertion(v45);
                }
                DXGMONITOR::_AddReference((struct _IO_REMOVE_LOCK *)v21, DxgkGetMonitorInternalInfo);
                MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)v21);
                LODWORD(v21) = 0;
                goto LABEL_14;
              }
              v44 = WdLogNewEntry5_WdError(v28);
              *(_QWORD *)(v44 + 24) = v25;
              *(_QWORD *)(v44 + 32) = v21;
              WdLogEvent5_WdError(v44);
              LODWORD(v21) = v29;
              goto LABEL_40;
            }
            v43 = WdLogNewEntry5_WdDmmEvent(v28);
            *(_QWORD *)(v43 + 24) = v25;
            *(_QWORD *)(v43 + 32) = v21;
            WdLogEvent5_WdDmmEvent(v43);
            LODWORD(v21) = -1073741275;
          }
          else
          {
            v42 = WdLogNewEntry5_WdError(v26);
            *(_QWORD *)(v42 + 24) = v16;
            WdLogEvent5_WdError(v42);
            LODWORD(v21) = -1073741811;
          }
LABEL_41:
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          HighPart = v69.HighPart;
          v46[7] = 0LL;
          v46[3] = HighPart;
          v46[4] = v69.LowPart;
          v46[6] = (int)v21;
          v46[5] = v6;
          WdLogEvent5_WdError(v46);
          goto LABEL_23;
        }
        MonitorHandle = (struct HDXGMONITOR__ *)v59[1];
        LODWORD(v21) = -1073741811;
LABEL_40:
        if ( (int)v21 >= 0 )
        {
LABEL_14:
          if ( !MonitorHandle )
          {
            v48 = WdLogNewEntry5_WdAssertion(v23);
            *(_QWORD *)(v48 + 24) = 6441LL;
            WdLogEvent5_WdAssertion(v48);
          }
          if ( a3 )
          {
            CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 260LL, a3 + 5);
            v21 = (struct _FAST_MUTEX *)CCDMonitorID;
            if ( CCDMonitorID < 0
              || (AdvancedColorParams = MonitorGetAdvancedColorParams(
                                          (_DWORD)MonitorHandle,
                                          (int)a3 + 540,
                                          (int)a3 + 548,
                                          (int)a3 + 556,
                                          (__int64)(a3 + 141),
                                          (__int64)(a3 + 143),
                                          (__int64)(a3 + 144),
                                          (__int64)(a3 + 145),
                                          (__int64)&v51,
                                          (__int64)&v52,
                                          (__int64)&v53,
                                          (__int64)v54),
                  v21 = (struct _FAST_MUTEX *)AdvancedColorParams,
                  AdvancedColorParams < 0) )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              v49[3] = v69.HighPart;
              v49[4] = v69.LowPart;
              v49[5] = v6;
              v49[6] = v21;
              WdLogEvent5_WdError(v49);
            }
            else
            {
              v35 = v53;
              a3[147] = (v52 != 0 ? 2 : 0) | (v51 != 0) | a3[147] & 0xFFFFFFFC;
              a3[146] = (v54[0] != 0 ? 4 : 0) | (v35 != 0 ? 2 : 0) | a3[146] & 0xFFFFFFF9;
            }
            MonitorGetBrightnessNitsCaps(
              (_DWORD)MonitorHandle,
              (unsigned int)&v57,
              (_DWORD)a3 + 592,
              (_DWORD)a3 + 784,
              (__int64)(a3 + 197));
            a3[198] ^= ((unsigned __int8)v57 ^ (unsigned __int8)a3[198]) & 1;
          }
          if ( (int)v21 >= 0 && (v70 || a5) )
            MonitorGetMonitorOrientationsFromMonitor(MonitorHandle, v70, a5);
          if ( (int)MonitorReleaseMonitorHandle(v16) < 0 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v30);
            *(_QWORD *)(v50 + 24) = 6506LL;
            WdLogEvent5_WdAssertion(v50);
          }
          LODWORD(v21) = 0;
          goto LABEL_23;
        }
        goto LABEL_41;
      }
      DXGADAPTER::ReleaseReferenceNoTracking(v14);
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v37[6] = 1LL;
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v37[6] = 0LL;
    }
    v37[3] = v55.HighPart;
    v39 = v13;
    LODWORD(v21) = -1073741811;
    v37[5] = -1073741811LL;
    v37[4] = v39;
    WdLogEvent5_WdError(v37);
    return (unsigned int)v21;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v36[3] = v69.HighPart;
  v36[4] = LowPart;
  v36[5] = v6;
  v36[6] = v11;
  WdLogEvent5_WdError(v36);
  return (unsigned int)v11;
}
