/*
 * XREFs of ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C
 * Callers:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18005B10C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18005B1C8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ??1ARM_EVENT@@UEAA@XZ @ 0x1800BA518 (--1ARM_EVENT@@UEAA@XZ.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C0C00 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x1800C2A60 (-_Destroy@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@EEAAXXZ.c)
 * Callees:
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this @ 0x18000C9E0 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Delete_thi.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,>::_Tidy(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 (__fastcall *v4)(void *); // rax

  v3 = (_QWORD *)a1[7];
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(void *))(*v3 + 32LL);
    if ( v4 == std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this )
    {
      std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Delete_this(v3);
    }
    else
    {
      LOBYTE(a2) = v3 != a1;
      ((void (__fastcall *)(_QWORD *, __int64))v4)(v3, a2);
    }
    a1[7] = 0LL;
  }
}
