/*
 * XREFs of IsNsobjPciBus @ 0x1C007FC90
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007C600 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     ACPIInternalIsPci @ 0x1C007D908 (ACPIInternalIsPci.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C007FD48 (IsPciBus.c)
 *     IsPciBusExtension @ 0x1C007FD68 (IsPciBusExtension.c)
 * Callees:
 *     IsPciBusAsync @ 0x1C00313DC (IsPciBusAsync.c)
 *     AMLIGetNSObjectContext @ 0x1C0043A24 (AMLIGetNSObjectContext.c)
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
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 0x2000000) != 0 )
    return 1;
  if ( (v3 & 0x100000000LL) != 0 )
    return 0;
LABEL_6:
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
