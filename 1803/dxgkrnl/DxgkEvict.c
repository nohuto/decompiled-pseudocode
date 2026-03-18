/*
 * XREFs of DxgkEvict @ 0x1C00D5E20
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D5E3C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

__int64 __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1)
{
  return DxgkEvictInternal(a1, 1);
}
