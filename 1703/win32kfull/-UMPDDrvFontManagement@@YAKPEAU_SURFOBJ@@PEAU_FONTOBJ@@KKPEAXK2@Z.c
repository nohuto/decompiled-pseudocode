/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0288930
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  void *v19; // r14
  struct _FONTOBJ *v20; // r15
  int v21; // eax
  char *KernelPtr; // rax
  size_t v24; // [rsp+20h] [rbp-D1h]
  int v25; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v26; // [rsp+48h] [rbp-A9h] BYREF
  int v27; // [rsp+50h] [rbp-A1h] BYREF
  int v28; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-99h] BYREF
  void *v30; // [rsp+60h] [rbp-91h] BYREF
  void *v31; // [rsp+68h] [rbp-89h] BYREF
  UMPDOBJ *v32; // [rsp+70h] [rbp-81h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-79h]
  unsigned __int64 v34; // [rsp+80h] [rbp-71h]
  struct _FONTOBJ *v35; // [rsp+88h] [rbp-69h]
  _QWORD Src[10]; // [rsp+90h] [rbp-61h] BYREF

  v34 = (unsigned __int64)a7;
  v33 = (unsigned __int64)a5;
  v10 = -1;
  v27 = -1;
  LODWORD(v26) = a3;
  v35 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v30 = 0LL;
  v31 = 0LL;
  v11 = 0;
  v28 = 0;
  v25 = 0;
  memset(Src, 0, sizeof(Src));
  v12 = v32;
  if ( !v32 )
    goto LABEL_32;
  if ( !*((_DWORD *)v32 + 109) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_13;
  if ( a4 + 7 < a4 )
    goto LABEL_32;
  v13 = (a4 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_32;
  v14 = (Size + 7) & 0xFFFFFFF8;
  if ( v13 + 152 < 0x98 )
    goto LABEL_32;
  v15 = v13 + 152;
  v16 = v14 + v13 + 152;
  v17 = -1;
  if ( v14 + v15 >= v15 )
    v17 = v16;
  v29 = v17;
  if ( v16 < v15 )
  {
LABEL_32:
    v10 = -1;
    goto LABEL_33;
  }
  v18 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v30, &v31, &v28, &v25, &v29);
  v11 = v25;
  if ( v18 )
  {
LABEL_13:
    Src[0] = 0x2F00000050LL;
    Src[2] = *(_QWORD *)v12;
    v19 = (void *)(v34 & -(__int64)(Size != 0));
    if ( (_DWORD)v26 == 8 )
    {
      Src[3] = 0LL;
      Src[4] = a1;
    }
    else
    {
      Src[3] = a1;
    }
    v20 = v35;
    Src[5] = v35;
    Src[6] = __PAIR64__(a4, (unsigned int)v26);
    Src[7] = v33 & -(__int64)(a4 != 0);
    LODWORD(Src[8]) = Size;
    Src[9] = v34 & -(__int64)(Size != 0);
    if ( (!v19 || (Src[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v11)
      && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 176), (const void **)&Src[5], 0x40u)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[7], a4) )
    {
      v26 = v20;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v26, v12, 0LL, 0LL, 0LL);
      LODWORD(v24) = 4;
      v21 = UMPDOBJ::Thunk(v12, Src, 0x50u, &v27, v24);
      v10 = v27;
      if ( v21 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v26, v12, 0, 0, 0LL);
      if ( v10 != -1 && v19 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, (char *)Src[9]);
        memmove(v19, KernelPtr, Size);
      }
      v26 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v28 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v30;
    a1->pvScan0 = v31;
  }
LABEL_33:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v10;
}
