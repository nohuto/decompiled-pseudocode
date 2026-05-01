/*
 * XREFs of ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x180096EC8
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094E00 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094F40 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  RTL_SRWLOCK v5; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // eax
  struct IUnknown **v8; // rdi
  __int64 v9; // rbp
  int v10; // eax
  int v11; // esi
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  SRWLock = a3;
  v5.Ptr = 0LL;
  wil::srwlock::lock_exclusive(a1 + 1, &SRWLock);
  if ( a1->Ptr )
  {
    v5.Ptr = a1->Ptr;
    do
      v6 = *((_DWORD *)v5.Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)v5.Ptr + 3, v6 + 1, v6) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5.Ptr )
  {
    do
      v7 = *((_DWORD *)v5.Ptr + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5.Ptr + 3, v7 + 1, v7) );
    v8 = (struct IUnknown **)*((_QWORD *)v5.Ptr + 2);
    if ( v8 != *((struct IUnknown ***)v5.Ptr + 3) )
    {
      v9 = (a2 + 24) & -(__int64)(a2 != 0);
      do
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*v8)->lpVtbl[1].QueryInterface)(
                *v8,
                v9,
                0LL);
        v11 = v10;
        if ( v10 < 0 )
        {
          RoTransformError((unsigned int)v10, 0LL, 0LL);
          if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              a1,
              *v8);
        }
        ++v8;
      }
      while ( v8 != *((struct IUnknown ***)v5.Ptr + 3) );
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5.Ptr);
  }
  return 0LL;
}
