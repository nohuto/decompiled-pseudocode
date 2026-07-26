/*
 * XREFs of ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C004318C (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 */

void __fastcall ndisMpHookRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  ndisMRawDirectOidRequestComplete(a1, a2, a3);
}
