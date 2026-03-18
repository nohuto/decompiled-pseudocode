/*
 * XREFs of __report_rangecheckfailure @ 0x1C0195CE0
 * Callers:
 *     SetAppCompatFlags @ 0x1C0018610 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C00D9358 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C00F48CC (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0116CD0 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B4B50 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C0226FD0 (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02781B0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0278360 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F494 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C028E290 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
