/*
 * XREFs of ndisQueryDeviceOid @ 0x1C00A6220
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ndisQueryStatisticsOids @ 0x1C00A5E9C (ndisQueryStatisticsOids.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisQueryDeviceOid(__int64 a1, _DWORD *a2, int a3, __int64 a4, int a5)
{
  void *v5; // rsi

  v5 = *(void **)(a1 + 16);
  memset(a2, 0, 0xF8uLL);
  a2[22] |= 8u;
  *((_QWORD *)a2 + 13) = &ndisIntReqIoctl;
  *(_QWORD *)(a2 + 13) = 0LL;
  *a2 = 15466902;
  a2[8] = a3;
  *(_QWORD *)(a2 + 1) = 2LL;
  *((_QWORD *)a2 + 5) = a4;
  a2[12] = a5;
  return ndisQuerySetMiniport(v5, 0LL, (struct _NDIS_OID_REQUEST *)a2, 0LL, 0LL);
}
