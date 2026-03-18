/*
 * XREFs of ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18001D190
 * Callers:
 *     ??_ECHWCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800C7280 (--_ECHWCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18001D050 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::`scalar deleting destructor'(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = (char)a2;
  CHWCallbackRenderer::~CHWCallbackRenderer(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
