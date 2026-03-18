/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C00A1850
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 */

int __fastcall DxgkCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1, 0LL);
}
