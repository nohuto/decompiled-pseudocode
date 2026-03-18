/*
 * XREFs of ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00DA950
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 */

__int64 __fastcall DxgkCddCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  if ( a1->Info.Type == D3DDDI_MONITORED_FENCE )
    a1->Info.Flags.Value |= 0x80u;
  return DxgkCreateSynchronizationObjectImpl(a1, 0, 0LL);
}
