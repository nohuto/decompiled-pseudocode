/*
 * XREFs of ACPIVectorDisconnect @ 0x1C0059A90
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1C0059B90 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C00A0FE0 (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0010514 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00138C0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 */

__int64 __fastcall ACPIVectorDisconnect(unsigned int *P)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // ebx

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    14,
    13,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids);
  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  v5 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(*P, v3, v4) + GpeMap);
  if ( v5 < GpeVectorTableSize )
  {
    v6 = 2LL * v5;
    *((_QWORD *)GpeVectorTable + v6 + 1) = 0LL;
    *((_BYTE *)GpeVectorTable + 8 * v6) = GpeVectorFree;
    GpeVectorFree = v5;
  }
  v7 = 0;
  if ( !ACPIGpeInstallRemoveIndex(*P, 2, 0, (_BYTE *)P + 25) )
    v7 = -1073741823;
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( !v7 )
    ExFreePoolWithTag(P, 0);
  return v7;
}
