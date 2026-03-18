/*
 * XREFs of ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18008F22C
 * Callers:
 *     ??_ECHWCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800D68D0 (--_ECHWCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008F094 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::`scalar deleting destructor'(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CHWCallbackRenderer::~CHWCallbackRenderer(this, a2);
  if ( (v2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
