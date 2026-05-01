/*
 * XREFs of ?AddPopupPropertyChangedListener@ViewWrapperBase@@UEAAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18013EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005EFC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x180144B0C (--$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::AddPopupPropertyChangedListener(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // edi
  int v7; // eax
  struct IUnknown *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)v6);
    return v6;
  }
  v11 = 0LL;
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler>(
         a2,
         &v11);
  v8 = v11;
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( !v11 )
    {
      v6 = -2147024809;
      goto LABEL_9;
    }
    v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
           this + 38,
           v11,
           *(void **)(*(_QWORD *)a2 + 24LL),
           a3);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
LABEL_9:
  if ( (v6 & 0x80000000) != 0 )
    goto LABEL_10;
  return v6;
}
