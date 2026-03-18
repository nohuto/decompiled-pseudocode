/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274
 * Callers:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00C1EC4 (bReadUserSystemEUDCRegistry.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0268B70 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0274670 (bWriteUserSystemEUDCRegistry.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299A88 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
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
