/*
 * XREFs of GreAddFontResourceWInternal @ 0x1C00FB564
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00FB3A0 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C024B3FC (-bInitPrivatePFT@@YAHXZ.c)
 */

__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // ebx
  struct _FONTHASH **v13; // rcx
  size_t v15; // [rsp+28h] [rbp-70h]
  struct _FONTHASH **v16; // [rsp+60h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+8h] BYREF

  v7 = 0;
  LODWORD(v18) = 0;
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v7;
  }
  if ( a4 == 0x80000000 )
  {
    if ( RtlCreateUnicodeString(&DestinationString, a1) )
    {
      v18 = *((_QWORD *)gpxsGlobals + 2);
      GreAcquireSemaphore(v18);
      RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString, 0x10u, 0LL);
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
    }
    return 1LL;
  }
  else
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v12 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v12 = 2 * (a4 & 1);
      if ( (a4 & 0x1C) == 0 )
      {
        v13 = gpPFTPublic;
        goto LABEL_9;
      }
      if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
      {
        v13 = gpPFTPrivate;
LABEL_9:
        v16 = v13;
        if ( v13
          && (LODWORD(v15) = a7,
              (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                              (PUBLIC_PFTOBJ *)&v16,
                              a1,
                              a2,
                              a3,
                              a6,
                              v15,
                              (unsigned int *)&v18,
                              v12,
                              (struct PFF **)&DestinationString,
                              a4,
                              0,
                              0LL)) )
        {
          v7 = v18;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 )
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        return v7;
      }
    }
    return 0LL;
  }
}
