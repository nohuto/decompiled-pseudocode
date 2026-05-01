/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DA28
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_e039250a5e9a10031e161b6cc2d8aa5b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18000EF70 (--_G-$CTaskWrapper@V_lambda_e039250a5e9a10031e161b6cc2d8aa5b_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___ @ 0x180012350 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F6244 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800F7D0C (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1800F7D40 (--$create@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18011DBC4 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_18011DBC4.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1801035C4 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 )
  {
    if ( _InterlockedExchangeAdd(*a1, 0xFFFFFFFF) == 1 )
    {
      v2 = *a1;
      if ( *a1 )
      {
        v3 = (volatile signed __int32 *)*((_QWORD *)v2 + 29);
        if ( v3 )
        {
          if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, *((LPVOID *)v2 + 29));
          }
          *((_QWORD *)v2 + 29) = 0LL;
          *((_QWORD *)v2 + 30) = 0LL;
        }
        if ( *((_BYTE *)v2 + 72) )
        {
          v5 = GetProcessHeap();
          HeapFree(v5, 0, *((LPVOID *)v2 + 8));
          *((_BYTE *)v2 + 72) = 0;
        }
        *((_QWORD *)v2 + 8) = 0LL;
        if ( *((_DWORD *)v2 + 2) == 1 )
        {
          Context = 0LL;
          *((_DWORD *)v2 + 2) = 2;
          if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
          {
            if ( fPending )
            {
              Context = qword_180438670;
              qword_180438670[0] = &LockScreenServiceLogging::`vftable';
              qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
              InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
            }
          }
          _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v2 + 4);
        }
        *((_DWORD *)v2 + 2) = 3;
        operator delete((void *)v2, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
