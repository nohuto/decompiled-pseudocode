/*
 * XREFs of InitializeDriver @ 0x1C028BED4
 * Callers:
 *     atmfdFontManagement @ 0x1C028C134 (atmfdFontManagement.c)
 *     atmfdLoadFontFile @ 0x1C028C200 (atmfdLoadFontFile.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     EngFindImageProcAddress @ 0x1C024AB20 (EngFindImageProcAddress.c)
 *     EngLoadImage @ 0x1C024ADC0 (EngLoadImage.c)
 *     FindFunc @ 0x1C028BEA0 (FindFunc.c)
 */

__int64 InitializeDriver()
{
  unsigned int v0; // ebx
  HANDLE Image; // rax
  unsigned int (__fastcall *ImageProcAddress)(_QWORD, __int64, int *); // rax

  v0 = 0;
  GreAcquireSemaphore(ghsemAtmfdInit);
  Image = (HANDLE)atmfdHandle;
  if ( atmfdHandle )
    goto LABEL_22;
  if ( driverFailedLoad != 1 )
  {
    Image = EngLoadImage((LPWSTR)L"ATMFD.DLL");
    atmfdHandle = (__int64)Image;
    if ( Image )
    {
      ImageProcAddress = (unsigned int (__fastcall *)(_QWORD, __int64, int *))EngFindImageProcAddress(
                                                                                Image,
                                                                                (LPSTR)"DrvEnableDriver");
      pAtmfdEnableDriver = (__int64)ImageProcAddress;
      if ( ImageProcAddress )
      {
        if ( ImageProcAddress((unsigned int)engineVersion, 16LL, &atmfdFuncData) )
        {
          if ( atmfdFuncData == 196608 )
          {
            pAtmfdLoadFontFile = FindFunc(45);
            if ( pAtmfdLoadFontFile )
            {
              pAtmfdUnloadFontFile = FindFunc(46);
              if ( pAtmfdUnloadFontFile )
              {
                pAtmfdQueryFontFile = FindFunc(51);
                if ( pAtmfdQueryFontFile )
                {
                  pAtmfdQueryFont = FindFunc(26);
                  if ( pAtmfdQueryFont )
                  {
                    pAtmfdFree = FindFunc(42);
                    if ( pAtmfdFree )
                    {
                      pAtmfdQueryFontTree = FindFunc(27);
                      if ( pAtmfdQueryFontTree )
                      {
                        pAtmfdQueryFontData = FindFunc(28);
                        if ( pAtmfdQueryFontData )
                        {
                          pAtmfdDestroyFont = FindFunc(43);
                          if ( pAtmfdDestroyFont )
                          {
                            pAtmfdQueryAdvanceWidths = FindFunc(53);
                            if ( pAtmfdQueryAdvanceWidths )
                            {
                              pAtmfdQueryTrueTypeOutline = FindFunc(49);
                              if ( pAtmfdQueryTrueTypeOutline )
                              {
                                pAtmfdQueryTrueTypeTable = FindFunc(48);
                                if ( pAtmfdQueryTrueTypeTable )
                                {
                                  pAtmfdEscape = FindFunc(24);
                                  if ( pAtmfdEscape )
                                  {
                                    pAtmfdFontManagement = FindFunc(47);
                                    if ( pAtmfdFontManagement )
                                    {
                                      pAtmfdGetTrueTypeFile = FindFunc(50);
                                      if ( pAtmfdGetTrueTypeFile )
                                      {
                                        pAtmfdQueryGlyphAttrs = FindFunc(86);
                                        if ( pAtmfdQueryGlyphAttrs )
                                        {
LABEL_22:
                                          v0 = 1;
                                          goto LABEL_26;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      Image = (HANDLE)atmfdHandle;
    }
  }
  driverFailedLoad = 1;
  if ( Image )
  {
    ldevUnloadImage(Image);
    atmfdHandle = 0LL;
  }
LABEL_26:
  EtwTraceGreLockReleaseSemaphore(L"ghsemAtmfdInit", ghsemAtmfdInit);
  GreReleaseSemaphoreInternal(ghsemAtmfdInit);
  return v0;
}
