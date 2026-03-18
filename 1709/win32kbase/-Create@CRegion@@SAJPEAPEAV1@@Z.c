/*
 * XREFs of ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C00259F0
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C0021034 (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C0021128 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00256C8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C0025910 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0039F14 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C0152BC8 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CRegion::Create(struct CRegion **a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  v2 = Win32AllocPool(16LL, 1852273223LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_DWORD *)v2 = 1;
    *a1 = (struct CRegion *)v2;
  }
  return v2 == 0 ? 0xC0000017 : 0;
}
