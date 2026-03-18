/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C000A234
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000A650 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0013B3C (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0013E50 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a2,
        bool a3,
        struct CFlipExBuffer **a4)
{
  signed int v8; // ebx
  unsigned int v9; // ecx
  CFlipExBuffer *v10; // rax
  CFlipExBuffer *v11; // rdi

  *a4 = 0LL;
  v8 = ValidateBufferAttributes(a1);
  if ( v8 >= 0 )
  {
    v8 = -1073741811;
    if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) <= 2 )
    {
      v9 = *((_DWORD *)a2 + 7) - 1;
      v8 = v9 > 0x1E ? 0xC000000D : 0;
      if ( v9 <= 0x1E )
      {
        v10 = (CFlipExBuffer *)operator new[](0x288uLL, 0x624D5343u, PagedPool);
        if ( v10 )
          v11 = CFlipExBuffer::CFlipExBuffer(v10);
        else
          v11 = 0LL;
        if ( v11 )
        {
          v8 = CFlipExBuffer::Initialize(v11, a1, a2, a3);
          if ( v8 < 0 )
            (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v11)(v11, 1LL);
          else
            *a4 = v11;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v8;
}
