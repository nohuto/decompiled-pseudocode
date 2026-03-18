/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18013E76C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C450 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CBE8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(CRemoteAppRenderTarget *this, bool *a2)
{
  unsigned int v2; // edi
  CDirtyRegion *v5; // rcx
  CRemoteAppRenderTarget *v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax

  v2 = 0;
  *((_BYTE *)this + 241) = 0;
  v5 = (CDirtyRegion *)*((_QWORD *)this + 16);
  if ( v5 && !CDirtyRegion::IsEmpty(v5) )
  {
    CRemoteAppRenderTarget::CalcOcclusion((CRemoteAppRenderTarget *)((char *)this - 64));
    v6 = (CRemoteAppRenderTarget *)((char *)this - 64);
    if ( *((_BYTE *)this + 240) )
    {
      v7 = CRemoteAppRenderTarget::RenderDirtyRegion(v6);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x9Eu);
        goto LABEL_9;
      }
    }
    else
    {
      v8 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(v6);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xA4u);
        goto LABEL_9;
      }
    }
    *((_BYTE *)this + 241) = 1;
  }
LABEL_9:
  *a2 = *((_BYTE *)this + 241);
  result = v2;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
