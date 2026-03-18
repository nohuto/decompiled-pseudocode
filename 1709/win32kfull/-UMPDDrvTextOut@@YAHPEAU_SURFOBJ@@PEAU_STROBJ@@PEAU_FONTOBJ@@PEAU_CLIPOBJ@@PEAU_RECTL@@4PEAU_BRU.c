/*
 * XREFs of ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C00B7CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C00B9D04 (-pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v21; // esi
  struct _RECTL *i; // rcx
  unsigned int v23; // edx
  __int64 cGlyphs; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  void *v36; // [rsp+58h] [rbp-A8h] BYREF
  void *v37; // [rsp+60h] [rbp-A0h] BYREF
  struct UMPDOBJ *v38; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTOBJ *v39; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ *v40; // [rsp+78h] [rbp-88h]
  struct _RECTL *v41; // [rsp+80h] [rbp-80h]
  struct _BRUSHOBJ *v42; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v43; // [rsp+90h] [rbp-70h]
  struct _POINTL *v44; // [rsp+98h] [rbp-68h]
  _QWORD v45[14]; // [rsp+A0h] [rbp-60h] BYREF

  v41 = a6;
  v11 = 1;
  v42 = a7;
  v13 = 0;
  v43 = a8;
  v44 = a9;
  v40 = a4;
  v39 = a3;
  v33 = 1;
  v35 = 0;
  v34[0] = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v38);
  v36 = 0LL;
  v37 = 0LL;
  memset(v45, 0, 0x68uLL);
  v14 = v38;
  if ( !v38 )
    goto LABEL_20;
  if ( a5 )
  {
    v21 = 1;
    for ( i = a5; i->left != i->right; ++v21 )
      ++i;
    v15 = 16 * v21;
  }
  else
  {
    v15 = 0;
  }
  if ( !*((_DWORD *)v38 + 109) )
    goto LABEL_5;
  v23 = 272;
  if ( a2 )
  {
    cGlyphs = a2->cGlyphs;
    if ( (unsigned __int64)(2 * cGlyphs) <= 0xFFFFFFFF )
    {
      v25 = 2 * cGlyphs;
      if ( (unsigned __int64)(24 * cGlyphs) <= 0xFFFFFFFF )
      {
        v26 = 24 * cGlyphs;
        if ( v25 + 7 >= v25 )
        {
          v27 = (v25 + 7) & 0xFFFFFFF8;
          if ( v26 + 7 >= v26 )
          {
            v28 = (v26 + 7) & 0xFFFFFFF8;
            if ( v27 + 320 >= 0x140 && v28 + v27 + 320 >= v27 + 320 )
            {
              v23 = v28 + v27 + 320;
              goto LABEL_32;
            }
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
  v29 = -1;
  v30 = v23 + ((v15 + 7) & 0xFFFFFFF8);
  if ( v30 >= v23 )
    v29 = v23 + ((v15 + 7) & 0xFFFFFFF8);
  v33 = v29;
  if ( v30 < v23 )
    goto LABEL_20;
  v31 = UMPDOBJ::bThunkLargeBitmap(v38, a1, &v36, &v37, &v35, v34, &v33);
  v13 = v34[0];
  v11 = v31;
  v33 = v31;
LABEL_5:
  v45[0] = 0x1700000068LL;
  v45[2] = *(_QWORD *)v14;
  v45[6] = v40;
  v45[8] = v41;
  v45[9] = v42;
  v45[10] = v43;
  v45[7] = a5;
  v45[4] = a2;
  v16 = v39;
  v45[11] = v44;
  LODWORD(v45[12]) = a10;
  v45[3] = a1;
  v45[5] = v39;
  if ( v11
    && (unsigned int)UMPDOBJ::pso(v14, (struct UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v45[3], v13)
    && (unsigned int)UMPDOBJ::pstro(v14, (struct _STROBJ **)&v45[4])
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 176), (void **)&v45[5], 0x40u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 112), (void **)&v45[6], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v45[7], v15)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v45[8], 0x10u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 144), (void **)&v45[9], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (struct UMPDOBJ *)((char *)v14 + 160), (void **)&v45[10], 0x18u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v45[11], 8u) )
  {
    *(_QWORD *)v34 = v16;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v34, v14, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v17 = UMPDOBJ::Thunk(v14, v45, 0x68u, &v33, Size);
    v11 = v33;
    if ( v17 == -1 )
      v11 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v34, v14, 0, 0, 0LL);
    *(_QWORD *)v34 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v34, v18, v19);
  }
  if ( v35 )
  {
    if ( v13 )
      UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
    a1->pvBits = v36;
    a1->pvScan0 = v37;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v38);
  return v11;
}
