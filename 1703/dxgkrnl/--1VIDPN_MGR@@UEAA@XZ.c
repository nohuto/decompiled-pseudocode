/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C00446B0 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0010FE8 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0021310 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0038408 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C0043D70 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0043D94 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     MonitorIsPhysicalMonitor @ 0x1C0122F7C (MonitorIsPhysicalMonitor.c)
 *     ??1Lockable@@QEAA@XZ @ 0x1C01DBB38 (--1Lockable@@QEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C01E4510 (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  struct HDXGMONITOR__ *v16; // rbp
  __int64 v17; // rax
  char IsPhysicalMonitor; // al
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  DXGDIAGNOSTICS *v31; // rcx

  v4 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  if ( v4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v11);
    }
    v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_BYTE *)(v8 + 185) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v12);
    }
  }
  if ( *((VIDPN_MGR **)this + 15) != (VIDPN_MGR *)((char *)this + 120) )
  {
    v13 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    WdLogEvent5_WdWarning(v13);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) = 0LL;
  v14 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v14 != v14 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v14 - 8LL);
    if ( *v14 != 8LL )
    {
      do
      {
        v16 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 13);
        if ( v16 )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
            WdLogEvent5_WdAssertion(v17);
          }
          MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v16, NextTarget);
        }
        IsPhysicalMonitor = MonitorIsPhysicalMonitor(0LL);
        *((_QWORD *)NextTarget + 13) = 0LL;
        *((_BYTE *)NextTarget + 407) = IsPhysicalMonitor;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                       *((DMMVIDEOPRESENTTARGETSET **)this + 10),
                       NextTarget,
                       v19,
                       v20);
      }
      while ( NextTarget );
    }
  }
  if ( !*((_QWORD *)this + 58) )
    goto LABEL_24;
  if ( !*((_QWORD *)this + 1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v21);
  }
  v24 = MonitorUnregisterMonitorEventCallback(*((_QWORD *)this + 1), *((_QWORD *)this + 58));
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v23, v22);
    if ( !*((_QWORD *)this + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26, v25, v28, v29);
      WdLogEvent5_WdAssertion(v30);
    }
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v27);
    *((_DWORD *)this + 14) = v24;
  }
  else
  {
LABEL_24:
    v31 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 62);
    if ( v31 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v31);
  }
  operator delete(*((void **)this + 56));
  operator delete(*((void **)this + 55));
  operator delete(*((void **)this + 54));
  operator delete(*((void **)this + 53));
  operator delete(*((void **)this + 52));
  operator delete(*((void **)this + 51));
  operator delete(*((void **)this + 50));
  operator delete(*((void **)this + 49));
  operator delete(*((void **)this + 48));
  operator delete(*((void **)this + 47));
  operator delete(*((void **)this + 46));
  operator delete(*((void **)this + 45));
  operator delete(*((void **)this + 44));
  operator delete(*((void **)this + 43));
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 35);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 27);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 19);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 12);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 10, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 9, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
