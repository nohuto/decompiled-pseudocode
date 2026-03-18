/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00BB360
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C00B99A0 (-bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  __int64 v10; // r9
  UMPDOBJ *v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  void *v18; // r14
  UMPDOBJ *v19; // rcx
  char *KernelPtr; // rax
  size_t v22; // [rsp+20h] [rbp-B9h]
  int v23; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+44h] [rbp-95h] BYREF
  int v25; // [rsp+48h] [rbp-91h] BYREF
  void *v26; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-81h] BYREF
  void *v28; // [rsp+60h] [rbp-79h]
  void *v29; // [rsp+68h] [rbp-71h] BYREF
  void *v30; // [rsp+70h] [rbp-69h] BYREF
  UMPDOBJ *v31; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-59h]
  _QWORD v33[8]; // [rsp+90h] [rbp-49h] BYREF

  v7 = -1;
  v28 = a6;
  v24 = -1;
  v32 = a4;
  LODWORD(v26) = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v31);
  v25 = 0;
  v9 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v23 = 0;
  memset(v33, 0, sizeof(v33));
  v11 = v31;
  if ( !v31 )
    goto LABEL_21;
  if ( !*((_DWORD *)v31 + 109) )
  {
LABEL_10:
    v33[0] = 0x1800000040LL;
    v33[2] = *(_QWORD *)v11;
    v33[3] = a1;
    v33[4] = __PAIR64__(a3, (unsigned int)v26);
    v18 = (void *)(v32 & -(__int64)(a3 != 0));
    v33[5] = v18;
    LODWORD(v33[6]) = Size;
    v28 = (void *)((unsigned __int64)v28 & -(__int64)(Size != 0));
    v33[7] = v28;
    if ( (_DWORD)v26 != 25 || *((int *)a1->hdev + 460) >= 0 )
      goto LABEL_11;
    if ( v18 )
    {
      v26 = *(void **)((v32 & -(__int64)(a3 != 0)) + 0x18);
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 272), (const void **)&v26, 4LL) )
      {
        *(_QWORD *)(v33[5] + 24LL) = v26;
LABEL_11:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v11, v18)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v19, (const void **)&v33[5], a3, v10))
          && (!Size || (v33[7] = UMPDOBJ::_AllocUserMem(v11, Size, 1LL, v10)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&v33[3], v9) )
          {
            LODWORD(v22) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, v33, 64LL, &v24, v22) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v11, (char *)v33[7]);
                memmove(v28, KernelPtr, Size);
              }
              v7 = v24;
            }
          }
        }
      }
    }
LABEL_20:
    if ( v25 )
    {
      if ( v9 )
        UMPDOBJ::bDeleteLargeBitmaps(v11, a1, 0LL, 0LL);
      a1->pvBits = v29;
      a1->pvScan0 = v30;
    }
    goto LABEL_21;
  }
  if ( a3 + 7 >= a3 )
  {
    v12 = (a3 + 7) & 0xFFFFFFF8;
    if ( Size + 7 >= Size )
    {
      v13 = (Size + 7) & 0xFFFFFFF8;
      if ( v12 < 0xFFFFFFB0 )
      {
        v14 = v12 + 80;
        v15 = v13 + v12 + 80;
        v16 = -1;
        if ( v13 + v14 >= v14 )
          v16 = v15;
        v27 = v16;
        if ( v15 >= v14 )
        {
          v17 = UMPDOBJ::bThunkLargeBitmap(v31, a1, &v29, &v30, &v25, &v23, &v27);
          v9 = v23;
          if ( !v17 )
            goto LABEL_20;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v31);
  return v7;
}
