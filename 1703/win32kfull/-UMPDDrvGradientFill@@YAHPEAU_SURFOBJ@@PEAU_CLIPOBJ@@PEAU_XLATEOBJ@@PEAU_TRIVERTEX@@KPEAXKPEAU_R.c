/*
 * XREFs of ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0288CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0097B84 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  ULONG v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  BOOL v27; // edi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  void *v33; // [rsp+50h] [rbp-B0h] BYREF
  void *v34; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL *v36; // [rsp+68h] [rbp-98h]
  struct _POINTL *v37; // [rsp+70h] [rbp-90h]
  _QWORD Src[14]; // [rsp+80h] [rbp-80h] BYREF

  v36 = a8;
  v37 = a9;
  v30 = 1;
  v32 = 0;
  v14 = 0;
  v31 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v33 = 0LL;
  v34 = 0LL;
  memset(Src, 0, 0x68uLL);
  v15 = v35;
  if ( !v35 )
    goto LABEL_33;
  Src[0] = 0x4400000068LL;
  Src[2] = *(_QWORD *)v35;
  Src[10] = v36;
  Src[11] = v37;
  Src[6] = a4;
  Src[3] = a1;
  Src[4] = a2;
  Src[5] = a3;
  LODWORD(Src[7]) = a5;
  Src[8] = a6;
  LODWORD(Src[9]) = a7;
  LODWORD(Src[12]) = a10;
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
  if ( *((_DWORD *)v35 + 109) )
  {
    if ( a3 )
      v18 = ((4 * a3->cEntries + 7) & 0xFFFFFFF8) + 24;
    else
      v18 = 0;
    v19 = v18 + 160;
    v20 = 16 * a5;
    if ( 16 * (unsigned __int64)a5 <= 0xFFFFFFFF && v20 + 7 >= v20 )
    {
      v21 = (v20 + 7) & 0xFFFFFFF8;
      if ( v17 + 7 >= v17 )
      {
        v22 = v21 + v19;
        if ( v21 + v19 >= v19 )
        {
          v23 = v21 + v19;
          v24 = v22 + ((v17 + 7) & 0xFFFFFFF8);
          v25 = -1;
          if ( v24 >= v23 )
            v25 = v24;
          v30 = v25;
          if ( v24 >= v23 )
          {
            v26 = UMPDOBJ::bThunkLargeBitmap(v35, a1, &v33, &v34, &v32, &v31, &v30);
            v14 = v31;
            v27 = v26;
            v30 = v26;
            if ( !v26 )
              goto LABEL_29;
            goto LABEL_18;
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
  if ( (unsigned int)UMPDOBJ::pso(v15, (UMPDOBJ *)((char *)v15 + 64), (struct _SURFOBJ **)&Src[3], v14) )
  {
    if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v15, (UMPDOBJ *)((char *)v15 + 112), (const void **)&Src[4], 0x18u) )
    {
      if ( (unsigned int)UMPDOBJ::pxlo(v15, (struct _XLATEOBJ **)&Src[5]) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&Src[6], 16 * a5) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&Src[8], v17) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&Src[10], 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&Src[11], 8u) )
              {
                LODWORD(Size) = 4;
                if ( (unsigned int)UMPDOBJ::Thunk(v15, Src, 0x68u, &v30, Size) != -1 )
                {
                  if ( v30 )
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
  if ( v32 )
  {
    if ( v14 )
      UMPDOBJ::bDeleteLargeBitmaps(v15, a1, 0LL, 0LL);
    a1->pvBits = v33;
    a1->pvScan0 = v34;
  }
LABEL_34:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v27;
}
