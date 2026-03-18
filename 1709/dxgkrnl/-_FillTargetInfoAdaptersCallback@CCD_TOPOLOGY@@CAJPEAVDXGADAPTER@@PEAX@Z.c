/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF830
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rax
  struct _FAST_MUTEX *v15; // rcx
  int MonitorInformationForTargets; // eax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-30h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6
      || *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 67)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 68) )
    {
      break;
    }
  }
  v7 = *((_QWORD *)a2 + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v13 = v10;
  if ( v10 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v17[3] = v13;
    goto LABEL_28;
  }
  if ( !a1 )
    goto LABEL_21;
  v14 = *((_QWORD *)a1 + 288);
  if ( !v14 )
  {
    v18 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    MonitorInformationForTargets = -1073741275;
    goto LABEL_17;
  }
  v15 = *(struct _FAST_MUTEX **)(v14 + 96);
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
LABEL_21:
    MonitorInformationForTargets = -1073741811;
    goto LABEL_17;
  }
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   v15,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                   a2,
                                   v12);
LABEL_17:
  LODWORD(v13) = 0;
  if ( MonitorInformationForTargets != -1073741275 )
    LODWORD(v13) = MonitorInformationForTargets;
  if ( (int)v13 >= 0 )
    goto LABEL_20;
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v17[3] = (int)v13;
LABEL_28:
  v17[4] = a1;
  v17[5] = *((int *)a1 + 68);
  v17[6] = *((unsigned int *)a1 + 67);
  v17[7] = *((_QWORD *)a2 + 8);
  WdLogEvent5_WdError(v17);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  return (unsigned int)v13;
}
