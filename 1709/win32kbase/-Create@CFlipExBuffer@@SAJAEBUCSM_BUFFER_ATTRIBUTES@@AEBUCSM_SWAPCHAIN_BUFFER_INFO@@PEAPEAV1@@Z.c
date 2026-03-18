/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0020BFC
 * Callers:
 *     NtBindCompositionSurface @ 0x1C0020870 (NtBindCompositionSurface.c)
 * Callees:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0020BB8 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0039F14 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C003A1D8 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a2,
        struct CFlipExBuffer **a3)
{
  signed int v6; // ebx
  unsigned int v7; // ecx
  CFlipExBuffer *v8; // rax
  CFlipExBuffer *v9; // rdi

  *a3 = 0LL;
  v6 = ValidateBufferAttributes(a1);
  if ( v6 >= 0 )
  {
    v6 = -1073741811;
    if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) <= 2 )
    {
      v7 = *((_DWORD *)a2 + 7) - 1;
      v6 = v7 > 0x1E ? 0xC000000D : 0;
      if ( v7 <= 0x1E )
      {
        v8 = (CFlipExBuffer *)Win32AllocPool(512LL, 1649234755LL);
        if ( v8 )
          v9 = CFlipExBuffer::CFlipExBuffer(v8);
        else
          v9 = 0LL;
        if ( v9 )
        {
          v6 = CFlipExBuffer::Initialize(v9, a1, a2);
          if ( v6 < 0 )
            (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v9)(v9, 1LL);
          else
            *a3 = v9;
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
