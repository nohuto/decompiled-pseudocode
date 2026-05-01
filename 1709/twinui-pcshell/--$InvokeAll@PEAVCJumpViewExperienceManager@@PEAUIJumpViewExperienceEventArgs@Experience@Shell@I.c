/*
 * XREFs of ??$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0274
 * Callers:
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BDD10 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE200 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1801B5690 (-VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B5800 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___ @ 0x1800A956C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::JumpViewExperienceManager *,Windows::Internal::Shell::Experience::JumpViewExperienceEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CJumpViewExperienceManager *,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // esi
  volatile signed __int32 *Ptr; // rbx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  *(_QWORD *)&v8 = &v10;
  v4 = a1 + 1;
  *((_QWORD *)&v8 + 1) = &v11;
  v5 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (volatile signed __int32 *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)a1->Ptr + 3);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( Ptr )
  {
    v9 = v8;
    v5 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___(
           (_QWORD **)&v9,
           (__int64)Ptr,
           (__int64)a1);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v5;
}
