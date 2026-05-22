/*
 * XREFs of ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48
 * Callers:
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 *     std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Do_call @ 0x180099450 (std--_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAX_K@Z @ 0x180097BA0 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-.c)
 *     ??$make_shared@VAsynchronousWorkItem@SpatialInputControllerCollection@@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@4@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@0@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@0@AEA_N@Z @ 0x18009841C (--$make_shared@VAsynchronousWorkItem@SpatialInputControllerCollection@@AEAV-$shared_ptr@VSpatial.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInputControllerCollection::QueueWorkItem(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  __int64 v8; // rdx
  const char *v9; // r9
  _QWORD *v10; // r12
  __int64 v11; // r13
  _QWORD *v12; // rcx
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE v18[8]; // [rsp+28h] [rbp-40h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+8h]
  char v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = a4;
  try
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 3216);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 3216));
    if ( !*(_BYTE *)(a1 + 3256) )
    {
      v10 = (_QWORD *)std::make_shared<SpatialInputControllerCollection::AsynchronousWorkItem,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> &,std::function<void (std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> const &)> &,bool &>(
                        v18,
                        a2,
                        a3,
                        &v23,
                        -2LL);
      if ( *(_QWORD *)(a1 + 3280) <= (unsigned __int64)(*(_QWORD *)(a1 + 3296) + 1LL) )
        std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::_Growmap(a1 + 3264);
      *(_QWORD *)(a1 + 3288) &= *(_QWORD *)(a1 + 3280) - 1LL;
      v8 = *(_QWORD *)(a1 + 3296) + *(_QWORD *)(a1 + 3288);
      v11 = v8 & (*(_QWORD *)(a1 + 3280) - 1LL);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3272) + 8 * v11) )
        *(_QWORD *)(*(_QWORD *)(a1 + 3272) + 8 * v11) = operator new(0x10uLL);
      v12 = *(_QWORD **)(*(_QWORD *)(a1 + 3272) + 8 * v11);
      if ( v12 )
      {
        *v12 = *v10;
        v12[1] = v10[1];
        *v10 = 0LL;
        v10[1] = 0LL;
      }
      ++*(_QWORD *)(a1 + 3296);
      v13 = v19;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      if ( *(_QWORD *)(a1 + 3296) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 3304));
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  catch ( ... )
  {
    v21 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x783,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            v9);
    v16 = *(_QWORD *)(a3 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return v21;
  }
  v14 = *(_QWORD *)(a3 + 56);
  if ( v14 )
  {
    LOBYTE(v8) = v14 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v8);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return 0LL;
}
