/*
 * XREFs of ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCControllerDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A57B0 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A5970 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A7E80 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Do_call @ 0x1800ABE50 (std--_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_--_Do_call.c)
 * Callees:
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800922B8 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$sha.c)
 *     ??$?0AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@1@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@Z @ 0x1800AB90C (--$-0AEAV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+8h]
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = a4;
  try
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 480);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 480));
    if ( !*(_BYTE *)(a1 + 520) )
    {
      v18 = operator new(0x68uLL);
      v10 = std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>(
              v18,
              a2,
              a3,
              &v22,
              -2LL,
              v18);
      if ( *(_QWORD *)(a1 + 544) <= (unsigned __int64)(*(_QWORD *)(a1 + 560) + 1LL) )
        std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Growmap((_QWORD *)(a1 + 528));
      *(_QWORD *)(a1 + 552) &= *(_QWORD *)(a1 + 544) - 1LL;
      v8 = *(_QWORD *)(a1 + 560) + *(_QWORD *)(a1 + 552);
      v11 = v8 & (*(_QWORD *)(a1 + 544) - 1LL);
      v12 = *(_QWORD *)(a1 + 536);
      if ( !*(_QWORD *)(v12 + 8 * v11) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * v11) = operator new(0x10uLL);
        v12 = *(_QWORD *)(a1 + 536);
      }
      v13 = *(_QWORD **)(v12 + 8 * v11);
      *v13 = v10 + 16;
      v13[1] = v10;
      if ( ++*(_QWORD *)(a1 + 560) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 568));
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  catch ( ... )
  {
    v20 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1AC,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            v9);
    v16 = *(_QWORD *)(a3 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return v20;
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
