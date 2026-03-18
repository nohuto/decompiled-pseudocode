/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C017FD10
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     MonitorIsMonitorConnected @ 0x1C00E5FD0 (MonitorIsMonitorConnected.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00F5E8C (MonitorIsHMDDevicePresent.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, unsigned int a2, char a3, char a4, bool *a5)
{
  bool *v5; // r14
  __int64 v7; // r15
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 IsHMDDevicePresent; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  int IsMonitorConnected; // eax
  __int64 v29; // rcx
  int MonitorHandle; // eax
  struct _IO_REMOVE_LOCK *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  char v34[8]; // [rsp+48h] [rbp-21h] BYREF
  char v35[32]; // [rsp+50h] [rbp-19h] BYREF
  char v36[40]; // [rsp+70h] [rbp+7h] BYREF
  LONG HighPart; // [rsp+CCh] [rbp+63h]

  HighPart = a1.HighPart;
  v5 = a5;
  v7 = a2;
  if ( !a5 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)(a1);
    *(_QWORD *)(v10 + 24) = 7454LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&a5);
  v15 = v13;
  if ( !v13 )
  {
    v10 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v10 + 24) = HighPart;
    *(_QWORD *)(v10 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v13) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 7475LL;
    WdLogEvent5_WdAssertion(v17);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v15, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v15);
  if ( *((_QWORD *)v15 + 288) )
  {
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
    IsHMDDevicePresent = v21;
    if ( v21 >= 0 )
    {
      if ( *((_BYTE *)v15 + 2229) )
      {
        v27 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
        *(_QWORD *)(v27 + 24) = HighPart;
        *(_QWORD *)(v27 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v27);
        LODWORD(IsHMDDevicePresent) = -1073741130;
        goto LABEL_23;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(v15, (unsigned int)v7, a3, v5);
      IsHMDDevicePresent = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*v5 || a4 )
        goto LABEL_23;
      v33 = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(v15, (unsigned int)v7, a3, DxgkIsMonitorConnected, &v33);
      IsHMDDevicePresent = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v31 = (struct _IO_REMOVE_LOCK *)v33;
        LOBYTE(a5) = 0;
        IsHMDDevicePresent = (int)MonitorIsHMDDevicePresent((struct HDXGMONITOR__ *)v33, &a5, 0LL);
        MonitorReleaseMonitorHandle(v15, v31, DxgkIsMonitorConnected);
        if ( (int)IsHMDDevicePresent >= 0 )
        {
          *v5 = (_BYTE)a5 == 0;
          goto LABEL_23;
        }
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v26[3] = v31;
        v26[4] = IsHMDDevicePresent;
      }
      else
      {
LABEL_18:
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v26[3] = v7;
        v26[4] = HighPart;
        v26[5] = a1.LowPart;
        v26[6] = IsHMDDevicePresent;
      }
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v26[3] = HighPart;
      v26[4] = a1.LowPart;
      v26[5] = IsHMDDevicePresent;
    }
    WdLogEvent5_WdError(v26);
    goto LABEL_23;
  }
  v19 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v19 + 24) = HighPart;
  *(_QWORD *)(v19 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v19);
  LODWORD(IsHMDDevicePresent) = -1073741811;
LABEL_23:
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  return (unsigned int)IsHMDDevicePresent;
}
