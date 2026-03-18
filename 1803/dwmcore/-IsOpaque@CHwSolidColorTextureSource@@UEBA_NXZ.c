/*
 * XREFs of ?IsOpaque@CHwSolidColorTextureSource@@UEBA_NXZ @ 0x1801EA270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwSolidColorTextureSource::IsOpaque(CHwSolidColorTextureSource *this)
{
  return *((float *)this + 34) >= 1.0;
}
