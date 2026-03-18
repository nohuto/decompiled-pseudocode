/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x1C003E19C
 * Callers:
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C0102E30 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C01C6FF0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01C77A0 (DpiMiracastGetDeviceContextFromName.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
