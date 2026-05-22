/*
 * XREFs of ?Invoke@SpatialRimDeviceCollectionHeadEventHandler@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180070240
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::Invoke(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 i; // eax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    for ( i = *(_DWORD *)(a1 + 12);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), i + 1, i);
          i = *(_DWORD *)(a1 + 12) )
    {
      ;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
        v7 = *(_QWORD *)(a1 + 120);
      }
      *(_QWORD *)(a1 + 120) = a4;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a1 != -80 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(**(_QWORD **)(a1 + 72) + 128LL))(
           *(_QWORD *)(a1 + 72),
           lambda_d0d2654579e51c48938f80222ded4916_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)a1);
  }
  return 0LL;
}
