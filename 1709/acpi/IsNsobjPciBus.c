/*
 * XREFs of IsNsobjPciBus @ 0x1C008CD04
 * Callers:
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C0085C04 (IsPciBusExtension.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIInternalIsPci @ 0x1C0096F54 (ACPIInternalIsPci.c)
 *     IsPciBus @ 0x1C0097174 (IsPciBus.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00A2270 (ACPIFilterIrpStopDevice.c)
 * Callees:
 *     AMLIGetNSObjectContext @ 0x1C000F344 (AMLIGetNSObjectContext.c)
 *     IsPciBusAsync @ 0x1C0015770 (IsPciBusAsync.c)
 */

char __fastcall IsNsobjPciBus(volatile signed __int32 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  char v7; // [rsp+68h] [rbp+10h] BYREF

  v2 = AMLIGetNSObjectContext((__int64)a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x2000000) != 0 )
      return 1;
    if ( (v3 & 0x100000000LL) != 0 )
      return 0;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = -1073741275;
  v7 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)&Event, &v7) != 259 )
    return v7;
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v7;
  if ( v6 < 0 )
    return 0;
  return result;
}
