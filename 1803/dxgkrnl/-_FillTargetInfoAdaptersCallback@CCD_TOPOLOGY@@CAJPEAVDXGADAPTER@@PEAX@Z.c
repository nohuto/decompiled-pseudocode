/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00BA928 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rax
  MONITOR_MGR *v14; // rcx
  int MonitorInformationForTargets; // eax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v21[40]; // [rsp+48h] [rbp-30h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 67)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 68) )
    {
      v5 = *((_QWORD *)a2 + 8);
      break;
    }
  }
  if ( v5 )
    v7 = *(_WORD *)(v5 + 20);
  else
    v7 = 0;
  if ( i >= v7 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
  v12 = v9;
  if ( v9 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v16[3] = v12;
    goto LABEL_29;
  }
  if ( !a1 )
    goto LABEL_22;
  v13 = *((_QWORD *)a1 + 307);
  if ( !v13 )
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    MonitorInformationForTargets = -1073741275;
    goto LABEL_18;
  }
  v14 = *(MONITOR_MGR **)(v13 + 96);
  if ( !v14 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
LABEL_22:
    MonitorInformationForTargets = -1073741811;
    goto LABEL_18;
  }
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   v14,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                   a2,
                                   v11);
LABEL_18:
  LODWORD(v12) = 0;
  if ( MonitorInformationForTargets != -1073741275 )
    LODWORD(v12) = MonitorInformationForTargets;
  if ( (int)v12 >= 0 )
    goto LABEL_21;
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v16[3] = (int)v12;
LABEL_29:
  v16[4] = a1;
  v16[5] = *((int *)a1 + 68);
  v16[6] = *((unsigned int *)a1 + 67);
  v16[7] = *((_QWORD *)a2 + 8);
  WdLogEvent5_WdError(v16);
LABEL_21:
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  return (unsigned int)v12;
}
