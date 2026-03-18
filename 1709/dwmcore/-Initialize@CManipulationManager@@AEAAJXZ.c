/*
 * XREFs of ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180195F28
 * Callers:
 *     ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180195D60 (-Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x180195D20 (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 *     ?CreateManipulationThread@CManipulationManager@@AEAAJXZ @ 0x180195E10 (-CreateManipulationThread@CManipulationManager@@AEAAJXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1801982F0 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  signed int v2; // ebx
  int ManipulationThread; // eax
  unsigned int v4; // ebx
  HANDLE *v5; // rdi
  HANDLE EventW; // rax
  signed int v7; // eax
  DWORD v8; // r9d
  struct IMessageSession *v9; // rax
  struct IMessageSession *v10; // rax
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v14[66]; // [rsp+30h] [rbp-B8h] BYREF
  int v15; // [rsp+B4h] [rbp-34h]

  v2 = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    memset_0(v14, 0, 0x90uLL);
    StringCchCopyW(v14, 0x40uLL, (size_t *)L"Capture");
    v15 = 1;
    ManipulationThread = CMmcssTask::Set((CManipulationManager *)((char *)this + 40), (const struct DWM_MMTASK *)v14, 0);
    v2 = ManipulationThread;
    if ( ManipulationThread < 0 )
    {
      v13 = 107;
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
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          v13 = 118;
          goto LABEL_10;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < 4 );
      SetLastError(0);
      CManipulationManager::s_hManipThreadInitializedWaitEvent = CreateEventW(0LL, 0, 0, 0LL);
      if ( !CManipulationManager::s_hManipThreadInitializedWaitEvent )
      {
        v7 = GetLastError();
        v2 = v7;
        if ( v7 > 0 )
          v2 = (unsigned __int16)v7 | 0x80070000;
        v13 = 125;
LABEL_10:
        if ( v2 >= 0 )
          v2 = -2003304445;
        v8 = v2;
        goto LABEL_24;
      }
      v9 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL)
                                                                       + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL));
      ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                             this,
                             v9,
                             (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
                             (CManipulationManager *)((char *)this + 352));
      v2 = ManipulationThread;
      if ( ManipulationThread < 0 )
      {
        v13 = 134;
      }
      else
      {
        v10 = (struct IMessageSession *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL)
                                                                          + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 528LL));
        ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                               this,
                               v10,
                               (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadTelemetryEndpointProc,
                               (CManipulationManager *)((char *)this + 376));
        v2 = ManipulationThread;
        if ( ManipulationThread < 0 )
        {
          v13 = 139;
        }
        else
        {
          ManipulationThread = CManipulationManager::CreateManipulationThread((HANDLE *)this);
          v2 = ManipulationThread;
          if ( ManipulationThread >= 0 )
            return (unsigned int)v2;
          v13 = 144;
        }
      }
    }
    v8 = ManipulationThread;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v13);
    if ( v2 < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)v2;
}
