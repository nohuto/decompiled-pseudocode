/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0
 * Callers:
 *     ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180026690 (--_EMPCManagerClient@@UEAAPEAXI@Z.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800267E0 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180026CBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windo.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180026EC4 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800271A4 (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180027398 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64___ @ 0x180027550 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Wind.c)
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180060AD0 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180060CC4 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_ @ 0x180061360 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHea.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
