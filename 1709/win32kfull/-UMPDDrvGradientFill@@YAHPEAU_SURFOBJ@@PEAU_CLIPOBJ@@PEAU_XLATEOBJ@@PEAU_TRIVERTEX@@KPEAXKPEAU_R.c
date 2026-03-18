/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02857C0
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
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

_BOOL8 __fastcall UMPDDrvGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v14; // r14d
  UMPDOBJ *v15; // rbx
  int v16; // esi
  unsigned int v17; // esi
  ULONG v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  BOOL v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  void *v39; // [rsp+50h] [rbp-B0h] BYREF
  void *v40; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v41; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v42; // [rsp+68h] [rbp-98h]
  struct _POINTL *v43; // [rsp+70h] [rbp-90h]
  _QWORD v44[14]; // [rsp+80h] [rbp-80h] BYREF

  v42 = a8;
  v43 = a9;
  v36 = 1;
  v38 = 0;
  v14 = 0;
  v37 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v41);
  v39 = 0LL;
  v40 = 0LL;
  memset(v44, 0, 0x68uLL);
  v15 = v41;
  if ( !v41 )
    goto LABEL_33;
  v44[0] = 0x4400000068LL;
  v44[2] = *(_QWORD *)v41;
  v44[10] = v42;
  v44[11] = v43;
  v44[6] = a4;
  v44[3] = a1;
  v44[4] = a2;
  v44[5] = a3;
  LODWORD(v44[7]) = a5;
  v44[8] = a6;
  LODWORD(v44[9]) = a7;
  LODWORD(v44[12]) = a10;
  if ( a10 <= 1 )
  {
    v16 = 8;
  }
  else
  {
    if ( a10 != 2 )
      goto LABEL_33;
    v16 = 12;
  }
  v17 = a7 * v16;
  if ( *((_DWORD *)v41 + 109) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 184;
    else
      v18 = 160;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF )
    {
      v19 = 16 * a5;
      if ( v19 + 7 >= v19 )
      {
        v20 = (v19 + 7) & 0xFFFFFFF8;
        if ( v17 + 7 >= v17 )
        {
          v21 = v20 + v18;
          v22 = (v17 + 7) & 0xFFFFFFF8;
          if ( v20 + v18 >= v18 )
          {
            v23 = v20 + v18;
            v24 = v22 + v21;
            v25 = -1;
            if ( v22 + v23 >= v23 )
              v25 = v24;
            v36 = v25;
            if ( v24 >= v23 )
            {
              v26 = UMPDOBJ::bThunkLargeBitmap(v41, a1, &v39, &v40, &v38, &v37, &v36);
              v14 = v37;
              v27 = v26;
              v36 = v26;
              if ( !v26 )
                goto LABEL_29;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_33:
    v27 = 0;
    goto LABEL_34;
  }
LABEL_18:
  v27 = 0;
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (struct _SURFOBJ **)&v44[3], v14) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&v44[4], 24LL) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&v44[5], v28, v29) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44[6], 16 * a5, v30) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44[8], v17, v31) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44[10], 0x10u, v32) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44[11], 8u, v33) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, v44, 104LL, &v36, Size) != -1 )
                {
                  if ( v36 )
                    v27 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( v38 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v39;
    a1->pvScan0 = v40;
  }
LABEL_34:
  XUMPDOBJ::~XUMPDOBJ(&v41);
  return v27;
}
