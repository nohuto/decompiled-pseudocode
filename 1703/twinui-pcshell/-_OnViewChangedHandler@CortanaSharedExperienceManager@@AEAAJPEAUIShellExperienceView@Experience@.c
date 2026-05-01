/*
 * XREFs of ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800BC960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnPriorityUnboostRequested@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BCBE0 (-_OnPriorityUnboostRequested@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BCD08 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD978 (-_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDA98 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDDA0 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x1800BF134 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x18018C864 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+18h] BYREF
  int v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v17);
  if ( v5 < 0 )
  {
    v6 = 980LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  switch ( v17 )
  {
    case 0:
      v13 = *(_QWORD *)a3;
      v16 = 0;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v13 + 56))(
             a3,
             &v16);
      if ( v5 < 0 )
      {
        v6 = 986LL;
        goto LABEL_3;
      }
      v10 = ExperienceManagerUtils::PostToUIThread(this[48], (struct IUnknown *)this, (void *)v16, v14);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 1018LL;
        goto LABEL_23;
      }
      return 0;
    case 1:
      ++*((_DWORD *)this + 127);
      v10 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded((CortanaSharedExperienceManager *)this);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 1025LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      return 0;
    case 2:
      return CortanaSharedExperienceManager::_OnPriorityUnboostRequested((CortanaSharedExperienceManager *)this);
    case 5:
      return CortanaSharedExperienceManager::_OnViewCreated((CortanaSharedExperienceManager *)this);
    case 6:
      v8 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)this);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x423,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      v9 = CortanaSharedExperienceManager::_UnregisterViewPresentationChanged((CortanaSharedExperienceManager *)this);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x424,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
        this + 12,
        this);
      break;
  }
  return 0LL;
}
