/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0006758
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0005330 (NtQueryCompositionSurfaceStatistics.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011670 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  int v2; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v4; // rdx
  void *v5; // r9

  v2 = -1073741823;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  if ( !ActiveBuffer )
    goto LABEL_6;
  if ( *((_BYTE *)ActiveBuffer + 41) )
  {
    v2 = 0;
    *(_OWORD *)v4 = *(_OWORD *)((char *)ActiveBuffer + 168);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)((char *)ActiveBuffer + 184);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)((char *)ActiveBuffer + 200);
    *(_QWORD *)(v4 + 48) = *((_QWORD *)ActiveBuffer + 27);
  }
  if ( v2 < 0 )
LABEL_6:
    memset(v5, 0, 0x38uLL);
  return (unsigned int)v2;
}
