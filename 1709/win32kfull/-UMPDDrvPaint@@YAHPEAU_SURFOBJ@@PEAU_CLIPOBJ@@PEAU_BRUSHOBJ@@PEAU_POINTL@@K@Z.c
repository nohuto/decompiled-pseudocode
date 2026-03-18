/*
 * XREFs of ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0286110
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

__int64 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v7; // r15d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // r9
  size_t Size; // [rsp+20h] [rbp-B1h]
  unsigned int v16; // [rsp+40h] [rbp-91h] BYREF
  int v17; // [rsp+44h] [rbp-8Dh] BYREF
  int v18; // [rsp+48h] [rbp-89h] BYREF
  void *v19; // [rsp+50h] [rbp-81h] BYREF
  void *v20; // [rsp+58h] [rbp-79h] BYREF
  UMPDOBJ *v21; // [rsp+60h] [rbp-71h] BYREF
  struct _POINTL *v22; // [rsp+68h] [rbp-69h]
  _QWORD v23[12]; // [rsp+70h] [rbp-61h] BYREF

  v5 = 0;
  v22 = a4;
  v18 = 0;
  v17 = 0;
  v7 = 0;
  v16 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0LL;
  v20 = 0LL;
  memset(v23, 0, sizeof(v23));
  v10 = v21;
  if ( v21 )
  {
    if ( !*((_DWORD *)v21 + 109)
      || (v16 = 160,
          v11 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v19, &v20, &v18, &v17, &v16),
          v7 = v17,
          v12 = v11,
          (v16 = v11) != 0) )
    {
      v23[0] = 0x1100000060LL;
      v23[2] = *(_QWORD *)v10;
      v23[8] = v22;
      LODWORD(v23[11]) = a5;
      v23[3] = a1;
      v23[5] = a2;
      v23[7] = a3;
      if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v23[3], v7)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), (const void **)&v23[5], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 144), (const void **)&v23[7], 24LL)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v23[8], 8u, v13)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v23, 96LL, &v16, Size) == -1)
        || (v12 = 1, !v16) )
      {
        v12 = 0;
      }
    }
    if ( v18 )
    {
      if ( v7 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v19;
      a1->pvScan0 = v20;
    }
    v5 = v12;
  }
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v5;
}
