/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E830
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIChainLinkEventArgs@Chaining@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18005E5D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIChainLinkEventArgs@Chaining@Shell@Internal@Windows@@U-.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18005E8A0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIClientWindowReadyForPresentationChangedEventArgs@ViewM.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a_____lambda_de7a847248f7e9ff51c83bca1460305a___ @ 0x18005FDB8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18005FF30 (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x1800E3F54 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@@012@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1800E4054 (--$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@She.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHandledEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x180119818 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0x7FFFFFFF;
  if ( v2 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v2 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v2 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v2 + 1, v2);
      v5 = v2 == v6;
      v2 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
