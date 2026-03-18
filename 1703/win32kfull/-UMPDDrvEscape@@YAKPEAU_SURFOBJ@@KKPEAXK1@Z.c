/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00F8F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C00975B4 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  unsigned int v7; // edi
  int v9; // r12d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  void *v17; // r14
  UMPDOBJ *v18; // rcx
  char *KernelPtr; // rax
  size_t v21; // [rsp+20h] [rbp-B9h]
  int v22; // [rsp+40h] [rbp-99h] BYREF
  int v23; // [rsp+44h] [rbp-95h] BYREF
  int v24; // [rsp+48h] [rbp-91h] BYREF
  void *v25; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-81h] BYREF
  void *v27; // [rsp+60h] [rbp-79h]
  void *v28; // [rsp+68h] [rbp-71h] BYREF
  void *v29; // [rsp+70h] [rbp-69h] BYREF
  UMPDOBJ *v30; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-59h]
  _QWORD Src[8]; // [rsp+90h] [rbp-49h] BYREF

  v7 = -1;
  v27 = a6;
  v23 = -1;
  v31 = a4;
  LODWORD(v25) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v24 = 0;
  v9 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v22 = 0;
  memset(Src, 0, sizeof(Src));
  v10 = v30;
  if ( !v30 )
    goto LABEL_21;
  if ( !*((_DWORD *)v30 + 109) )
  {
LABEL_10:
    Src[0] = 0x1800000040LL;
    Src[2] = *(_QWORD *)v10;
    Src[3] = a1;
    Src[4] = __PAIR64__(a3, (unsigned int)v25);
    v17 = (void *)(v31 & -(__int64)(a3 != 0));
    Src[5] = v17;
    LODWORD(Src[6]) = Size;
    v27 = (void *)((unsigned __int64)v27 & -(__int64)(Size != 0));
    Src[7] = v27;
    if ( (_DWORD)v25 != 25 || *((int *)a1->hdev + 460) >= 0 )
      goto LABEL_11;
    if ( v17 )
    {
      v25 = *(void **)((v31 & -(__int64)(a3 != 0)) + 0x18);
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 272), (const void **)&v25, 4u) )
      {
        *(_QWORD *)(Src[5] + 24LL) = v25;
LABEL_11:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v10, v17)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[5], a3))
          && (!Size || (Src[7] = UMPDOBJ::_AllocUserMem(v10, Size, 1)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&Src[3], v9) )
          {
            LODWORD(v21) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v10, Src, 0x40u, &v23, v21) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)Src[7]);
                memmove(v27, KernelPtr, Size);
              }
              v7 = v23;
            }
          }
        }
      }
    }
LABEL_20:
    if ( v24 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
      a1->pvBits = v28;
      a1->pvScan0 = v29;
    }
    goto LABEL_21;
  }
  if ( a3 + 7 >= a3 )
  {
    v11 = (a3 + 7) & 0xFFFFFFF8;
    if ( Size + 7 >= Size )
    {
      v12 = (Size + 7) & 0xFFFFFFF8;
      if ( v11 < 0xFFFFFFB0 )
      {
        v13 = v11 + 80;
        v14 = v12 + v11 + 80;
        v15 = -1;
        if ( v12 + v13 >= v13 )
          v15 = v14;
        v26 = v15;
        if ( v14 >= v13 )
        {
          v16 = UMPDOBJ::bThunkLargeBitmap(v30, a1, &v28, &v29, &v24, &v22, &v26);
          v9 = v22;
          if ( !v16 )
            goto LABEL_20;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v7;
}
