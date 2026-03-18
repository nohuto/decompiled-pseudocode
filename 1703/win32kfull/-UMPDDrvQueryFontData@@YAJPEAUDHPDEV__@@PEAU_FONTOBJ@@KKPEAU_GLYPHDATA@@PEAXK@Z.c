/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028A340
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  UMPDOBJ *v9; // rbx
  void *v10; // r15
  int v11; // eax
  unsigned int v12; // r14d
  char *KernelPtr; // rax
  size_t v15; // [rsp+20h] [rbp-91h]
  unsigned int v16; // [rsp+30h] [rbp-81h] BYREF
  struct _FONTOBJ *v17; // [rsp+38h] [rbp-79h] BYREF
  UMPDOBJ *v18[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD Src[10]; // [rsp+50h] [rbp-61h] BYREF

  v16 = a4;
  LODWORD(v17) = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset(Src, 0, 0x48uLL);
  v9 = v18[0];
  if ( !v18[0] )
    goto LABEL_12;
  Src[0] = 0x1C00000048LL;
  Src[2] = *(_QWORD *)v18[0];
  Src[3] = a1;
  Src[5] = __PAIR64__(v16, (unsigned int)v17);
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  Src[4] = a2;
  Src[6] = a5;
  Src[7] = v10;
  LODWORD(Src[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v18[0], (const void **)&Src[6], 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&Src[7], Size)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v9, (UMPDOBJ *)((char *)v9 + 176), (const void **)&Src[4], 0x40u) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v9, 0LL, 0LL, 0LL);
    LODWORD(v15) = 4;
    v11 = UMPDOBJ::Thunk(v9, Src, 0x48u, &v16, v15);
    v12 = v16;
    if ( v11 == -1 )
      v12 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v9, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    if ( v12 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)Src[7]);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr(v9, (char *)Src[6]);
    }
  }
  else
  {
LABEL_12:
    v12 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
