/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A4B38
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A48CC (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801A4BB8 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  if ( v1 )
    v4 = *(_QWORD *)(v1 + 464);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 15);
    if ( v5 )
    {
      *((_QWORD *)this + 14) = *(_QWORD *)(v4 + 56);
      v6 = NtOpenCompositionSurfaceSwapChainHandleInfo(v5, (char *)this + 112, (char *)this + 128);
      if ( v6 >= 0 )
      {
        *((_BYTE *)this + 73) = 1;
      }
      else
      {
        v2 = v6 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x1BBu);
      }
    }
  }
  return v2;
}
