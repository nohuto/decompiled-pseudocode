/*
 * XREFs of ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1800E2EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E36D0 (-Release@-$RuntimeClass@U-$InterfaceList@UISwitchItemCollectionChangedEventArgs@Common@Multitask.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x1800E3F54 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::RaiseSizePreferencesChanged(RTL_SRWLOCK *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r15
  RTL_SRWLOCK *v6; // r14
  RTL_SRWLOCK v7; // rbx
  RTL_SRWLOCK *v8; // rbp
  signed __int32 v9; // eax
  signed __int32 v10; // eax
  struct IUnknown **i; // rdi
  int v12; // eax
  int v13; // esi
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v15[0] = a2;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
         &v17,
         v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v17;
    v6 = a1 + 30;
    v7.Ptr = 0LL;
    v8 = a1 - 2;
    wil::srwlock::lock_exclusive(a1 + 31, &SRWLock);
    if ( a1[30].Ptr )
    {
      v7.Ptr = v6->Ptr;
      do
        v9 = *((_DWORD *)v7.Ptr + 3);
      while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)v7.Ptr + 3, v9 + 1, v9) );
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v7.Ptr )
    {
      do
        v10 = *((_DWORD *)v7.Ptr + 3);
      while ( v10 != 0x7FFFFFFF
           && v10 != _InterlockedCompareExchange((volatile signed __int32 *)v7.Ptr + 3, v10 + 1, v10) );
      for ( i = (struct IUnknown **)*((_QWORD *)v7.Ptr + 2); i != *((struct IUnknown ***)v7.Ptr + 3); ++i )
      {
        v12 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, __int64))(*i)->lpVtbl[1].QueryInterface)(
                *i,
                v8,
                v5);
        v13 = v12;
        if ( v12 < 0 )
        {
          RoTransformError((unsigned int)v12, 0LL, 0LL);
          if ( v13 == -2147417848 || v13 == -2147023174 || v13 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              v6,
              *i);
        }
      }
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v7.Ptr);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v7.Ptr);
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14B,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release();
  }
  return v4;
}
