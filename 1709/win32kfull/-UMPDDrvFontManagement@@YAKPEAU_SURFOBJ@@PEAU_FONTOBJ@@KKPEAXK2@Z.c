/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0285450
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r15d
  int v11; // r12d
  __int64 v12; // r9
  UMPDOBJ *v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  void *v20; // r14
  struct _FONTOBJ *v21; // r15
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  char *KernelPtr; // rax
  size_t v28; // [rsp+20h] [rbp-D1h]
  int v29; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v30; // [rsp+48h] [rbp-A9h] BYREF
  int v31; // [rsp+50h] [rbp-A1h] BYREF
  int v32; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-99h] BYREF
  void *v34; // [rsp+60h] [rbp-91h] BYREF
  void *v35; // [rsp+68h] [rbp-89h] BYREF
  UMPDOBJ *v36; // [rsp+70h] [rbp-81h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-79h]
  unsigned __int64 v38; // [rsp+80h] [rbp-71h]
  struct _FONTOBJ *v39; // [rsp+88h] [rbp-69h]
  _QWORD v40[10]; // [rsp+90h] [rbp-61h] BYREF

  v38 = (unsigned __int64)a7;
  v37 = (unsigned __int64)a5;
  v10 = -1;
  v31 = -1;
  LODWORD(v30) = a3;
  v39 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v36);
  v34 = 0LL;
  v35 = 0LL;
  v11 = 0;
  v32 = 0;
  v29 = 0;
  memset(v40, 0, sizeof(v40));
  v13 = v36;
  if ( !v36 )
    goto LABEL_32;
  if ( !*((_DWORD *)v36 + 109) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_13;
  if ( a4 + 7 < a4 )
    goto LABEL_32;
  v14 = (a4 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_32;
  v15 = (Size + 7) & 0xFFFFFFF8;
  if ( v14 + 152 < 0x98 )
    goto LABEL_32;
  v16 = v14 + 152;
  v17 = v15 + v14 + 152;
  v18 = -1;
  if ( v15 + v16 >= v16 )
    v18 = v17;
  v33 = v18;
  if ( v17 < v16 )
  {
LABEL_32:
    v10 = -1;
    goto LABEL_33;
  }
  v19 = UMPDOBJ::bThunkLargeBitmap(v36, a1, &v34, &v35, &v32, &v29, &v33);
  v11 = v29;
  if ( v19 )
  {
LABEL_13:
    v40[0] = 0x2F00000050LL;
    v40[2] = *(_QWORD *)v13;
    v20 = (void *)(v38 & -(__int64)(Size != 0));
    if ( (_DWORD)v30 == 8 )
    {
      v40[3] = 0LL;
      v40[4] = a1;
    }
    else
    {
      v40[3] = a1;
    }
    v21 = v39;
    v40[5] = v39;
    v40[6] = __PAIR64__(a4, (unsigned int)v30);
    v40[7] = v37 & -(__int64)(a4 != 0);
    LODWORD(v40[8]) = Size;
    v40[9] = v38 & -(__int64)(Size != 0);
    if ( (!v20 || (v40[9] = UMPDOBJ::_AllocUserMem(v13, Size, 1LL, v12)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), (struct _SURFOBJ **)&v40[3], v11)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 176), (const void **)&v40[5], 64LL)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v40[7], a4, v22) )
    {
      v30 = v21;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v30, v13, 0LL, 0LL, 0LL);
      LODWORD(v28) = 4;
      v23 = UMPDOBJ::Thunk(v13, v40, 80LL, &v31, v28);
      v10 = v31;
      if ( v23 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v30, v13, 0, 0, 0LL);
      if ( v10 != -1 && v20 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v13, (char *)v40[9]);
        memmove(v20, KernelPtr, Size);
      }
      v30 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30, v24, v25);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v32 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v13, a1, 0LL, 0LL);
    a1->pvBits = v34;
    a1->pvScan0 = v35;
  }
LABEL_33:
  XUMPDOBJ::~XUMPDOBJ(&v36);
  return v10;
}
