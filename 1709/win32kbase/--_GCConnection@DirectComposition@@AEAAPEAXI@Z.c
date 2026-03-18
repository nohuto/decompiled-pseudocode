/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0036640 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00368E0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0036B40 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionConfirmFrame @ 0x1C0036EF0 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C0037150 (NtDCompositionBeginFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0037330 (NtDCompositionDiscardFrame.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00349C0 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  DirectComposition::CConnection::~CConnection(this);
  Win32FreePool(this, v2, v3);
  return this;
}
