/*
 * XREFs of KdpSysWriteBusData @ 0x14078B6F4
 * Callers:
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_14033B348)(a2, a3, Buffer);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}
