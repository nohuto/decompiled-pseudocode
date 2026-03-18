/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0034B6C
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0035350 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0012DC0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0014138 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C001E0A0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0027F0C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C00349D4 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0034A00 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@QEAA@XZ @ 0x1C01F4438 (--1Lockable@@QEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C01FEF0C (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  DXGDIAGNOSTICS *v19; // rcx

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  if ( v1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
    }
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !*(_BYTE *)(v5 + 184) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
    }
  }
  if ( *((VIDPN_MGR **)this + 15) != (VIDPN_MGR *)((char *)this + 120) )
  {
    v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    WdLogEvent5_WdWarning(v9);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) = 0LL;
  v10 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v10 != v10 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v10 - 8LL);
    if ( *v10 != 8LL )
    {
      do
      {
        if ( *((_QWORD *)NextTarget + 13) )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v12 = WdLogNewEntry5_WdAssertion(v5);
            WdLogEvent5_WdAssertion(v12);
          }
          MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
        }
        DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 10), NextTarget);
      }
      while ( NextTarget );
    }
  }
  if ( !*((_QWORD *)this + 59) )
    goto LABEL_24;
  if ( !*((_QWORD *)this + 1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v13);
  }
  v15 = MonitorUnregisterMonitorEventCallback(*((_QWORD *)this + 1), *((_QWORD *)this + 59));
  if ( v15 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    if ( !*((_QWORD *)this + 1) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v18);
    }
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v17);
    *((_DWORD *)this + 14) = v15;
  }
  else
  {
LABEL_24:
    v19 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 63);
    if ( v19 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v19);
  }
  operator delete(*((void **)this + 57));
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
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 36);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 35, 0LL);
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
