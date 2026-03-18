/*
 * XREFs of ?UnusableNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1801A28B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::UnusableNotification(CHwBrushPoolManager *this, struct CMILPoolResource *a2)
{
  CHwBrushPoolManager::Remove(
    this,
    (struct CHwCacheablePoolBrush *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)));
}
