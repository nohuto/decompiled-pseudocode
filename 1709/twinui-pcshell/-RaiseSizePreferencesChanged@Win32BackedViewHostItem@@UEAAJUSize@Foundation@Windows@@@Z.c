/*
 * XREFs of ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180108660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferencesChangedEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180109AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferen.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x18010A164 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::RaiseSizePreferencesChanged(RTL_SRWLOCK *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rdi
  struct IUnknown **i; // rdi
  int v10; // eax
  int v11; // esi
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v13 = a2;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
         &v17,
         &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (__int64)&a1[35];
    v14 = v17;
    v6 = 0LL;
    v7 = a1 - 2;
    v8 = a1 + 36;
    v15 = v7;
    AcquireSRWLockExclusive(v8);
    if ( *(_QWORD *)v5 )
    {
      v6 = *(_QWORD *)v5;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 12LL));
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      for ( i = *(struct IUnknown ***)(v6 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, __int64))(*i)->lpVtbl[1].QueryInterface)(
                *i,
                v15,
                v14);
        v11 = v10;
        if ( v10 < 0 )
        {
          RoTransformError((unsigned int)v10, 0LL, 0LL);
          if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
            Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
              v5,
              *i);
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v6 + 12)) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x168,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::Release();
  }
  return v4;
}
