/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x1C003CE08
 * Callers:
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C01FEAC0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01FF2C0 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0200880 (DxgkMiracastStopAllMiracastSessions.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
