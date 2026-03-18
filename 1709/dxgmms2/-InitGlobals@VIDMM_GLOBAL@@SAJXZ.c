/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C007D944
 * Callers:
 *     VidMmInitGlobals @ 0x1C0016810 (VidMmInitGlobals.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001C60 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001C80 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McGenEventRegister @ 0x1C0016824 (McGenEventRegister.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C007D5EC (TlgRegisterAggregateProviderEx.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C007DCCC (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C007DD14 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C007DE70 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00B8044 (__security_init_cookie.c)
 */

NTSTATUS VIDMM_GLOBAL::InitGlobals(void)
{
  PETWENABLECALLBACK v0; // rdx
  LPCGUID v1; // rcx
  PVOID v2; // r8
  PREGHANDLE v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS result; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-A0h] BYREF
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+78h] [rbp-90h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v25; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v26; // [rsp+D8h] [rbp-30h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v27; // [rsp+108h] [rbp+0h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v28; // [rsp+138h] [rbp+30h] BYREF

  _security_init_cookie();
  bTracingEnabled = 0;
  McGenEventRegister(v1, v0, v2, v3);
  TlgRegisterAggregateProviderEx(v5, v4);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = operator new[](0x18000uLL, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    qword_1C0040490 = 2048LL;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v8 = 4LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 4uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x33316956u, PagedPool);
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = v9;
  if ( v9 )
  {
    memset(v9, 0, 4LL * MaximumAdapterCount);
    result = VIDMM_DMA_POOL::InitGlobals();
    if ( result >= 0 )
    {
      result = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
      if ( result >= 0 )
      {
        qword_1C0040708 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        v13 = operator new[](0x18uLL, 0x30316956u, PagedPool);
        if ( v13 )
        {
          v13[1] = 0LL;
          *v13 = 0LL;
          *((_DWORD *)v13 + 4) = -1;
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (DXGPUSHLOCK *)v13;
        }
        else
        {
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
        }
        VIDMM_PARTITION::_PartitionTree = 0LL;
        qword_1C0040738 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
        VIDMM_GLOBAL::_AdapterListHead.Flink = &VIDMM_GLOBAL::_AdapterListHead;
        LODWORD(v19[0]) = 2490404;
        v19[1] = L"GPU Process Memory";
        memset(&Info, 0, sizeof(Info));
        Info.CounterCount = 5;
        Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
        Info.Callback = 0LL;
        Info.Name = (PCUNICODE_STRING)v19;
        Info.Version = 256;
        Info.CallbackContext = 0LL;
        v16 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
        if ( v16 < 0 )
          goto LABEL_19;
        VIDMM_GLOBAL::PerfCounterSetEngineRegistered = 1;
        v20[1] = L"GPU Engine";
        LODWORD(v20[0]) = 1441812;
        memset(&v25, 0, sizeof(v25));
        v25.Version = 256;
        v25.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetEngine'::`2'::Descriptors;
        v25.CounterCount = 2;
        v25.Name = (PCUNICODE_STRING)v20;
        v25.Callback = 0LL;
        v25.CallbackContext = 0LL;
        v16 = PcwRegister(&GpuPerformanceCounterSetEngine, &v25);
        if ( v16 < 0 )
          goto LABEL_19;
        VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered = 1;
        v21[1] = L"GPU Adapter Memory";
        LODWORD(v21[0]) = 2490404;
        memset(&v26, 0, sizeof(v26));
        v26.Version = 256;
        v26.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
        v26.CounterCount = 3;
        v26.Name = (PCUNICODE_STRING)v21;
        v26.Callback = 0LL;
        v26.CallbackContext = 0LL;
        v16 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v26);
        if ( v16 < 0 )
          goto LABEL_19;
        VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered = 1;
        v22[1] = L"GPU Local Adapter Memory";
        LODWORD(v22[0]) = 3276848;
        memset(&v27, 0, sizeof(v27));
        v27.Version = 256;
        v27.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
        v27.CounterCount = 1;
        v27.Name = (PCUNICODE_STRING)v22;
        v27.Callback = 0LL;
        v27.CallbackContext = 0LL;
        v16 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v27);
        if ( v16 < 0 )
          goto LABEL_19;
        VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered = 1;
        v23[1] = L"GPU Non Local Adapter Memory";
        LODWORD(v23[0]) = 3801144;
        memset(&v28, 0, sizeof(v28));
        v28.Version = 256;
        v28.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
        v28.CounterCount = 1;
        v28.Name = (PCUNICODE_STRING)v23;
        v28.Callback = 0LL;
        v28.CallbackContext = 0LL;
        result = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v28);
        v16 = result;
        if ( result < 0 )
        {
LABEL_19:
          v18 = WdLogNewEntry5_WdAssertion(v15, v14);
          WdLogEvent5_WdAssertion(v18);
          return v16;
        }
        else
        {
          VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered = 1;
        }
      }
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00405B8);
    v17 = WdLogNewEntry5_WdLowResource(v11, v10);
    *(_QWORD *)(v17 + 24) = 460LL;
    WdLogEvent5_WdLowResource(v17);
    return -1073741801;
  }
  return result;
}
