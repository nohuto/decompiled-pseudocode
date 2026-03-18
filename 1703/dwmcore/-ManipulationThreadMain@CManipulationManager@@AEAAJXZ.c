/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x18004E478
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x1800CC260 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x18004D9CC (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18004E95C (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800D4368 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadMain(CManipulationManager *this)
{
  struct IMessageSession **v2; // rdi
  int v3; // eax
  signed int v4; // ebx
  __int64 v5; // rcx
  CManipulationManager *v6; // rcx
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &MANIPULATION_THREAD_STARTUP);
  v2 = (struct IMessageSession **)((char *)this + 320);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 40);
  v3 = CoreUICreate((char *)this + 320);
  v4 = v3;
  if ( v3 < 0 )
  {
    v10 = 805;
  }
  else
  {
    EnterCriticalSection(&stru_18023E7A8);
    byte_18023E7A4 = 0;
    LeaveCriticalSection(&stru_18023E7A8);
    EnterCriticalSection(&stru_18023E7E8);
    byte_18023E7E4 = 0;
    LeaveCriticalSection(&stru_18023E7E8);
    if ( !(unsigned __int8)IsRegisterManipulationThreadPresent() )
      goto LABEL_25;
    SetLastError(0);
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      v10 = 816;
      if ( v4 >= 0 )
        v4 = -2003304445;
      v8 = v4;
      goto LABEL_24;
    }
    CManipulationManager::UpdateMMCSSTask(v6);
    v3 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v2,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CManipulationManager *)((char *)this + 328));
    v4 = v3;
    if ( v3 < 0 )
    {
      v10 = 829;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
             *v2,
             qword_180241250,
             lambda_85f18509193cd6d47eaa6d1c8f3fb8df_::_lambda_invoker_cdecl_,
             this);
      v4 = v3;
      if ( v3 < 0 )
      {
        v10 = 838;
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
          v10 = 847;
        }
        else
        {
          v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
                 *v2,
                 hEvent,
                 lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_::_lambda_invoker_cdecl_,
                 this);
          v4 = v3;
          if ( v3 < 0 )
          {
            v10 = 856;
          }
          else
          {
            v3 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
                   *v2,
                   qword_180241258,
                   lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_,
                   this);
            v4 = v3;
            if ( v3 >= 0 )
            {
              SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
              (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 224LL))(*v2);
              Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 40);
              goto LABEL_25;
            }
            v10 = 865;
          }
        }
      }
    }
  }
  v8 = v3;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v10);
LABEL_25:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v5, &MANIPULATION_THREAD_CLEANUP);
  return (unsigned int)v4;
}
