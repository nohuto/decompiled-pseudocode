/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00132F0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionBeginFrame @ 0x1C0013EE0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C00140C0 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0014320 (NtDCompositionGetConnectionBatch.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00146C8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0014714 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool(this);
  return this;
}
