/*
 * XREFs of ACPIUnload @ 0x1C004BEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  int v2; // edx

  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( Src )
    ExFreePoolWithTag((PVOID)Src, 0);
  if ( E820Info )
    ExFreePoolWithTag((PVOID)E820Info, 0);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    6,
    18,
    (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids);
  return WppCleanupKm(a1);
}
