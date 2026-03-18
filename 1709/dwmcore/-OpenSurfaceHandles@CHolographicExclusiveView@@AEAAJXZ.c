/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1801BD988
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801BD650 (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801BDA40 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    v4 = *(_QWORD *)(v1 + 88);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      *((_QWORD *)this + 16) = *(_QWORD *)(v4 + 56);
      v6 = NtOpenCompositionSurfaceSwapChainHandleInfo(v5, (char *)this + 128, (char *)this + 144);
      if ( v6 >= 0 )
      {
        *((_BYTE *)this + 73) = 1;
      }
      else
      {
        v2 = v6 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6 | 0x10000000, 0x221u);
      }
    }
  }
  return v2;
}
