/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C012A274
 * Callers:
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029D050 (-FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        struct PDEV *a2,
        struct _SURFOBJ *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  int v7; // eax
  int *v8; // rbx
  void *v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v13; // r12d
  unsigned int v15; // esi
  int v17; // eax
  unsigned int v18; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-3Ch] BYREF
  int *v20; // [rsp+48h] [rbp-38h] BYREF
  int v21[10]; // [rsp+50h] [rbp-30h] BYREF
  struct PDEV *v22; // [rsp+C8h] [rbp+48h] BYREF

  v22 = a2;
  v7 = *((_DWORD *)a2 + 8);
  v8 = v21;
  v9 = a7;
  v10 = 0;
  v11 = 0;
  v19 = 0;
  v18 = 0;
  v20 = v21;
  v13 = 0;
  if ( (v7 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v17 = UMPDReleaseRFONTSem(a1, 0LL, &v19, &v18, (void **)&v20);
    a2 = v22;
    v13 = v17;
    v10 = v19;
    v11 = v18;
    v8 = v20;
  }
  if ( a2 != qword_1C0338A40 || *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 8LL) == 3 )
    v15 = PDEVOBJ::FontManagement((PDEVOBJ *)&v22, a3, 0LL, 8u, 4u, v9, 0, 0LL);
  else
    v15 = v18;
  if ( v13 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v21 )
        Win32FreePool(v8);
    }
  }
  return v15;
}
