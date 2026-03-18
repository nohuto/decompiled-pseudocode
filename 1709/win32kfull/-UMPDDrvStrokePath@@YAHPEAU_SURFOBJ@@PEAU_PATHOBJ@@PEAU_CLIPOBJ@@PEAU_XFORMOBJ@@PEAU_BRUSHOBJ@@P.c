/*
 * XREFs of ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02879F0
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

__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  void *v24; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v27; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v28; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v29; // [rsp+78h] [rbp-88h]
  struct _POINTL *v30; // [rsp+80h] [rbp-80h]
  _QWORD v31[12]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 0;
  v29 = a5;
  v30 = a6;
  v11 = 0;
  v28 = a4;
  v27 = a3;
  v21 = 1;
  v23 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v26);
  v24 = 0LL;
  v25 = 0LL;
  memset(v31, 0, sizeof(v31));
  v12 = v26;
  if ( v26 )
  {
    if ( !*((_DWORD *)v26 + 109)
      || (!a7 ? (v13 = 176) : (v13 = ((4 * a7->cstyle + 7) & 0xFFFFFFF8) + 216),
          v21 = v13,
          v14 = UMPDOBJ::bThunkLargeBitmap(v26, a1, &v24, &v25, &v23, &v22, &v21),
          v11 = v22,
          v15 = v14,
          (v21 = v14) != 0) )
    {
      v31[0] = 0xE00000060LL;
      v31[2] = *(_QWORD *)v12;
      v31[5] = v27;
      v31[6] = v28;
      v31[7] = v29;
      v31[8] = v30;
      LODWORD(v31[11]) = a8;
      v31[3] = a1;
      v31[4] = a2;
      v31[9] = a7;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v31[3], v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&v31[4], 8LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&v31[5], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&v31[6], 4LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&v31[7], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v31[8], 8u, v16)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v12, (struct _LINEATTRS **)&v31[9], v17, v18)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v31, 96LL, &v21, Size) == -1)
        || (v15 = 1, !v21) )
      {
        v15 = 0;
      }
    }
    if ( v23 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
      a1->pvBits = v24;
      a1->pvScan0 = v25;
    }
    v8 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ(&v26);
  return v8;
}
