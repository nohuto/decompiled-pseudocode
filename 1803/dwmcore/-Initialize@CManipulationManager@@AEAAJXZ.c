/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9CD0 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x180025AFC (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180025F1C (-CreateManipulationThread@CManipulationManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x1801CE904 (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(const struct DWM_MMTASK **this)
{
  int ManipulationThread; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  HANDLE *v5; // rdi
  HANDLE EventW; // rax
  struct IMessageSession *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  struct IMessageSession *v12; // rax
  signed int v14; // eax
  unsigned int v15; // eax
  signed int LastError; // eax
  unsigned __int16 v17[66]; // [rsp+30h] [rbp-B8h] BYREF
  int v18; // [rsp+B4h] [rbp-34h]

  ManipulationThread = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    memset_0(v17, 0, 0x90uLL);
    StringCchCopyW(v17, 0x40uLL, L"Capture");
    v18 = 1;
    v3 = CMmcssTask::Set(this + 5, (const struct DWM_MMTASK *)v17, 0);
    ManipulationThread = v3;
    if ( v3 < 0 )
    {
      v11 = v3;
      v15 = 111;
    }
    else
    {
      v4 = 0;
      v5 = &CManipulationManager::s_rghWaitEvents;
      do
      {
        SetLastError(0);
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *v5 = EventW;
        if ( !EventW )
        {
          LastError = GetLastError();
          ManipulationThread = LastError;
          if ( LastError > 0 )
            ManipulationThread = (unsigned __int16)LastError | 0x80070000;
          if ( ManipulationThread >= 0 )
            ManipulationThread = -2003304445;
          v15 = 122;
          v11 = ManipulationThread;
          goto LABEL_25;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < 4 );
      SetLastError(0);
      CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
      if ( CManipulationManager::s_hManipThreadInitializedWaitEvent )
      {
        v7 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[2] + 69) + 96LL))(*((_QWORD *)this[2] + 69));
        v8 = CManipulationManager::SetupMessageCallThreadInfo(
               (CManipulationManager *)this,
               v7,
               (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
               (struct CManipulationManager::MessageCallThreadInfo *)(this + 44));
        ManipulationThread = v8;
        v11 = v8;
        if ( v8 < 0 )
        {
          v15 = 138;
        }
        else
        {
          v12 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this[2] + 69) + 96LL))(
                                            *((_QWORD *)this[2] + 69),
                                            v9,
                                            v10,
                                            (unsigned int)v8);
          ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                                 (CManipulationManager *)this,
                                 v12,
                                 (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadTelemetryEndpointProc,
                                 (struct CManipulationManager::MessageCallThreadInfo *)(this + 47));
          v11 = ManipulationThread;
          if ( ManipulationThread < 0 )
          {
            v15 = 143;
          }
          else
          {
            ManipulationThread = CManipulationManager::CreateManipulationThread((HANDLE *)this);
            v11 = ManipulationThread;
            if ( ManipulationThread >= 0 )
              return (unsigned int)ManipulationThread;
            v15 = 148;
          }
        }
      }
      else
      {
        v14 = GetLastError();
        ManipulationThread = v14;
        if ( v14 > 0 )
          ManipulationThread = (unsigned __int16)v14 | 0x80070000;
        if ( ManipulationThread >= 0 )
          ManipulationThread = -2003304445;
        v15 = 129;
        v11 = ManipulationThread;
      }
    }
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v15);
    if ( ManipulationThread < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)ManipulationThread;
}
