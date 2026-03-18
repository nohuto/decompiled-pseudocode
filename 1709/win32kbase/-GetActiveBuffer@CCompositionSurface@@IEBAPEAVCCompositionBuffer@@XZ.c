/*
 * XREFs of ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0038C64
 * Callers:
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00256C8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0038F70 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0038FEC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0039064 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015272C (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetActiveBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_QWORD *)this + 8) - 24LL;
    if ( *(_BYTE *)(v2 + 40) )
      return (struct CCompositionBuffer *)v2;
  }
  return result;
}
