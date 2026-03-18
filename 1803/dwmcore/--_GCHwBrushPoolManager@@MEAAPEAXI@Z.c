/*
 * XREFs of ??_GCHwBrushPoolManager@@MEAAPEAXI@Z @ 0x1801F6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800D998C (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CHwBrushPoolManager *__fastcall CHwBrushPoolManager::`scalar deleting destructor'(CHwBrushPoolManager *this, char a2)
{
  *(_QWORD *)this = &CHwBrushPoolManager::`vftable';
  CHwBrushPoolManager::ReleaseUnusedBrushes(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
