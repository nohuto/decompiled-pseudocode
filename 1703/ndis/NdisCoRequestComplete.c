/*
 * XREFs of NdisCoRequestComplete @ 0x1C0108710
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C0052A20 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0106F50 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCoRequest @ 0x1C01083E0 (NdisCoRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0052480 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C0108310 (NdisCoOidRequestComplete.c)
 *     ndisDereferenceAf @ 0x1C010958C (ndisDereferenceAf.c)
 */

void __fastcall NdisCoRequestComplete(
        __int64 Status,
        PVOID P,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Pa)
{
  struct _NDIS_OID_REQUEST *v8; // r9

  if ( *((_DWORD *)Pa + 10) == -33554422 && *((_DWORD *)Pa + 8) == 1 )
  {
    if ( *((_DWORD *)P + 98) < 6u )
    {
      (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, PVOID))Pa + 9))(
        Status,
        *((_QWORD *)Pa + 11),
        *((_QWORD *)Pa + 10),
        *((_QWORD *)Pa + 12),
        Pa);
      ndisDereferenceAf(P);
    }
    else
    {
      NdisClNotifyCloseAddressFamilyComplete(P, Status);
    }
  }
  else
  {
    v8 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Pa + 1);
    v8->DATA.QUERY_INFORMATION.BytesWritten = *((_DWORD *)Pa + 15);
    v8->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Pa + 16);
    NdisCoOidRequestComplete(P, NdisVcHandle, NdisPartyHandle, v8, Status);
    ExFreePoolWithTag(Pa, 0);
  }
}
