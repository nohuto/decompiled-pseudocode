/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0038FEC
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C008A230 (NtUnBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0038AFC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0038C64 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  struct CCompositionBuffer *ActiveBuffer; // rax

  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      *((_BYTE *)ActiveBuffer + 40) = 0;
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}
