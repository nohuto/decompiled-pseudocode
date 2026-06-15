/*
 * XREFs of ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800A3564
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A3B98 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A4390 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800A5C70 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x1800A302C (--_GCreateMonitorContext@@QEAAPEAXI@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x1800A8974 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp+20h]

  v4 = 0;
  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Cu, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids);
  }
  if ( CMonitor::IsCaptureMonitorEnabled(a2, (unsigned __int16 **)&pv, 0LL) )
  {
    v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    v11 = v5;
    if ( v5 )
    {
      *v5 = a2;
      if ( a2 )
        ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
      v6[1] = this;
      if ( this )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
      v6[2] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::CreateMonitorIfAppropriateWorker, v6, 0LL);
      v6[2] = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        else
          v4 = LastError;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Du,
            (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            v4);
        }
        CreateMonitorContext::`scalar deleting destructor'((CreateMonitorContext *)v6);
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  return v4;
}
