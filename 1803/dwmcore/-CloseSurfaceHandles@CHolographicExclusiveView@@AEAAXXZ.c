/*
 * XREFs of ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1801F9E38
 * Callers:
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801F9E98 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801FA050 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicExclusiveView::CloseSurfaceHandles(HANDLE *this)
{
  __int64 i; // rsi

  if ( *((_BYTE *)this + 73) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 36); i = (unsigned int)(i + 1) )
    {
      CloseHandle(this[i + 19]);
      this[i + 19] = 0LL;
    }
    *((_DWORD *)this + 36) = 0;
    *((_BYTE *)this + 73) = 0;
  }
}
