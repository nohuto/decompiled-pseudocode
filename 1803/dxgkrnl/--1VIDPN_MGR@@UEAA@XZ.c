/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004385C
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C00441F0 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0024E70 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C003279C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C00436C4 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0044F68 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C00451E4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0045E60 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@UEAA@XZ @ 0x1C0220DA0 (--1Lockable@@UEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C022F6BC (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx

  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
    v2 = *((_QWORD *)this + 1);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v2 + 16)) )
  {
    v7 = *((_QWORD *)this + 1);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
      v7 = *((_QWORD *)this + 1);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 184LL) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( *((VIDPN_MGR **)this + 15) != (VIDPN_MGR *)((char *)this + 120) )
  {
    v10 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    WdLogEvent5_WdWarning(v10);
  }
  NextTarget = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 9) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) = 0LL;
  v12 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v12 != v12 )
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v12 - 8LL);
  for ( ;
        NextTarget;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 10), NextTarget) )
  {
    if ( *((_QWORD *)NextTarget + 13) )
    {
      v13 = *((_QWORD *)this + 1);
      if ( !v13 )
      {
        v14 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v14);
        v13 = *((_QWORD *)this + 1);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v13 + 16));
    }
    DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
  }
  v15 = *((_QWORD *)this + 59);
  if ( !v15 )
    goto LABEL_25;
  v16 = *((_QWORD *)this + 1);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v17);
    v16 = *((_QWORD *)this + 1);
    v15 = *((_QWORD *)this + 59);
  }
  v19 = MonitorUnregisterMonitorEventCallback(v16, v15);
  if ( v19 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    v21 = *((_QWORD *)this + 1);
    v22 = v20;
    if ( !v21 )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v23);
      v21 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(v21 + 16);
    WdLogEvent5_WdError(v22);
    *((_DWORD *)this + 14) = v19;
  }
  else
  {
LABEL_25:
    v24 = (_QWORD *)*((_QWORD *)this + 63);
    if ( v24 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v24);
  }
  v25 = (void *)*((_QWORD *)this + 57);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  v26 = (void *)*((_QWORD *)this + 56);
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  v27 = (void *)*((_QWORD *)this + 55);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  v28 = (void *)*((_QWORD *)this + 54);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  v29 = (void *)*((_QWORD *)this + 53);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  v30 = (void *)*((_QWORD *)this + 52);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  v31 = (void *)*((_QWORD *)this + 51);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  v32 = (void *)*((_QWORD *)this + 50);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  v33 = (void *)*((_QWORD *)this + 49);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  v34 = (void *)*((_QWORD *)this + 48);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  v35 = (void *)*((_QWORD *)this + 47);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  v36 = (void *)*((_QWORD *)this + 46);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  v37 = (void *)*((_QWORD *)this + 45);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  v38 = (void *)*((_QWORD *)this + 44);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>((char *)this + 288);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 35, 0LL);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 27);
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>((char *)this + 152);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 12);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((char *)this + 80, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((char *)this + 72, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
