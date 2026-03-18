/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C000EA8C
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0012394 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C0151758 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C0010174 (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Create(const struct CSM_REALIZATION_INFO *a1, struct CBufferRealization **a2)
{
  int v2; // eax
  signed int v5; // ebx
  __int64 v6; // rdi
  __int128 v7; // xmm1

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  v5 = -1073741811;
  if ( v2 == 1 )
  {
    if ( *((_QWORD *)a1 + 1) )
      v5 = 0;
  }
  else if ( (unsigned int)(v2 - 2) <= 2 )
  {
    v5 = *((_QWORD *)a1 + 1) == 0LL ? 0xC000000D : 0;
  }
  if ( v5 >= 0 )
  {
    v6 = Win32AllocPool(72LL, 1917670211LL);
    if ( v6 )
    {
      *(_QWORD *)v6 = &CBufferRealization::`vftable';
      *(_OWORD *)(v6 + 24) = *(_OWORD *)a1;
      v7 = *((_OWORD *)a1 + 1);
      *(_QWORD *)(v6 + 56) = 0LL;
      *(_QWORD *)(v6 + 64) = 0LL;
      *(_OWORD *)(v6 + 40) = v7;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v5 = CBufferRealization::Initialize((CBufferRealization *)v6);
      if ( v5 < 0 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      else
        *a2 = (struct CBufferRealization *)v6;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v5;
}
