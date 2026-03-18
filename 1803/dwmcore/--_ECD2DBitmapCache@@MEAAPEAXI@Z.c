/*
 * XREFs of ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180179800
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180077B20 (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::`vector deleting destructor'(CD2DBitmapCache *this, char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
