/*
 * XREFs of DxgkCreateSynchronizationObject @ 0x1C00A3030
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObject(
        struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkCreateSynchronizationObjectInternal(a1, 1LL, a3);
}
