/*
 * XREFs of ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180154664
 * Callers:
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x18006E120 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::SetRedrawRects(CDirtyRegion *this)
{
  __int64 v1; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = 0LL;
  if ( !*((_BYTE *)this + 824) )
  {
    if ( *((_DWORD *)this + 280) )
    {
      do
      {
        v3 = 2 * (v1 + 60);
        v4 = 2LL * (unsigned int)v1;
        v1 = (unsigned int)(v1 + 1);
        *(_OWORD *)((char *)this + 8 * v4 + 828) = *(_OWORD *)((char *)this + 8 * v3);
      }
      while ( (unsigned int)v1 < *((_DWORD *)this + 280) );
    }
    *((_DWORD *)this + 239) = *((_DWORD *)this + 280);
    *((_BYTE *)this + 824) = 1;
  }
}
