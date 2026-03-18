/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009B990
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C0097914 (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  int v13; // r12d
  struct UMPDOBJ *v14; // rbx
  unsigned int v15; // esi
  struct _FONTOBJ *v16; // r13
  int v17; // eax
  int v19; // esi
  struct _RECTL *i; // rcx
  unsigned int v21; // edx
  __int64 cGlyphs; // rax
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  void *v34; // [rsp+58h] [rbp-A8h] BYREF
  void *v35; // [rsp+60h] [rbp-A0h] BYREF
  struct UMPDOBJ *v36; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTOBJ *v37; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ *v38; // [rsp+78h] [rbp-88h]
  struct _RECTL *v39; // [rsp+80h] [rbp-80h]
  struct _BRUSHOBJ *v40; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v41; // [rsp+90h] [rbp-70h]
  struct _POINTL *v42; // [rsp+98h] [rbp-68h]
  _QWORD Src[14]; // [rsp+A0h] [rbp-60h] BYREF

  v39 = a6;
  v11 = 1;
  v40 = a7;
  v13 = 0;
  v41 = a8;
  v42 = a9;
  v38 = a4;
  v37 = a3;
  v31 = 1;
  v33 = 0;
  v32[0] = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v36);
  v34 = 0LL;
  v35 = 0LL;
  memset(Src, 0, 0x68uLL);
  v14 = v36;
  if ( !v36 )
    goto LABEL_20;
  if ( a5 )
  {
    v19 = 1;
    for ( i = a5; i->left != i->right; ++v19 )
      ++i;
    v15 = 16 * v19;
  }
  else
  {
    v15 = 0;
  }
  if ( !*((_DWORD *)v36 + 109) )
    goto LABEL_5;
  v21 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    v23 = 2 * cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) <= 0xFFFFFFFF )
    {
      v24 = 24 * cGlyphs;
      if ( (unsigned __int64)(24 * cGlyphs) <= 0xFFFFFFFF && v23 + 7 >= v23 )
      {
        v25 = (v23 + 7) & 0xFFFFFFF8;
        if ( v24 + 7 >= v24 )
        {
          v26 = (v24 + 7) & 0xFFFFFFF8;
          if ( v25 + 320 >= 0x140 && v26 + v25 + 320 >= v25 + 320 )
          {
            v21 = v26 + v25 + 320;
            goto LABEL_32;
          }
        }
      }
    }
LABEL_20:
    v11 = 0;
    goto LABEL_19;
  }
LABEL_32:
  if ( v15 + 7 < v15 )
    goto LABEL_20;
  v27 = -1;
  v28 = v21 + ((v15 + 7) & 0xFFFFFFF8);
  if ( v28 >= v21 )
    v27 = v21 + ((v15 + 7) & 0xFFFFFFF8);
  v31 = v27;
  if ( v28 < v21 )
    goto LABEL_20;
  v29 = UMPDOBJ::bThunkLargeBitmap(v36, a1, &v34, &v35, &v33, v32, &v31);
  v13 = v32[0];
  v11 = v29;
  v31 = v29;
LABEL_5:
  Src[0] = 0x1700000068LL;
  Src[2] = *(_QWORD *)v14;
  Src[6] = v38;
  Src[8] = v39;
  Src[9] = v40;
  Src[10] = v41;
  Src[7] = a5;
  Src[4] = a2;
  v16 = v37;
  Src[11] = v42;
  LODWORD(Src[12]) = a10;
  Src[3] = a1;
  Src[5] = v37;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v13)
    && (unsigned int)UMPDOBJ::pstro(v14, (struct _STROBJ **)&Src[4])
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 176), (const void **)&Src[5], 0x40u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[6], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[7], v15)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 144), (const void **)&Src[9], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 160), (const void **)&Src[10], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[11], 8u) )
  {
    *(_QWORD *)v32 = v16;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v32, v14, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v17 = UMPDOBJ::Thunk(v14, Src, 0x68u, &v31, Size);
    v11 = v31;
    if ( v17 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v32, v14, 0, 0, 0LL);
    *(_QWORD *)v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v32);
  }
  if ( v33 )
  {
    if ( v13 )
      UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
    a1->pvBits = v34;
    a1->pvScan0 = v35;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v36);
  return v11;
}
