/*
 * XREFs of ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00783D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisMpHookRawIndicateStatus(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_STATUS_INDICATION *a2)
{
  ndisMRawIndicateStatusEx(a1, a2);
}
