/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x18013F4A4
 * Callers:
 *     ?IsNonEmptyOverNormalizedRange@CColorKey@@QEBA_NXZ @ 0x18020F87C (-IsNonEmptyOverNormalizedRange@CColorKey@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
