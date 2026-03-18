/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1801962CC
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x180198DE0 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18000A170 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800C4588 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1801982F0 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadMain(CManipulationManager *this)
{
  struct IMessageSession **v2; // rsi
  int v3; // eax
  signed int v4; // ebx
  CManipulationManager *v5; // rcx
  signed int LastError; // eax
  DWORD v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_STARTUP);
  v2 = (struct IMessageSession **)((char *)this + 320);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  v3 = CoreUICreateEx(1LL, (char *)this + 320);
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 839;
  }
  else
  {
    EnterCriticalSection(&stru_180272518);
    byte_180272514 = 0;
    LeaveCriticalSection(&stru_180272518);
    EnterCriticalSection(&stru_180272558);
    byte_180272554 = 0;
    LeaveCriticalSection(&stru_180272558);
    if ( !IsRegisterManipulationThreadPresent() )
    {
LABEL_17:
      CManipulationManager::s_dwManipulationThreadId = 0;
      goto LABEL_26;
    }
    SetLastError(0);
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      v9 = 852;
      if ( v4 >= 0 )
        v4 = -2003304445;
      v7 = v4;
      goto LABEL_25;
    }
    CManipulationManager::UpdateMMCSSTask(v5);
    v3 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v2,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CManipulationManager *)((char *)this + 328));
    v4 = v3;
    if ( v3 < 0 )
    {
      v9 = 865;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CManipulationManager *), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
             *v2,
             qword_1802727E8,
             lambda_85f18509193cd6d47eaa6d1c8f3fb8df_::_lambda_invoker_cdecl_,
             this);
      v4 = v3;
      if ( v3 < 0 )
      {
        v9 = 874;
      }
      else
      {
        v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CManipulationManager *), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
               *v2,
               CManipulationManager::s_rghWaitEvents,
               lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_,
               this);
        v4 = v3;
        if ( v3 < 0 )
        {
          v9 = 883;
        }
        else
        {
          v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CManipulationManager *), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
                 *v2,
                 qword_1802727E0,
                 lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_::_lambda_invoker_cdecl_,
                 this);
          v4 = v3;
          if ( v3 < 0 )
          {
            v9 = 892;
          }
          else
          {
            v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(__int64), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
                   *v2,
                   hEvent,
                   lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_,
                   this);
            v4 = v3;
            if ( v3 >= 0 )
            {
              SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
              (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 224LL))(*v2);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
              goto LABEL_17;
            }
            v9 = 901;
          }
        }
      }
    }
  }
  v7 = v3;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v9);
LABEL_26:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_THREAD_CLEANUP);
  return (unsigned int)v4;
}
