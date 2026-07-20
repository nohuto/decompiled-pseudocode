/*
 * XREFs of memcpy_0 @ 0x14000C867
 * Callers:
 *     SmpParseToken @ 0x140002A50 (SmpParseToken.c)
 *     SmpConfigureEnvironment @ 0x140004F10 (SmpConfigureEnvironment.c)
 *     SmpConfigureSharedSessionData @ 0x140006178 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140006650 (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x140008C70 (SmpSaveRegistryValue_U.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F8DC (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x140011DB0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x1400126A0 (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
