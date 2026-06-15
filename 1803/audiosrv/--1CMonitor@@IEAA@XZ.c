/*
 * XREFs of ??1CMonitor@@IEAA@XZ @ 0x1800E20B4
 * Callers:
 *     ?Release@CMonitor@@UEAAKXZ @ 0x1800E50C0 (-Release@CMonitor@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800E14D0 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180113428 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  CAudioSessionManager *v2; // rcx
  struct _TP_WORK *v3; // rax
  CMonitor::CMonitorNotification *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CMonitor::CMonitorNotification *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)this = &CMonitor::`vftable';
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids,
      this);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 61) )
  {
    v3 = (struct _TP_WORK *)*((_QWORD *)this + 61);
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v2 + 7) & 0x800000) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)v2 + 2), 0x18u, (__int64)&WPP_298f35db72853edc559b812a776cab31_Traceguids);
      v3 = (struct _TP_WORK *)*((_QWORD *)this + 61);
    }
    CloseThreadpoolWork(v3);
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
  v4 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 28);
  if ( v4 )
    CMonitor::CMonitorNotification::Release(v4);
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CoTaskMemFree(*((LPVOID *)this + 25));
  *((_QWORD *)this + 25) = 0LL;
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CoTaskMemFree(*((LPVOID *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  v10 = (CMonitor::CMonitorNotification *)*((_QWORD *)this + 20);
  if ( v10 )
    CMonitor::CMonitorNotification::Release(v10);
  if ( *((_QWORD *)this + 14) )
    ATL::CHandle::Close((CMonitor *)((char *)this + 112));
  v11 = *((_QWORD *)this + 13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  v12 = *((_QWORD *)this + 11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 9);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
