/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4
 * Callers:
 *     VidMmInitGlobals @ 0x1C0014120 (VidMmInitGlobals.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AB0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McGenEventRegister @ 0x1C001412C (McGenEventRegister.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0076A1C (TlgRegisterAggregateProviderEx.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C0076E14 (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C0076E5C (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0076FB8 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00AF008 (__security_init_cookie.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  unsigned int v0; // ebx
  PETWENABLECALLBACK v1; // rdx
  LPCGUID v2; // rcx
  PVOID v3; // r8
  PREGHANDLE v4; // r9
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // edi
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax

  _security_init_cookie();
  v0 = 0;
  bTracingEnabled = 0;
  McGenEventRegister(v2, v1, v3, v4);
  TlgRegisterAggregateProviderEx(v5);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = operator new[](0x18000uLL, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    qword_1C003C460 = 2048LL;
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
    if ( (int)result >= 0 )
    {
      result = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
      if ( (int)result >= 0 )
      {
        qword_1C003C6A0 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        v12 = operator new[](0x18uLL, 0x30316956u, PagedPool);
        if ( v12 )
        {
          v12[1] = 0LL;
          *v12 = 0LL;
          *((_DWORD *)v12 + 4) = -1;
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (DXGPUSHLOCK *)v12;
        }
        else
        {
          v12 = 0LL;
          VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
        }
        if ( !v12 )
          return (unsigned int)-1073741801;
        return v0;
      }
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C003C5A8);
    v13 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v13 + 24) = 412LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
  return result;
}
