/*
 * XREFs of ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x1800CF8BC
 * Callers:
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x1800CF830 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroySomeActiveResources(struct _LIST_ENTRY *this)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx

  v2 = CD3DResourceManager::DestroyListOfResources((CD3DResourceManager *)this, this + 2);
  v3 = CD3DResourceManager::DestroyListOfResources((CD3DResourceManager *)this, this + 3) + v2;
  v4 = CD3DResourceManager::DestroyListOfResources((CD3DResourceManager *)this, this + 4) + v3;
  return v4 + (unsigned int)CD3DResourceManager::DestroyListOfResources((CD3DResourceManager *)this, this + 5);
}
