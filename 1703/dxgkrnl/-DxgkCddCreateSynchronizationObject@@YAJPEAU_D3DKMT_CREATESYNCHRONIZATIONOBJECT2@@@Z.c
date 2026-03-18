/*
 * XREFs of ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00FD800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddCreateSynchronizationObject(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  if ( a1->Info.Type == D3DDDI_MONITORED_FENCE )
    a1->Info.Flags.Value |= 0x80u;
  return DxgkCreateSynchronizationObjectInternal(a1, 0, a3);
}
