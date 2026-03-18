/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0011820
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0082950 (NtUnBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C001158C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0011670 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
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
