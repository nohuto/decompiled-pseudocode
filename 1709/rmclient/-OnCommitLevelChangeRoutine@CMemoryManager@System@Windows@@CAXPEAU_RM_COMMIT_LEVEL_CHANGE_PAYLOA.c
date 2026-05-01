/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x1800025D0
 * Callers:
 *     ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180002560 (-CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x18000A234 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___ @ 0x18000B3D8 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Wind.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  __int64 v1; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h]
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) <= *(_DWORD *)a1 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(&Windows::System::CMemoryManager::s_levelDecreasedEvent);
  }
  else
  {
    v5 = 0LL;
    v4 = 0LL;
    *(_QWORD *)&v2 = &v4;
    v1 = 0LL;
    *((_QWORD *)&v2 + 1) = &v5;
    AcquireSRWLockExclusive(&stru_18001B710);
    if ( Windows::System::CMemoryManager::s_levelIncreasedEvent )
    {
      v1 = Windows::System::CMemoryManager::s_levelIncreasedEvent;
      _InterlockedIncrement((volatile signed __int32 *)(Windows::System::CMemoryManager::s_levelIncreasedEvent + 12));
    }
    ReleaseSRWLockExclusive(&stru_18001B710);
    if ( v1 )
    {
      v3 = v2;
      Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___(
        &v3,
        v1,
        &Windows::System::CMemoryManager::s_levelIncreasedEvent);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
    }
  }
}
