/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C021B7E0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00B8E74 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00B8F10 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C022E904 (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 IsUsingDefaultMonitorProfile; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  VIDPN_MGR *v14; // rbp
  int ConnectedMonitorHandle; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  struct HDXGMONITOR__ *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  struct HDXGMONITOR__ *v29; // [rsp+60h] [rbp+18h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h] BYREF

  v28 = 0LL;
  v5 = (unsigned int)a2;
  v27 = 6056;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6056);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6056);
  if ( a3 )
  {
    if ( !this )
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = 0LL;
LABEL_12:
      WdLogEvent5_WdError(v10);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071775742;
      goto LABEL_24;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *((_QWORD *)this + 307);
    if ( !v13 )
    {
      v10 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v10 + 24) = this;
      goto LABEL_12;
    }
    v14 = *(VIDPN_MGR **)(v13 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, (__int64)v14);
    v29 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v14, v5, &v29);
    IsUsingDefaultMonitorProfile = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v5;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdError(v17);
      LODWORD(IsUsingDefaultMonitorProfile) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v19 = v29;
        if ( !v29 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v20);
        }
        IsUsingDefaultMonitorProfile = (int)MonitorIsUsingDefaultMonitorProfile(v19, a3);
        VIDPN_MGR::ReleaseMonitorHandle(v14, v19, v21, v22);
        if ( (int)IsUsingDefaultMonitorProfile >= 0 )
        {
          LODWORD(IsUsingDefaultMonitorProfile) = 0;
          goto LABEL_23;
        }
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v18[3] = v19;
        v18[4] = IsUsingDefaultMonitorProfile;
      }
      else
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v18[3] = v5;
        v18[4] = this;
        v18[5] = IsUsingDefaultMonitorProfile;
      }
      WdLogEvent5_WdError(v18);
    }
LABEL_23:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40));
    goto LABEL_24;
  }
  v8 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v8 + 24) = 0LL;
  WdLogEvent5_WdError(v8);
  LODWORD(IsUsingDefaultMonitorProfile) = -1073741811;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)IsUsingDefaultMonitorProfile;
}
