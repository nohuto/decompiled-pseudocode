/*
 * XREFs of AMLIGetNSObjectNotifyFlag @ 0x1C0028814
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00936CC (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNotifyFlag(__int64 a1)
{
  return (*(unsigned __int8 *)(*(_QWORD *)a1 + 64LL) >> 4) & 1;
}
