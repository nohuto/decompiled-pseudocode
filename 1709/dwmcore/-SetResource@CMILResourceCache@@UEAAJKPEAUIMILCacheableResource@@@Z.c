/*
 * XREFs of ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18007BFC0
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18007BD14 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801BC564 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x18007BF28 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::SetResource(
        CMILResourceCache *this,
        unsigned int a2,
        struct IMILCacheableResource *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  int v7; // eax
  signed int v8; // eax
  __int64 v9; // r14
  signed int v10; // eax
  __int64 v11; // rdi
  int i; // eax

  v3 = 0;
  v4 = a2;
  v7 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v7 < 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 8)
    && (v8 = CMILResourceCache::EnsureCount(this, (int)v4 + 1), v3 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x21Bu);
  }
  else
  {
    v9 = *((_QWORD *)this + 1);
    if ( a3
      && (v10 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)a3 + 16LL))(a3), v3 = v10, v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x226u);
    }
    else
    {
      v11 = _InterlockedExchange64((volatile __int64 *)(v9 + 8 * v4), (__int64)a3);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return v3;
}
