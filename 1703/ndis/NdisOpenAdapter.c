/*
 * XREFs of NdisOpenAdapter @ 0x1C01033A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 */

void __fastcall NdisOpenAdapter(
        _DWORD *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        const UNICODE_STRING *a9)
{
  char v9; // [rsp+48h] [rbp-20h]
  KIRQL v10; // [rsp+50h] [rbp-18h]

  ndisOpenAdapterLegacyProtocol(a1, a2, a3, a4, a5, a6, a7, a8, a9, v9, v10, 0LL);
}
