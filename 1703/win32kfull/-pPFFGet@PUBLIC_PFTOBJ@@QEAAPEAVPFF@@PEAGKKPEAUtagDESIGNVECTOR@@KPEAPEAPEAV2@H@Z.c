/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C005B7BC
 * Callers:
 *     bAddAllFlEntry @ 0x1C0009970 (bAddAllFlEntry.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C002A42C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002A52C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0249CE0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024A094 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     GreRemoveFontResourceW @ 0x1C026B898 (GreRemoveFontResourceW.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     GetFontResourceInfoInternalW @ 0x1C02B6748 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C0030308 (-iHash@@YAIPEBGI@Z.c)
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        struct PFF ***a7,
        int a8)
{
  __int64 v9; // rsi
  __int64 v11; // rbx
  __int64 v12; // r11
  struct PFF **v13; // rbx
  struct PFF *i; // rbx

  v9 = a3;
  v11 = (unsigned int)iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL));
  v13 = (struct PFF **)(v12 + 8 * (v11 + 5));
  if ( a7 )
    *a7 = v13;
  for ( i = *v13;
        i
     && (a8 != ((*((_DWORD *)i + 13) >> 3) & 1)
      || (_DWORD)v9 != *((_DWORD *)i + 8)
      || a4 != *((_DWORD *)i + 9)
      || memcmp(*((const void **)i + 3), a2, 2 * v9)
      || a6 != *((_DWORD *)i + 12)
      || a6 && memcmp(Buf1, *((const void **)i + 5), *((unsigned int *)i + 12)));
        i = (struct PFF *)*((_QWORD *)i + 1) )
  {
    ;
  }
  return i;
}
