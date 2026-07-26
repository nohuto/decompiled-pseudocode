/*
 * XREFs of ndisFNotifyDetach @ 0x1C00B2934
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C00122E0 (ndisReferenceRef.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B101C (ndisFForwardNetPnPEventToFilter.c)
 */

char __fastcall ndisFNotifyDetach(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+20h] [rbp-C8h] BYREF

  v5.PortNumber = 0;
  v5.Header = (_NDIS_OBJECT_HEADER)10748288;
  v5.NetPnPEvent.NetEvent = NetEventFilterPreDetach;
  memset(&v5.NetPnPEvent.Buffer, 0, 0xA0uLL);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(v2 + 100);
  if ( (v3 > 6u || v3 == 6 && *(_BYTE *)(v2 + 101) >= 0x1Eu) && (*(_DWORD *)(a1 + 56) & 0x10000) == 0 )
  {
    LOBYTE(v2) = ndisReferenceRef((KSPIN_LOCK *)(a1 + 320));
    if ( (_BYTE)v2 )
    {
      ndisFForwardNetPnPEventToFilter((_QWORD *)a1, &v5);
      LOBYTE(v2) = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 320), 0x15u);
    }
  }
  *(_DWORD *)(a1 + 56) |= 0x10000u;
  return v2;
}
