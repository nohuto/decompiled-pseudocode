/*
 * XREFs of ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x18010A07C
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x180107D50 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ @ 0x180108800 (-RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18010D490 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18010E890 (-RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18010F0E0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8f655d1437979cea0f95b51a9e4ac40d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____ptr64___ @ 0x18010B514 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8f655d1437979cea0f95b51a9e4ac40d__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,PresentationReadyChangedEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 *a3)
{
  RTL_SRWLOCK *v3; // rsi
  int ready; // edi
  volatile signed __int32 *Ptr; // rbx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 + 1;
  v12 = *a3;
  v11 = *a2;
  ready = 0;
  Ptr = 0LL;
  *(_QWORD *)&v8 = &v11;
  *((_QWORD *)&v8 + 1) = &v12;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (volatile signed __int32 *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)a1->Ptr + 3);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( Ptr )
  {
    v9 = v8;
    ready = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8f655d1437979cea0f95b51a9e4ac40d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____ptr64___(
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
    if ( ready < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)ready);
  }
  return (unsigned int)ready;
}
