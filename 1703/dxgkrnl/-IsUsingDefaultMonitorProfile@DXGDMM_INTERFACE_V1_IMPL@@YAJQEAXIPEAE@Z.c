/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01D88E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C01E4080 (MonitorIsUsingDefaultMonitorProfile.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  VIDPN_MGR *v18; // r14
  __int64 v19; // r9
  int ConnectedMonitorHandle; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  struct HDXGMONITOR__ *v30; // rdi
  __int64 v31; // rax
  int IsUsingDefaultMonitorProfile; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct HDXGMONITOR__ *v38; // [rsp+50h] [rbp+18h] BYREF
  __int64 v39; // [rsp+58h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6056);
  if ( a3 )
  {
    if ( !this )
    {
      v11 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v11 + 24) = 0LL;
LABEL_12:
      WdLogEvent5_WdError(v11);
      LODWORD(v10) = -1071775742;
      goto LABEL_24;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = *((_QWORD *)this + 285);
    if ( !v17 )
    {
      v11 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v11 + 24) = this;
      goto LABEL_12;
    }
    v18 = *(VIDPN_MGR **)(v17 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v39, (__int64)v18, v14, v15);
    v38 = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v18, (unsigned int)v5, &v38, v19);
    v10 = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle == -1073741275 )
    {
      v25 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v25 + 24) = v5;
      *(_QWORD *)(v25 + 32) = this;
      WdLogEvent5_WdError(v25);
      LODWORD(v10) = -1071774920;
    }
    else
    {
      if ( ConnectedMonitorHandle >= 0 )
      {
        v30 = v38;
        if ( !v38 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
          WdLogEvent5_WdAssertion(v31);
        }
        IsUsingDefaultMonitorProfile = MonitorIsUsingDefaultMonitorProfile(v30, a3);
        v10 = IsUsingDefaultMonitorProfile;
        if ( IsUsingDefaultMonitorProfile >= 0 )
        {
          VIDPN_MGR::ReleaseMonitorHandle(v18, v30, v35, v36);
          LODWORD(v10) = 0;
          goto LABEL_23;
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
        v29[3] = v30;
        v29[4] = v10;
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
        v29[3] = v5;
        v29[4] = this;
        v29[5] = v10;
      }
      WdLogEvent5_WdError(v29);
    }
LABEL_23:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40), v26, v27, v28);
    goto LABEL_24;
  }
  v7 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v7 + 24) = 0LL;
  WdLogEvent5_WdError(v7);
  LODWORD(v10) = -1073741811;
LABEL_24:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6056);
  return (unsigned int)v10;
}
