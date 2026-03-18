/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C0289DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0097B84 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  UMPDOBJ *v11; // rbx
  ULONG v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  void *v23; // rsi
  char *v24; // rdx
  char *KernelPtr; // rax
  int v26; // eax
  size_t v27; // [rsp+20h] [rbp-118h]
  int v28; // [rsp+40h] [rbp-F8h]
  int v29; // [rsp+44h] [rbp-F4h] BYREF
  int v30; // [rsp+48h] [rbp-F0h] BYREF
  int v31; // [rsp+4Ch] [rbp-ECh] BYREF
  UMPDOBJ *v32; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-DCh]
  void *v35; // [rsp+60h] [rbp-D8h] BYREF
  void *v36; // [rsp+68h] [rbp-D0h] BYREF
  int v37; // [rsp+70h] [rbp-C8h]
  unsigned int v38; // [rsp+74h] [rbp-C4h]
  int v39; // [rsp+78h] [rbp-C0h]
  unsigned int v40; // [rsp+7Ch] [rbp-BCh]
  struct _XLATEOBJ *v41; // [rsp+80h] [rbp-B8h]
  struct _XFORMOBJ *v42; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+98h] [rbp-A0h]
  struct _SURFOBJ *v45; // [rsp+A0h] [rbp-98h]
  _QWORD Src[10]; // [rsp+B0h] [rbp-88h] BYREF

  v34 = a4;
  v42 = a3;
  v41 = a2;
  v43 = (unsigned __int64)a8;
  v44 = (unsigned __int64)a6;
  v45 = a1;
  v10 = 1;
  v29 = 1;
  v31 = 0;
  v28 = 0;
  v30 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v35 = 0LL;
  v36 = 0LL;
  memset(Src, 0, sizeof(Src));
  v11 = v32;
  if ( !v32 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v32);
    return 0LL;
  }
  if ( *((_DWORD *)v32 + 109) )
  {
    if ( a2 )
      v13 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 24;
    else
      v13 = 0;
    v14 = v13 + 96;
    v15 = a5;
    v16 = -1;
    if ( a5 + 7 >= a5 )
      v16 = a5 + 7;
    v37 = v16;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v17 = v16 & 0xFFFFFFF8;
    v38 = v17;
    v18 = -1;
    if ( Size + 7 >= Size )
      v18 = Size + 7;
    v39 = v18;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v19 = v18 & 0xFFFFFFF8;
    v40 = v19;
    if ( v17 + v14 < v14 )
      goto LABEL_2;
    v20 = v17 + v14;
    v21 = v19 + v17 + v14;
    v22 = -1;
    if ( v19 + v20 >= v20 )
      v22 = v21;
    v33 = v22;
    if ( v21 < v20 )
      goto LABEL_2;
    v10 = UMPDOBJ::bThunkLargeBitmap(v32, a1, &v35, &v36, &v31, &v30, &v33);
    v29 = v10;
    v28 = v30;
  }
  else
  {
    v15 = a5;
  }
  if ( v10 )
  {
    Src[0] = 0x4C00000050LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = a1;
    Src[4] = v41;
    Src[5] = v42;
    v23 = (void *)(v43 & -(__int64)(Size != 0));
    Src[6] = __PAIR64__(v15, v34);
    Src[7] = v44 & -(__int64)(v15 != 0);
    LODWORD(Src[8]) = Size;
    Src[9] = v23;
    if ( (!v15 || (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&Src[7], v15))
      && (!Size || (Src[9] = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&Src[3], v28) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&Src[4]) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 272), (const void **)&Src[5], 4u) )
          {
            LODWORD(v27) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v11, Src, 0x50u, &v29, v27) != -1 )
            {
              if ( Size )
              {
                v24 = (char *)Src[9];
                if ( (unsigned __int64)Size + Src[9] > W32UserProbeAddress || (unsigned __int64)Size + Src[9] < Src[9] )
                  *W32UserProbeAddress = 0;
                KernelPtr = UMPDOBJ::GetKernelPtr(v11, v24);
                memmove(v23, KernelPtr, Size);
              }
              v10 = v29;
              v26 = v28;
              goto LABEL_36;
            }
          }
        }
      }
    }
    v10 = 0;
  }
  v26 = v28;
LABEL_36:
  if ( v31 )
  {
    if ( v26 )
      UMPDOBJ::bDeleteLargeBitmaps(v11, a1, 0LL, 0LL);
    a1->pvBits = v35;
    a1->pvScan0 = v36;
  }
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v10;
}
