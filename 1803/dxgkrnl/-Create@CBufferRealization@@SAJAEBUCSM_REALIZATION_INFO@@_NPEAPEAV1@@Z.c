/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000A300
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0013B3C (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C004CC08 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C000A470 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Create(
        const struct CSM_REALIZATION_INFO *a1,
        bool a2,
        struct CBufferRealization **a3)
{
  int v3; // eax
  signed int v7; // ebx
  char *v8; // rdi
  __int128 v9; // xmm1

  v3 = *(_DWORD *)a1;
  *a3 = 0LL;
  v7 = -1073741811;
  if ( v3 == 1 )
  {
    if ( *((_QWORD *)a1 + 1) )
      v7 = 0;
  }
  else if ( (unsigned int)(v3 - 2) <= 2 )
  {
    v7 = *((_QWORD *)a1 + 1) == 0LL ? 0xC000000D : 0;
  }
  if ( v7 >= 0 )
  {
    v8 = (char *)operator new[](0x48uLL, 0x724D5343u, PagedPool);
    if ( v8 )
    {
      *(_QWORD *)v8 = &CBufferRealization::`vftable';
      *(_OWORD *)(v8 + 24) = *(_OWORD *)a1;
      v9 = *((_OWORD *)a1 + 1);
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *(_OWORD *)(v8 + 40) = v9;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v7 = CBufferRealization::Initialize((CBufferRealization *)v8, a2);
      if ( v7 < 0 )
        (**(void (__fastcall ***)(void *, __int64))v8)(v8, 1LL);
      else
        *a3 = (struct CBufferRealization *)v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v7;
}
