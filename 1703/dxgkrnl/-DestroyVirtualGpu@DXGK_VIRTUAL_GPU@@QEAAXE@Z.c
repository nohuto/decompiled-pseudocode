/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50
 * Callers:
 *     ??_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z @ 0x1C0026144 (--_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z.c)
 *     ?DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0029D1C (-DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002A06C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGK_VIRTUAL_GPU::DestroyVirtualGpu(DXGK_VIRTUAL_GPU *this, char a2)
{
  __int64 i; // rdi
  struct DXGALLOCATION **v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rcx

  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    {
      v4 = (struct DXGALLOCATION **)(*((_QWORD *)this + 14) + 8 * i);
      if ( *v4 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 10),
          1u,
          v4,
          0LL,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i) = 0LL;
      }
    }
  }
  operator delete[](*((void **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 18) = 0;
  DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU *)((char *)this + 128));
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = (_QWORD *)((char *)this + 96);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5 + 464, 0LL);
    *(_QWORD *)(v5 + 472) = KeGetCurrentThread();
    v7 = *((_QWORD *)this + 12);
    if ( v7 )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 13);
      if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)this + 13) = 0LL;
      *v6 = 0LL;
    }
    *(_QWORD *)(v5 + 472) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 464, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)this + 11) = 0LL;
  }
}
