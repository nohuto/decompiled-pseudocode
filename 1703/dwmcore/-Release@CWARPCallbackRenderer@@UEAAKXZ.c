/*
 * XREFs of ?Release@CWARPCallbackRenderer@@UEAAKXZ @ 0x1800B3A80
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800D5F10 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPCallbackRenderer::Release(CWARPCallbackRenderer *this)
{
  return CMILRefCountBase::Release((CWARPCallbackRenderer *)((char *)this + 8));
}
