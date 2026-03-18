/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C000E7C4
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000E450 (NtBindCompositionSurface.c)
 * Callees:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000E780 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0012394 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0012658 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a2,
        struct CFlipExBuffer **a3)
{
  int v6; // ebx
  CFlipExBuffer *v7; // rax
  CFlipExBuffer *v8; // rdi

  *a3 = 0LL;
  v6 = ValidateBufferAttributes(a1);
  if ( v6 >= 0 )
  {
    v6 = -1073741811;
    if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) <= 2 )
    {
      if ( (unsigned int)(*((_DWORD *)a2 + 7) - 1) <= 0x1E )
        v6 = 0;
      if ( v6 >= 0 )
      {
        v7 = (CFlipExBuffer *)Win32AllocPool(512LL, 1649234755LL);
        if ( v7 )
          v8 = CFlipExBuffer::CFlipExBuffer(v7);
        else
          v8 = 0LL;
        if ( v8 )
        {
          v6 = CFlipExBuffer::Initialize(v8, a1, a2);
          if ( v6 < 0 )
            (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v8)(v8, 1LL);
          else
            *a3 = v8;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v6;
}
