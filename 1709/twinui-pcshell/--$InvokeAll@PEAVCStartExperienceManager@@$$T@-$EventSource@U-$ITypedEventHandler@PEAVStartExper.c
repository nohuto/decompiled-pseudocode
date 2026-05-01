/*
 * XREFs of ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1800B9B2C
 * Callers:
 *     ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B6F60 (-OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B6FB0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B77C0 (-OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7BC0 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7DE0 (-OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fe210b1289c3c46e19802a64f8cd29ca__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x1800BA438 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_fe210b1289c3c46e19802a64f8cd29ca__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int started; // esi
  volatile signed __int32 *Ptr; // rbx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v7 = 0LL;
  *(_QWORD *)&v8 = &v10;
  v2 = a1 + 1;
  *((_QWORD *)&v8 + 1) = &v7;
  started = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (volatile signed __int32 *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)a1->Ptr + 3);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( Ptr )
  {
    v9 = v8;
    started = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fe210b1289c3c46e19802a64f8cd29ca__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___(
                &v9,
                Ptr,
                a1);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return started;
}
