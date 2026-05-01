/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180047CE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_::Run @ 0x180045D20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x1800709B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_91340e788704f1afab709d2d81130ce3__2__1_::Invoke @ 0x1800B0620 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_1800B0620.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EB820 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EB8F0 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EB9C0 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92bae14264e2c418d7815c1aa1201818___::Run @ 0x180151340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_92bae14264e2c418d7815c1aa1201818___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e8d75694a036b21790d666e0494687c0___::Run @ 0x180151400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e8d75694a036b21790d666e0494687c0___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719___::Run @ 0x18016D8E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4de2082f8d92723017ebdb5676c04982___::Run @ 0x18017FC50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4de2082f8d92723017ebdb5676c04982___--Run.c)
 *     _lambda_00be1f95221eb842538ce67e0fb4e246_::operator() @ 0x1801827F8 (_lambda_00be1f95221eb842538ce67e0fb4e246_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run @ 0x18018CD70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x180192870 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v10; // rcx

  *a3 = 0LL;
  v6 = -2147467259;
  v7 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v8 = 0LL;
    if ( a4 || v7[6] != 2 )
    {
      v8 = *(_DWORD **)this;
      *(_QWORD *)this = 0LL;
    }
    else if ( v7 )
    {
      v8 = *(_DWORD **)this;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    *a3 = 0LL;
    if ( v8[6] == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v8 + 8), a2, a3);
    }
    else
    {
      v10 = (IStream *)*((_QWORD *)v8 + 2);
      *((_QWORD *)v8 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v10, a2, a3);
    }
    v6 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
