/*
 * XREFs of ?DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ @ 0x180091E54
 * Callers:
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x180092B20 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     std::_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099220 (std--_Func_impl__lambda_a9ec697dfd51dd949e2095da24ee3cc3__std--allocator_int__void__ea_180099220.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180091ACC (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInputControllerCollection::DisableHeadEventHandler(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct EventRegistrationToken *DebugInfo; // rcx
  volatile signed __int32 *v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-30h] BYREF

  v2 = this + 69;
  EnterCriticalSection(this + 69);
  DebugInfo = (struct EventRegistrationToken *)this[70].DebugInfo;
  if ( DebugInfo )
  {
    SpatialInputControllerHeadEventHandler::SetOwner(DebugInfo, 0LL, 0LL);
    v4 = (volatile signed __int32 *)this[70].DebugInfo;
    if ( v4 )
    {
      this[70].DebugInfo = 0LL;
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v5 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v5 )
    {
      if ( *v5 )
      {
        RawInputProvidersTracing::Instance();
        v6 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
        if ( *(_DWORD *)v6 > 4u
          && (*(_BYTE *)(v6 + 16) & 2) != 0
          && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
        {
          TlgWrite((TraceLoggingHProvider)v6, &unk_1800EF937, 0LL, 0LL, 2u, &pData);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
