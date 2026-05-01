/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180001D50
 * Callers:
 *     ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180001CD0 (-CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001A10 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     sub_18000AB18 @ 0x18000AB18 (sub_18000AB18.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 *v2; // r8
  __int128 *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( *((_DWORD *)a1 + 1) > *(_DWORD *)a1 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( Windows::System::CMemoryManager::s_levelIncreasedEvent )
    {
      v1 = (volatile signed __int32 *)Windows::System::CMemoryManager::s_levelIncreasedEvent;
      _InterlockedIncrement((volatile signed __int32 *)(Windows::System::CMemoryManager::s_levelIncreasedEvent + 12));
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( !v1 )
      return;
    v4 = 0LL;
    v2 = &Windows::System::CMemoryManager::s_levelIncreasedEvent;
    v3 = &v4;
LABEL_11:
    sub_18000AB18(v3, v1, v2);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    return;
  }
  AcquireSRWLockExclusive(&stru_180018730);
  if ( Windows::System::CMemoryManager::s_levelDecreasedEvent )
  {
    v1 = (volatile signed __int32 *)Windows::System::CMemoryManager::s_levelDecreasedEvent;
    _InterlockedIncrement((volatile signed __int32 *)(Windows::System::CMemoryManager::s_levelDecreasedEvent + 12));
  }
  ReleaseSRWLockExclusive(&stru_180018730);
  if ( v1 )
  {
    v5 = 0LL;
    v2 = &Windows::System::CMemoryManager::s_levelDecreasedEvent;
    v3 = &v5;
    goto LABEL_11;
  }
}
