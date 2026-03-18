/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXE@Z @ 0x1C018F130
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_GPUP@@UEAA@XZ @ 0x1C0024C5C (--1DXGK_VIRTUAL_GPU_GPUP@@UEAA@XZ.c)
 * Callees:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_GPUP *this, char a2)
{
  __int64 i; // rdi
  struct DXGALLOCATION **v4; // r8
  void *v5; // rcx

  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v4 = (struct DXGALLOCATION **)(*((_QWORD *)this + 16) + 8 * i);
      if ( *v4 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 15),
          1u,
          v4,
          0LL,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
        *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i) = 0LL;
      }
    }
  }
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 28) = 0;
}
