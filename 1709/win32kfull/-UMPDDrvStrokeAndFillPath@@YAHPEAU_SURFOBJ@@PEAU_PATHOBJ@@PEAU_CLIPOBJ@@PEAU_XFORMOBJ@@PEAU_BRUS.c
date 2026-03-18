/*
 * XREFs of ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287710
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0270240 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v10; // edi
  int v13; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  void *v26; // [rsp+50h] [rbp-B0h] BYREF
  void *v27; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v29; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v30; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v31; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v32; // [rsp+80h] [rbp-80h]
  struct _POINTL *v33; // [rsp+88h] [rbp-78h]
  _QWORD v34[12]; // [rsp+90h] [rbp-70h] BYREF

  v10 = 0;
  v31 = a5;
  v32 = a7;
  v13 = 0;
  v33 = a8;
  v30 = a4;
  v29 = a3;
  v23 = 1;
  v25 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v26 = 0LL;
  v27 = 0LL;
  memset(v34, 0, sizeof(v34));
  v14 = v28;
  if ( v28 )
  {
    if ( !*((_DWORD *)v28 + 109)
      || (!a6 ? (v15 = 200) : (v15 = ((4 * a6->cstyle + 7) & 0xFFFFFFF8) + 240),
          v23 = v15,
          v16 = UMPDOBJ::bThunkLargeBitmap(v28, a1, &v26, &v27, &v25, &v24, &v23),
          v13 = v24,
          v17 = v16,
          (v23 = v16) != 0) )
    {
      v34[0] = 0x1000000060LL;
      v34[2] = *(_QWORD *)v14;
      v34[5] = v29;
      v34[6] = v30;
      v34[7] = v31;
      v34[10] = v32;
      v34[8] = v33;
      v34[11] = __PAIR64__(a10, a9);
      v34[3] = a1;
      v34[4] = a2;
      v34[9] = a6;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v34[3], v13)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 224), (const void **)&v34[4], 8LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v34[5], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 272), (const void **)&v34[6], 4LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v34[7], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v14, (struct _LINEATTRS **)&v34[9], v18, v19)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&v34[10], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v34[8], 8u, v20)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v34, 96LL, &v23, Size) == -1)
        || (v17 = 1, !v23) )
      {
        v17 = 0;
      }
    }
    if ( v25 )
    {
      if ( v13 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v26;
      a1->pvScan0 = v27;
    }
    v10 = v17;
  }
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v10;
}
