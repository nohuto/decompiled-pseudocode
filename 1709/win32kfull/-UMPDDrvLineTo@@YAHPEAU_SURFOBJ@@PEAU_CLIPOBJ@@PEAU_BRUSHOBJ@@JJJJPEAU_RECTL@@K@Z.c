/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0285EF0
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

__int64 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // edi
  int v11; // r15d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  int v16; // esi
  __int64 v17; // r9
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v20; // [rsp+40h] [rbp-91h] BYREF
  int v21; // [rsp+44h] [rbp-8Dh] BYREF
  int v22; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-85h]
  void *v24; // [rsp+50h] [rbp-81h] BYREF
  void *v25; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v26; // [rsp+60h] [rbp-71h] BYREF
  struct _RECTL *v27; // [rsp+68h] [rbp-69h]
  _QWORD v28[10]; // [rsp+70h] [rbp-61h] BYREF

  v9 = 0;
  v27 = a8;
  v22 = 0;
  v11 = 0;
  v21 = 0;
  v23 = a4;
  v20 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v26);
  v24 = 0LL;
  v25 = 0LL;
  memset(v28, 0, sizeof(v28));
  v14 = v26;
  if ( v26 )
  {
    if ( !*((_DWORD *)v26 + 109)
      || (v20 = 152,
          v15 = UMPDOBJ::bThunkLargeBitmap(v26, a1, &v24, &v25, &v22, &v21, &v20),
          v11 = v21,
          v16 = v15,
          (v20 = v15) != 0) )
    {
      v28[0] = 0x1F00000050LL;
      v28[2] = *(_QWORD *)v14;
      v28[6] = __PAIR64__(a5, v23);
      v28[7] = __PAIR64__(a7, a6);
      v28[8] = v27;
      LODWORD(v28[9]) = a9;
      v28[3] = a1;
      v28[4] = a2;
      v28[5] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v28[3], v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v28[4], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 144), (const void **)&v28[5], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v28[8], 0x10u, v17)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v28, 80LL, &v20, Size) == -1)
        || (v16 = 1, !v20) )
      {
        v16 = 0;
      }
    }
    if ( v22 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v14, a1, 0LL, 0LL);
      a1->pvBits = v24;
      a1->pvScan0 = v25;
    }
    v9 = v16;
  }
  XUMPDOBJ::~XUMPDOBJ(&v26);
  return v9;
}
