/*
 * XREFs of ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x18007C070
 * Callers:
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18007BD14 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::GetResource(CMILResourceCache *this, unsigned int a2, void ****a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v8; // r14
  __int64 v9; // rsi
  void ***v10; // rbx
  bool v11; // zf
  void **v12; // rax
  int i; // eax

  v4 = a2;
  v6 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v6 < 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  *a3 = 0LL;
  if ( (unsigned int)v4 < *((_DWORD *)this + 8) )
  {
    v8 = *((_QWORD *)this + 1);
    v9 = v4;
    do
    {
      v10 = *(void ****)(v8 + 8 * v9);
      if ( v10 == &g_MILCacheableResourceDummy )
      {
        SleepEx(0, 1);
        v10 = 0LL;
      }
    }
    while ( v10 != (void ***)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)(v8 + 8 * v9),
                               (signed __int64)&g_MILCacheableResourceDummy,
                               (signed __int64)v10) );
    if ( v10 )
    {
      v11 = ((unsigned __int8 (__fastcall *)(void ***))(*v10)[4])(v10) == 0;
      v12 = *v10;
      if ( v11 )
      {
        ((void (__fastcall *)(void ***))v12[3])(v10);
        v10 = 0LL;
      }
      else
      {
        ((void (__fastcall *)(void ***))*v12)(v10);
        *a3 = v10;
      }
    }
    if ( &g_MILCacheableResourceDummy != (void ***)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)(v8 + 8 * v9),
                                                     (signed __int64)v10,
                                                     (signed __int64)&g_MILCacheableResourceDummy) )
    {
      if ( v10 )
        ((void (__fastcall *)(void ***))(*v10)[3])(v10);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return 0LL;
}
