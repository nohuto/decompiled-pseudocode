/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AB244
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800A3714 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800A47B8 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800A6B94 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800A71B0 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800A71F4 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x1800A7768 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800AB5C0 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x1800AA628 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800E64C8 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]

  if ( *((_DWORD *)this + 14) != 6 && (!a2 || *((_DWORD *)this + 14) != 5) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
    v13 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *((_DWORD *)this + 14) == 6 || *((_DWORD *)this + 14) == 5 && a2 && *((_QWORD *)this + 61) )
    {
LABEL_45:
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *((_DWORD *)this + 14) = 5;
    if ( a2 && *((_QWORD *)this + 61) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x13u,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          this,
          -2LL);
      }
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
      SubmitThreadpoolWork(*((PTP_WORK *)this + 61));
      goto LABEL_45;
    }
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        this,
        -2LL);
    }
    v6 = (void *)*((_QWORD *)this + 36);
    if ( v6 )
    {
      SetEvent(v6);
      v7 = (void *)*((_QWORD *)this + 34);
      if ( v7 )
      {
        WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        ATL::CHandle::Close((CMonitor *)((char *)this + 272));
      }
      ATL::CHandle::Close((CMonitor *)((char *)this + 288));
    }
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *((_QWORD *)this + 20));
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 13);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 20);
    }
    CoTaskMemFree(*((LPVOID *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
    ATL::CHandle::Close((CMonitor *)((char *)this + 112));
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 11);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 9);
    v9 = *((_QWORD *)this + 10);
    if ( v9 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    CoTaskMemFree(*((LPVOID *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    v10 = *((_QWORD *)this + 27);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *((_QWORD *)this + 28));
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 27);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 28);
    }
    CoTaskMemFree(*((LPVOID *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
    ATL::CHandle::Close((CMonitor *)((char *)this + 232));
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 24);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 22);
    v11 = *((_QWORD *)this + 23);
    if ( v11 )
    {
      *((_QWORD *)this + 23) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    CoTaskMemFree(*((LPVOID *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 14) = 6;
    if ( *((_QWORD *)this + 33) )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x15u,
            (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
            this);
        }
        SetEventWhenCallbackReturns(a3, *((HANDLE *)this + 33));
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x16u,
            (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
            this);
        }
        SetEvent(*((HANDLE *)this + 33));
      }
    }
  }
}
