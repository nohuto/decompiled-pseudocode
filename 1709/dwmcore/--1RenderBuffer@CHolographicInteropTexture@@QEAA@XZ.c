/*
 * XREFs of ??1RenderBuffer@CHolographicInteropTexture@@QEAA@XZ @ 0x1801BE300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::RenderBuffer::~RenderBuffer(void **this)
{
  FastRegion::CRegion::FreeMemory(this + 2);
}
