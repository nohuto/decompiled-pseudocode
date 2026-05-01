/*
 * XREFs of ?add_KindChanged@ThumbnailInteropVisual@@UEAAJPEAU?$ITypedEventHandler@PEAUIDuplicateVisual@ComposableShell@Internal@Windows@@PEAUIDuplicateVisualKindChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180169960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005D384 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wi.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIDuplicateVisual@ComposableShell@Internal@Windows@@PEAUIDuplicateVisualKindChangedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIDuplicateVisual@ComposableShell@Internal@Windows@@PEAUIDuplicateVisualKindChangedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18016A2B4 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIDuplicateVisual@ComposableShell@Internal@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThumbnailInteropVisual::add_KindChanged(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3,
        const char *a4)
{
  int v7; // ebx
  struct IUnknown *v8; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    if ( !a2 )
      goto LABEL_3;
    v11 = 0LL;
    v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::IDuplicateVisual *,Windows::Internal::ComposableShell::IDuplicateVisualKindChangedEventArgs *>>(
           a2,
           &v11);
    if ( v7 >= 0 )
    {
      if ( !v11 )
      {
LABEL_3:
        v7 = -2147024809;
LABEL_9:
        if ( v7 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
            (const char *)(unsigned int)v7);
        return 0LL;
      }
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1 + 64,
             v11,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    }
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    }
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6B,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
                           a4);
  }
  return result;
}
