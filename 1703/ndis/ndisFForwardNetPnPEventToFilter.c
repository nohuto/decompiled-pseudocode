/*
 * XREFs of ndisFForwardNetPnPEventToFilter @ 0x1C00BC09C
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 *     ndisFNotifyDetach @ 0x1C00BF48C (ndisFNotifyDetach.c)
 * Callees:
 *     NdisFNetPnPEvent @ 0x1C0020770 (NdisFNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00B5940 (ndisShallowCopyNetPnPEvent.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisFInvokeNetPnPEvent @ 0x1C00BC170 (ndisFInvokeNetPnPEvent.c)
 */

NDIS_STATUS __fastcall ndisFForwardNetPnPEventToFilter(_QWORD *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 v6; // cl
  __int16 v7; // ax
  int v8; // ebx
  struct NDISWATCHDOG__ *v9; // [rsp+30h] [rbp-D8h] BYREF
  char v10; // [rsp+40h] [rbp-C8h] BYREF
  char v11; // [rsp+41h] [rbp-C7h]
  __int16 v12; // [rsp+42h] [rbp-C6h]
  int v13; // [rsp+48h] [rbp-C0h]
  int v14; // [rsp+E0h] [rbp-28h]

  if ( !*(_QWORD *)(a1[2] + 280LL) )
    return NdisFNetPnPEvent(a1, a2);
  ndisShallowCopyNetPnPEvent((__int64)&v10, (__int64)a2);
  v6 = *(_BYTE *)(v4 + 100);
  if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v4 + 101) >= 0x32u )
  {
    v11 = 2;
    v7 = 172;
  }
  else
  {
    v14 |= 4u;
    v7 = 164;
    v11 = 1;
  }
  v12 = v7;
  ndisMakeWatchdog((struct _NDIS_REFCOUNT_BLOCK **)&v9, a1, (_NDIS_REFCOUNT_STACK_ENTRY)18, v5, v13);
  v8 = ndisFInvokeNetPnPEvent(a1, &v10);
  if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog((struct _NDIS_REFCOUNT_BLOCK *)v9);
  return v8;
}
