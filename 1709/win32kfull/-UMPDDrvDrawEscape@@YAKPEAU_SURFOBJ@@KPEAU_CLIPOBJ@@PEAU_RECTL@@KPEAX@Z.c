/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C0285000
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C00B99A0 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v7; // edi
  int v9; // r15d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  UMPDOBJ *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r9
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v19; // [rsp+40h] [rbp-99h] BYREF
  int v20; // [rsp+44h] [rbp-95h] BYREF
  int v21; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v23; // [rsp+50h] [rbp-89h] BYREF
  void *v24; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v25; // [rsp+60h] [rbp-79h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-71h]
  struct _RECTL *v27; // [rsp+70h] [rbp-69h]
  _QWORD v28[10]; // [rsp+80h] [rbp-59h] BYREF

  v7 = -1;
  v27 = a4;
  v20 = -1;
  v26 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  v23 = 0LL;
  v24 = 0LL;
  v9 = 0;
  v21 = 0;
  v19 = 0;
  memset(v28, 0, 0x48uLL);
  v10 = v25;
  if ( !v25 )
    goto LABEL_20;
  if ( !*((_DWORD *)v25 + 109) )
    goto LABEL_8;
  if ( a5 + 7 >= a5 )
  {
    v11 = -1;
    v12 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    if ( v12 >= 0x78 )
      v11 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v22 = v11;
    if ( v12 >= 0x78 )
    {
      v13 = UMPDOBJ::bThunkLargeBitmap(v25, a1, &v23, &v24, &v21, &v19, &v22);
      v9 = v19;
      if ( !v13 )
      {
LABEL_16:
        if ( v21 )
        {
          if ( v9 )
            UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
          a1->pvBits = v23;
          a1->pvScan0 = v24;
        }
        goto LABEL_20;
      }
LABEL_8:
      v28[0] = 0x1900000048LL;
      v28[2] = *(_QWORD *)v10;
      v28[3] = a1;
      v28[5] = v26;
      LODWORD(v28[4]) = a2;
      v28[6] = v27;
      LODWORD(v28[7]) = a5;
      v28[8] = a6 & -(__int64)(a5 != 0);
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v10, (PVOID)(a6 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v28[8], a5, v15) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v28[3], v9) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 112), (const void **)&v28[5], 24LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v28[6], 0x10u, v16) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, v28, 72LL, &v20, Size) != -1 )
                v7 = v20;
            }
          }
        }
      }
      goto LABEL_16;
    }
  }
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v7;
}
