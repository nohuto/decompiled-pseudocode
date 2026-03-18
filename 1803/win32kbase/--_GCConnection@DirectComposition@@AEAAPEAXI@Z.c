/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0045910 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionBeginFrame @ 0x1C0045BE0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C0045DE0 (NtDCompositionConfirmFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0047040 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0047250 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionRetireFrame @ 0x1C005AFC0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C005B1B0 (NtDCompositionDiscardFrame.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0144030 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool((__int64)this);
  return this;
}
