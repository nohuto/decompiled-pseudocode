/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8
 * Callers:
 *     bUnloadEudcFont @ 0x1C0008B20 (bUnloadEudcFont.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0008FB0 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C0009970 (bAddAllFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C002B8C0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C002BB04 (bAddFlEntry.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0269E18 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0277AC4 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0277C98 (bWriteUserSystemEUDCRegistry.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D398 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM2(a2);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
