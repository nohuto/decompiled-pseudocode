/*
 * XREFs of ?AreActiveResources@CD3DResourceManager@@QEBA_NXZ @ 0x18004D178
 * Callers:
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CD3DResourceManager::AreActiveResources(CD3DResourceManager **this)
{
  return this[4] != (CD3DResourceManager *)(this + 4)
      || this[6] != (CD3DResourceManager *)(this + 6)
      || this[8] != (CD3DResourceManager *)(this + 8)
      || this[10] != (CD3DResourceManager *)(this + 10);
}
