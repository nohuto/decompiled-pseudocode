/*
 * XREFs of ACPIUnload @ 0x1C0021290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WppCleanupKm @ 0x1C0074314 (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  int v2; // edx

  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList(&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( E820Info )
    ExFreePoolWithTag(E820Info, 0);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    6,
    18,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids);
  return WppCleanupKm(a1);
}
