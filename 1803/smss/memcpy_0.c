/*
 * XREFs of memcpy_0 @ 0x14000CA47
 * Callers:
 *     SmpParseToken @ 0x140002A50 (SmpParseToken.c)
 *     SmpConfigureEnvironment @ 0x140004F20 (SmpConfigureEnvironment.c)
 *     SmpConfigureSharedSessionData @ 0x140005FBC (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x14000649C (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x140008A20 (SmpSaveRegistryValue_U.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F924 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x140011FC0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x1400128AC (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
