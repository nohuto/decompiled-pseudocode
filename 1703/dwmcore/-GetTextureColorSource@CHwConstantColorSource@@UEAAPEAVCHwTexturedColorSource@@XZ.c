/*
 * XREFs of ?GetTextureColorSource@CHwConstantColorSource@@UEAAPEAVCHwTexturedColorSource@@XZ @ 0x1800CCF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CHwTexturedColorSource *__fastcall CHwConstantColorSource::GetTextureColorSource(CHwConstantColorSource *this)
{
  return (struct CHwTexturedColorSource *)*((_QWORD *)this + 3);
}
