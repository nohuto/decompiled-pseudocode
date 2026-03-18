/*
 * XREFs of LockVerifierSection @ 0x1C0080D88
 * Callers:
 *     FxInitialize @ 0x1C00158D0 (FxInitialize.c)
 *     FxLibraryCommonRegisterClient @ 0x1C0015A64 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     WPP_IFR_SF_dZq @ 0x1C0080FD4 (WPP_IFR_SF_dZq.c)
 */

void __fastcall LockVerifierSection(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath,
        unsigned int a3)
{
  int globals; // ebx
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  const _GUID *v8; // [rsp+20h] [rbp-28h]

  globals = _InterlockedIncrement(&FxLibraryGlobals.VerifierSectionHandleRefCount);
  if ( FxLibraryGlobals.VerifierSectionHandle )
  {
    MmLockPagableSectionByHandle(FxLibraryGlobals.VerifierSectionHandle);
    WPP_IFR_SF_dZq(FxDriverGlobals, v6, v7, 0xBu, v8, globals, RegistryPath, FxDriverGlobals);
  }
  else
  {
    WPP_IFR_SF_dZq(FxDriverGlobals, (unsigned __int8)RegistryPath, a3, 0xAu, v8, globals, RegistryPath, FxDriverGlobals);
    FxLibraryGlobals.VerifierSectionHandle = MmLockPagableDataSection(VerifierPageLockHandle);
  }
}
