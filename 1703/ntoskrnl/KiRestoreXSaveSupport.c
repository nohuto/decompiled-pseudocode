/*
 * XREFs of KiRestoreXSaveSupport @ 0x14040832C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140137D68 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KiRestoreXSaveSupport(__int64 a1, __int64 a2)
{
  return KiEnableXSave(a1, a2);
}
