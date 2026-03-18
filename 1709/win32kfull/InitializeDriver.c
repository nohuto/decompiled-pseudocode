/*
 * XREFs of InitializeDriver @ 0x1C02889E8
 * Callers:
 *     atmfdFontManagement @ 0x1C0288C4C (atmfdFontManagement.c)
 *     atmfdLoadFontFile @ 0x1C0288D10 (atmfdLoadFontFile.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     EngFindImageProcAddress @ 0x1C024C410 (EngFindImageProcAddress.c)
 *     EngLoadImage @ 0x1C024C6B0 (EngLoadImage.c)
 *     FindFunc @ 0x1C02889AC (FindFunc.c)
 */

__int64 InitializeDriver()
{
  unsigned int v0; // ebx
  HANDLE Image; // rax
  unsigned int (__fastcall *ImageProcAddress)(_QWORD, __int64, int *); // rax

  v0 = 0;
  GreAcquireSemaphore(ghsemAtmfdInit);
  if ( atmfdHandle )
    goto LABEL_22;
  if ( driverFailedLoad == 1 )
    goto LABEL_23;
  Image = EngLoadImage((LPWSTR)L"ATMFD.DLL");
  atmfdHandle = (__int64)Image;
  if ( !Image )
    goto LABEL_23;
  ImageProcAddress = (unsigned int (__fastcall *)(_QWORD, __int64, int *))EngFindImageProcAddress(
                                                                            Image,
                                                                            (LPSTR)"DrvEnableDriver");
  pAtmfdEnableDriver = (__int64)ImageProcAddress;
  if ( !ImageProcAddress )
    goto LABEL_23;
  if ( !ImageProcAddress((unsigned int)engineVersion, 16LL, &atmfdFuncData) )
    goto LABEL_23;
  if ( atmfdFuncData != 196608 )
    goto LABEL_23;
  pAtmfdLoadFontFile = FindFunc(45);
  if ( !pAtmfdLoadFontFile )
    goto LABEL_23;
  pAtmfdUnloadFontFile = FindFunc(46);
  if ( !pAtmfdUnloadFontFile )
    goto LABEL_23;
  pAtmfdQueryFontFile = FindFunc(51);
  if ( !pAtmfdQueryFontFile )
    goto LABEL_23;
  pAtmfdQueryFont = FindFunc(26);
  if ( !pAtmfdQueryFont )
    goto LABEL_23;
  pAtmfdFree = FindFunc(42);
  if ( !pAtmfdFree )
    goto LABEL_23;
  pAtmfdQueryFontTree = FindFunc(27);
  if ( !pAtmfdQueryFontTree )
    goto LABEL_23;
  pAtmfdQueryFontData = FindFunc(28);
  if ( !pAtmfdQueryFontData )
    goto LABEL_23;
  pAtmfdDestroyFont = FindFunc(43);
  if ( !pAtmfdDestroyFont )
    goto LABEL_23;
  pAtmfdQueryAdvanceWidths = FindFunc(53);
  if ( pAtmfdQueryAdvanceWidths
    && (pAtmfdQueryTrueTypeOutline = FindFunc(49)) != 0
    && (pAtmfdQueryTrueTypeTable = FindFunc(48)) != 0
    && (pAtmfdEscape = FindFunc(24)) != 0
    && (pAtmfdFontManagement = FindFunc(47)) != 0
    && (pAtmfdGetTrueTypeFile = FindFunc(50)) != 0
    && (pAtmfdQueryGlyphAttrs = FindFunc(86)) != 0 )
  {
LABEL_22:
    v0 = 1;
  }
  else
  {
LABEL_23:
    driverFailedLoad = 1;
    if ( atmfdHandle )
    {
      ldevUnloadImage(atmfdHandle);
      atmfdHandle = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemAtmfdInit", ghsemAtmfdInit);
  GreReleaseSemaphoreInternal(ghsemAtmfdInit);
  return v0;
}
