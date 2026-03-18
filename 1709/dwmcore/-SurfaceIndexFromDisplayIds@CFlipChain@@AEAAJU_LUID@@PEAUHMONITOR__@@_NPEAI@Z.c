/*
 * XREFs of ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165E24
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180164CB4 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165228 (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 */

__int64 __fastcall CFlipChain::SurfaceIndexFromDisplayIds(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  __int64 v10; // r9
  __int64 v11; // rcx
  signed int SurfaceIndexForDisplayIds; // eax

  v5 = *((_DWORD *)this + 64);
  v6 = 0;
  v7 = 0;
  if ( v5 )
  {
    v10 = *((_QWORD *)this + 29);
    while ( 1 )
    {
      v11 = 88LL * v7;
      if ( *(_QWORD *)(v11 + v10) == a2 && *(HMONITOR *)(v11 + v10 + 8) == a3 && *(_BYTE *)(v11 + v10 + 16) == a4 )
        break;
      if ( ++v7 >= v5 )
        goto LABEL_9;
    }
    *a5 = v7;
  }
LABEL_9:
  if ( v7 == v5 )
  {
    SurfaceIndexForDisplayIds = CFlipChain::CreateSurfaceIndexForDisplayIds(this, a2, a3, a4, a5);
    v6 = SurfaceIndexForDisplayIds;
    if ( SurfaceIndexForDisplayIds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SurfaceIndexForDisplayIds, 0x462u);
  }
  return v6;
}
