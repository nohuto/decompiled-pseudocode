/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800E17B4
 * Callers:
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x1800DFFFC (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     McTemplateU0qzz @ 0x1800E1EB0 (McTemplateU0qzz.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800E292C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800E52AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800E5CB4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  void (*Release)(void); // rax
  unsigned int v4; // r9d
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // r8d
  bool *v10; // [rsp+20h] [rbp-20h]
  bool v11; // [rsp+70h] [rbp+30h] BYREF
  struct IMMDevice *v12; // [rsp+78h] [rbp+38h] BYREF
  struct IMMDevice *v13; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 56LL) == 3 || *((_BYTE *)this + 12) )
    return (unsigned int)v2;
  v13 = 0LL;
  v12 = 0LL;
  SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
      *((const wchar_t **)this + 9),
      *((_QWORD *)this + 10));
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 7) + 64LL)
                                                                      + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 7) + 64LL),
         *((_QWORD *)this + 9),
         &v13);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 7) + 64LL)
                                                                        + 40LL))(
           *(_QWORD *)(*((_QWORD *)this + 7) + 64LL),
           *((_QWORD *)this + 10),
           &v12);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x38u,
          (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
          this);
      }
      v5 = CMonitor::Initialize(*((CMonitor **)this + 8), v13, v12, v4, &v11);
      v2 = v5;
      if ( v5 < 0 )
      {
        v7 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v10) = v5;
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Au,
            (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            this,
            v10);
        }
        v8 = ++*((_DWORD *)this + 6);
        if ( v8 > *(_DWORD *)(*((_QWORD *)this + 7) + 328LL) )
        {
          *((_BYTE *)this + 12) = 1;
          if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
            McTemplateU0qzz(v7, v6, v8, *((_QWORD *)this + 9), *((_QWORD *)this + 10));
        }
        CMonitor::Terminate(*((CMonitor **)this + 8), 1, 0LL);
        v2 = 0;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x39u,
            (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            this);
        }
        *(_QWORD *)(*((_QWORD *)this + 7) + 304LL) = 0LL;
        *((_DWORD *)this + 6) = 0;
        CMonitor::Start(*((CMonitor **)this + 8));
      }
    }
    if ( !v12 )
      goto LABEL_32;
    Release = (void (*)(void))v12->lpVtbl->Release;
    goto LABEL_31;
  }
  if ( v12 )
  {
    Release = (void (*)(void))v12->lpVtbl->Release;
LABEL_31:
    Release();
  }
LABEL_32:
  if ( v13 )
    ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->Release)(v13);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids, v2);
  }
  return (unsigned int)v2;
}
