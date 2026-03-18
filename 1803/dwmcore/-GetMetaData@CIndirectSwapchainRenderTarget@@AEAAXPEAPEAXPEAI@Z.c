/*
 * XREFs of ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18015977C
 * Callers:
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159CC0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::GetMetaData(
        CIndirectSwapchainRenderTarget *this,
        void **a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  void *v4; // rax

  v3 = *((_DWORD *)this + 126);
  v4 = 0LL;
  if ( v3 )
    v4 = (void *)*((_QWORD *)this + 60);
  *a2 = v4;
  *a3 = v3;
}
