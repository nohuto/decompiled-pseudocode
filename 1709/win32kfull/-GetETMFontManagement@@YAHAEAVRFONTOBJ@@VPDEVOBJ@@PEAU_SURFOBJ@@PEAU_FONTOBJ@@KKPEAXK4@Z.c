/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C013A690
 * Callers:
 *     NtGdiGetETM @ 0x1C013A2A0 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02997CC (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
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
  int *v8; // rdi
  void *v9; // rdx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v13; // eax
  int v14; // r12d
  unsigned int v16; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-45h] BYREF
  int *v23; // [rsp+48h] [rbp-41h] BYREF
  void *v24; // [rsp+50h] [rbp-39h] BYREF
  int v25[10]; // [rsp+60h] [rbp-29h] BYREF

  v8 = v25;
  v9 = a7;
  v10 = 0;
  v11 = 0;
  v24 = a7;
  v22 = 0;
  v13 = *((_DWORD *)a2 + 8) & 0x8080;
  v21 = 0;
  v14 = 0;
  v23 = v25;
  if ( v13 == 32896 && *(_QWORD *)a1 )
  {
    v18 = UMPDReleaseRFONTSem(a1, 0LL, &v22, &v21, (void **)&v23);
    v9 = v24;
    v14 = v18;
    v10 = v22;
    v11 = v21;
    v8 = v23;
  }
  if ( a2 != qword_1C0334158 || *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 8LL) == 3 )
  {
    v24 = *(void **)(*(_QWORD *)a1 + 120LL);
    v16 = PFFOBJ::FontManagement((PFFOBJ *)&v24, a3, 0LL, 8u, 4u, v9, 0, 0LL);
  }
  else
  {
    v16 = v21;
  }
  if ( v14 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v25 )
        Win32FreePool(v8, v19, v20);
    }
  }
  return v16;
}
