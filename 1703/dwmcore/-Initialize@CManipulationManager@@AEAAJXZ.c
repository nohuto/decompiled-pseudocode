/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBA50 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x18004D9CC (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x18004E634 (-CreateManipulationThread@CManipulationManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800B6714 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x18018A1BC (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  signed int v2; // ebx
  int ManipulationThread; // eax
  unsigned int v4; // ebx
  HANDLE *v5; // rdi
  HANDLE EventW; // rax
  struct IMessageSession *v7; // rax
  struct IMessageSession *v8; // rax
  signed int LastError; // eax
  int v11; // r9d
  signed int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v14[66]; // [rsp+30h] [rbp-B8h] BYREF
  int v15; // [rsp+B4h] [rbp-34h]

  v2 = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    memset_0(v14, 0, 0x90uLL);
    StringCchCopyW(v14, 0x40uLL, L"Capture");
    v15 = 1;
    ManipulationThread = CMmcssTask::Set((CManipulationManager *)((char *)this + 40), (const struct DWM_MMTASK *)v14, 0);
    v2 = ManipulationThread;
    if ( ManipulationThread >= 0 )
    {
      v4 = 0;
      v5 = &CManipulationManager::s_rghWaitEvents;
      while ( 1 )
      {
        SetLastError(0);
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *v5 = EventW;
        if ( !EventW )
          break;
        ++v4;
        ++v5;
        if ( v4 >= 4 )
        {
          SetLastError(0);
          CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
          if ( CManipulationManager::s_hManipThreadInitializedWaitEvent )
          {
            v7 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                           + 560LL)
                                                                             + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 560LL));
            ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                                   this,
                                   v7,
                                   (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
                                   (CManipulationManager *)((char *)this + 352));
            v2 = ManipulationThread;
            if ( ManipulationThread < 0 )
            {
              v13 = 136;
            }
            else
            {
              v8 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                             + 560LL)
                                                                               + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 560LL));
              ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                                     this,
                                     v8,
                                     (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadTelemetryEndpointProc,
                                     (CManipulationManager *)((char *)this + 376));
              v2 = ManipulationThread;
              if ( ManipulationThread < 0 )
              {
                v13 = 141;
              }
              else
              {
                ManipulationThread = CManipulationManager::CreateManipulationThread(this);
                v2 = ManipulationThread;
                if ( ManipulationThread >= 0 )
                  return (unsigned int)v2;
                v13 = 146;
              }
            }
            goto LABEL_24;
          }
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          v13 = 127;
LABEL_15:
          if ( v2 >= 0 )
            v2 = -2003304445;
          v11 = v2;
          goto LABEL_25;
        }
      }
      v12 = GetLastError();
      v2 = v12;
      if ( v12 > 0 )
        v2 = (unsigned __int16)v12 | 0x80070000;
      v13 = 120;
      goto LABEL_15;
    }
    v13 = 109;
LABEL_24:
    v11 = ManipulationThread;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
    if ( v2 < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)v2;
}
