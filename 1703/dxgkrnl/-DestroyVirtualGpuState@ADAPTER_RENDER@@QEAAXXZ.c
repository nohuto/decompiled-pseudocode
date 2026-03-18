/*
 * XREFs of ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002A06C
 * Callers:
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C002A73C (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0027454 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyVirtualGpuState(ADAPTER_RENDER *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  _DXGKARG_DESTROYVIRTUALGPU v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 142) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 282); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 142) + 8 * i);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 120) )
        {
          v4.PartitionId = i;
          ADAPTER_RENDER::DdiDestroyVirtualGpu(this, &v4);
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 142) + 8 * i) + 120LL) = 0;
        }
        DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*(DXGK_VIRTUAL_GPU **)(*((_QWORD *)this + 142) + 8 * i), 0);
      }
    }
    operator delete[](*((void **)this + 142));
    *((_QWORD *)this + 142) = 0LL;
  }
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_DWORD *)this + 282) = 0;
}
