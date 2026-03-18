/*
 * XREFs of DxgkCreateSynchronizationObjectInternal @ 0x1C01C2634
 * Callers:
 *     ?CreateSyncObject@CAdapter@@AEAAJPEAI@Z @ 0x1C004B5B4 (-CreateSyncObject@CAdapter@@AEAAJPEAI@Z.c)
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 0, 0LL);
}
