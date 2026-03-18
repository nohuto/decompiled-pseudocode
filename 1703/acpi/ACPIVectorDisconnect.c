/*
 * XREFs of ACPIVectorDisconnect @ 0x1C0058F70
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1C0059070 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C009E008 (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C001F28C (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00200DC (ACPIGpeInstallRemoveIndex.c)
 */

__int64 __fastcall ACPIVectorDisconnect(_BYTE *P)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // ebx

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    14,
    13,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids);
  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v3);
  v4 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)P) + GpeMap);
  if ( v4 < GpeVectorTableSize )
  {
    v5 = 2LL * v4;
    *((_QWORD *)GpeVectorTable + v5 + 1) = 0LL;
    *((_BYTE *)GpeVectorTable + 8 * v5) = GpeVectorFree;
    GpeVectorFree = v4;
  }
  v6 = 0;
  if ( !ACPIGpeInstallRemoveIndex(*(unsigned int *)P, 2, 0, P + 25) )
    v6 = -1073741823;
  ACPIGpeEnableDisableEvents(1, 3221225473LL);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( !v6 )
    ExFreePoolWithTag(P, 0);
  return v6;
}
