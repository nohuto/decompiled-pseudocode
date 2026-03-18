/*
 * XREFs of ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x1801F6D78
 * Callers:
 *     ??_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z @ 0x1800DE5B0 (--_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x1801F6D28 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
 */

CHwCacheablePoolBrush *__fastcall CHwCacheablePoolBrush::`scalar deleting destructor'(
        CHwCacheablePoolBrush *this,
        char a2)
{
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
