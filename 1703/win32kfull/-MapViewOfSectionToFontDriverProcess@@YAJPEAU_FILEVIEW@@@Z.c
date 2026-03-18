/*
 * XREFs of ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C002155C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0091960 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00215AC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 */

__int64 __fastcall MapViewOfSectionToFontDriverProcess(struct _FILEVIEW *a1, __int64 a2, unsigned __int64 a3)
{
  enum _SECTION_INHERIT v4; // [rsp+30h] [rbp-28h]
  unsigned int v5; // [rsp+38h] [rbp-20h]
  unsigned int v6; // [rsp+40h] [rbp-18h]
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  v8.QuadPart = 0LL;
  if ( (*((_DWORD *)a1 + 10) & 0x20) != 0 )
    return UmfdHostLifeTimeManager::MmMapViewOfSection(
             *((void **)a1 + 4),
             (void **)a1 + 2,
             a3,
             0LL,
             &v8,
             &v7,
             v4,
             v5,
             v6,
             (unsigned __int64 *)a1 + 9);
  else
    return MmMapViewOfSection(*((_QWORD *)a1 + 4), gpepCSRSS, (char *)a1 + 16, 0LL, 0LL, &v8, &v7, 2, 0x400000, 2);
}
