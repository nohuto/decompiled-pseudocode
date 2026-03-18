/*
 * XREFs of ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x1800DA320
 * Callers:
 *     ??_ECHWCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800DE960 (--_ECHWCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x1800DA270 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CHWCallbackRenderer *__fastcall CHWCallbackRenderer::`scalar deleting destructor'(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CHWCallbackRenderer::~CHWCallbackRenderer(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
