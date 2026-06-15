/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x1800B532C
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x1800B7530 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x18007BAA8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800B4740 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800D8B7C (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  CVolumeStrip *v2; // rcx
  CMonitor::CMonitorNotification *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CMonitor::CMonitorNotification *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 61) )
  {
    if ( v2 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_qq(*((_QWORD *)v2 + 2), 0x18u, (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids);
    CloseThreadpoolWork(*((PTP_WORK *)this + 61));
    *((_QWORD *)this + 61) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 392));
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 344);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 296);
  if ( *((_QWORD *)this + 36) )
    ATL::CHandle::Close((CMonitor *)((char *)this + 288));
  if ( *((_QWORD *)this + 34) )
    ATL::CHandle::Close((CMonitor *)((char *)this + 272));
  if ( *((_QWORD *)this + 29) )
    ATL::CHandle::Close((CMonitor *)((char *)this + 232));
  v3 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 28);
  if ( v3 )
    CMonitor::CMonitorNotification::Release(v3);
  v4 = *((_QWORD *)this + 27);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  CoTaskMemFree(*((LPVOID *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  v9 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 20);
  if ( v9 )
    CMonitor::CMonitorNotification::Release(v9);
  if ( *((_QWORD *)this + 14) )
    ATL::CHandle::Close((CMonitor *)((char *)this + 112));
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
