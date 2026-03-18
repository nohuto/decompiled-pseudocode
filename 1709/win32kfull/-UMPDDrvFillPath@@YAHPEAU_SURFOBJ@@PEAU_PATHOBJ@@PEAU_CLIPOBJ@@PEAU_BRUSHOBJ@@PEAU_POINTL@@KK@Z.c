/*
 * XREFs of ?UMPDDrvFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0285220
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
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  int v9; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // r9
  size_t Size; // [rsp+20h] [rbp-D1h]
  unsigned int v18; // [rsp+40h] [rbp-B1h] BYREF
  int v19; // [rsp+44h] [rbp-ADh] BYREF
  int v20; // [rsp+48h] [rbp-A9h] BYREF
  void *v21; // [rsp+50h] [rbp-A1h] BYREF
  void *v22; // [rsp+58h] [rbp-99h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp-91h] BYREF
  struct _BRUSHOBJ *v24; // [rsp+68h] [rbp-89h]
  struct _POINTL *v25; // [rsp+70h] [rbp-81h]
  _QWORD v26[12]; // [rsp+80h] [rbp-71h] BYREF

  v7 = 0;
  v25 = a5;
  v20 = 0;
  v9 = 0;
  v19 = 0;
  v24 = a4;
  v18 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v21 = 0LL;
  v22 = 0LL;
  memset(v26, 0, sizeof(v26));
  v12 = v23;
  if ( v23 )
  {
    if ( !*((_DWORD *)v23 + 109)
      || (v18 = 168,
          v13 = UMPDOBJ::bThunkLargeBitmap(v23, a1, &v21, &v22, &v20, &v19, &v18),
          v9 = v19,
          v14 = v13,
          (v18 = v13) != 0) )
    {
      v26[0] = 0xF00000060LL;
      v26[2] = *(_QWORD *)v12;
      v26[7] = v24;
      v26[8] = v25;
      v26[11] = __PAIR64__(a7, a6);
      v26[3] = a1;
      v26[4] = a2;
      v26[5] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v26[3], v9)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&v26[4], 8LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&v26[5], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&v26[7], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v26[8], 8u, v15)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v26, 96LL, &v18, Size) == -1)
        || (v14 = 1, !v18) )
      {
        v14 = 0;
      }
    }
    if ( v20 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
      a1->pvBits = v21;
      a1->pvScan0 = v22;
    }
    v7 = v14;
  }
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return v7;
}
