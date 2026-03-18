/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C017C350
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     MonitorIsMonitorConnected @ 0x1C00A9484 (MonitorIsMonitorConnected.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00ADEB8 (MonitorIsHMDDevicePresent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4, bool *a5)
{
  bool *v5; // r14
  char v6; // r12
  __int64 v7; // r15
  char v8; // r13
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  __int64 v13; // r9
  DXGADAPTER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGADAPTER *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 IsHMDDevicePresent; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  int IsMonitorConnected; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int MonitorHandle; // eax
  __int64 v38; // r9
  struct HDXGMONITOR__ *v39; // rbx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct HDXGMONITOR__ *v43; // [rsp+38h] [rbp-31h] BYREF
  char v44[8]; // [rsp+48h] [rbp-21h] BYREF
  char v45[32]; // [rsp+50h] [rbp-19h] BYREF
  char v46[40]; // [rsp+70h] [rbp+7h] BYREF
  LONG HighPart; // [rsp+CCh] [rbp+63h]

  HighPart = a1.HighPart;
  v5 = a5;
  v6 = a4;
  v7 = (unsigned int)a2;
  v8 = a3;
  if ( !a5 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, a2);
    *(_QWORD *)(v10 + 24) = 7146LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2, a3, a4);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&a5, v13);
  v17 = v14;
  if ( !v14 )
  {
    v10 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v10 + 24) = HighPart;
    *(_QWORD *)(v10 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v14) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = 7167LL;
    WdLogEvent5_WdAssertion(v22);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v17, 0LL);
  DXGADAPTER::ReleaseReference(v17);
  if ( *((_QWORD *)v17 + 285) )
  {
    v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
    IsHMDDevicePresent = v27;
    if ( v27 >= 0 )
    {
      if ( *((_BYTE *)v17 + 2205) )
      {
        v32 = WdLogNewEntry5_WdEvent(v29);
        *(_QWORD *)(v32 + 24) = HighPart;
        *(_QWORD *)(v32 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v32);
        LODWORD(IsHMDDevicePresent) = -1073741130;
        goto LABEL_23;
      }
      LOBYTE(v30) = v8;
      IsMonitorConnected = MonitorIsMonitorConnected(v17, (unsigned int)v7, v30, v5);
      IsHMDDevicePresent = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*v5 || v6 )
        goto LABEL_23;
      v43 = 0LL;
      LOBYTE(v36) = v8;
      MonitorHandle = MonitorGetMonitorHandle(v17, (unsigned int)v7, v36, DxgkIsMonitorConnected, &v43);
      IsHMDDevicePresent = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v39 = v43;
        LOBYTE(a5) = 0;
        IsHMDDevicePresent = (int)MonitorIsHMDDevicePresent(v43, &a5, 0LL, v38);
        MonitorReleaseMonitorHandle(v17, v39, DxgkIsMonitorConnected, v40);
        if ( (int)IsHMDDevicePresent >= 0 )
        {
          *v5 = (_BYTE)a5 == 0;
          goto LABEL_23;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
        v31[3] = v39;
        v31[4] = IsHMDDevicePresent;
      }
      else
      {
LABEL_18:
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
        v31[3] = v7;
        v31[4] = HighPart;
        v31[5] = a1.LowPart;
        v31[6] = IsHMDDevicePresent;
      }
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v31[3] = HighPart;
      v31[4] = a1.LowPart;
      v31[5] = IsHMDDevicePresent;
    }
    WdLogEvent5_WdError(v31);
    goto LABEL_23;
  }
  v25 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v25 + 24) = HighPart;
  *(_QWORD *)(v25 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v25);
  LODWORD(IsHMDDevicePresent) = -1073741811;
LABEL_23:
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  COREACCESS::~COREACCESS((COREACCESS *)v45);
  return (unsigned int)IsHMDDevicePresent;
}
