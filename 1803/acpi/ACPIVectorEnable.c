/*
 * XREFs of ACPIVectorEnable @ 0x1C003FC10
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x1C0021BF8 (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable2 @ 0x1C003FCD0 (ACPIVectorEnable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorEnable(__int64 a1, unsigned int *a2)
{
  int v2; // ebp
  int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rdx
  void *v7; // rdx
  int v8; // edx

  v2 = *a2;
  v3 = 1 << (*a2 & 7);
  v4 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v6);
  *((_BYTE *)GpeEnable + v4) |= v3;
  v7 = GpeCurEnable;
  *((_BYTE *)GpeCurEnable + v4) |= v3;
  ACPIGpeEnableDisableEvents(1, (__int64)v7);
  KeReleaseSpinLock(&GpeTableLock, v5);
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    14,
    14,
    (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids,
    v2);
  return 0LL;
}
