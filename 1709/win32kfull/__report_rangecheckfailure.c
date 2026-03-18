/*
 * XREFs of __report_rangecheckfailure @ 0x1C0143570
 * Callers:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C0058E0C (xxxDoSysExpunge.c)
 *     SetAppCompatFlags @ 0x1C00759F0 (SetAppCompatFlags.c)
 *     NtUserRemoteConnect @ 0x1C00DE6C0 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B7D88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C0228554 (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0274B80 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0274D30 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027BFC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C028AE10 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
