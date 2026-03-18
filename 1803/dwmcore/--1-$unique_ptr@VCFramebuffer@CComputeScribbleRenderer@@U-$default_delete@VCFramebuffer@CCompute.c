/*
 * XREFs of ??1?$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U?$default_delete@VCFramebuffer@CComputeScribbleRenderer@@@std@@@std@@QEAA@XZ @ 0x180218980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x180218A48 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleRenderer::CFramebuffer>::~unique_ptr<CComputeScribbleRenderer::CFramebuffer>(
        CComputeScribbleRenderer::CFramebuffer **a1)
{
  CComputeScribbleRenderer::CFramebuffer *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(*a1);
    operator delete(v1);
  }
}
