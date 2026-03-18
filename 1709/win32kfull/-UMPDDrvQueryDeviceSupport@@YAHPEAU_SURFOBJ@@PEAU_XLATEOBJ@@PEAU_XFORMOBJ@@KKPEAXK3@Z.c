/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02868C0
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
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  __int64 v11; // r9
  UMPDOBJ *v12; // rbx
  ULONG v14; // ecx
  unsigned int v15; // r15d
  int v16; // edx
  unsigned int v17; // edx
  int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  void *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  char *v27; // rdx
  char *KernelPtr; // rax
  int v29; // eax
  size_t v30; // [rsp+20h] [rbp-118h]
  int v31; // [rsp+40h] [rbp-F8h]
  int v32; // [rsp+44h] [rbp-F4h] BYREF
  int v33; // [rsp+48h] [rbp-F0h] BYREF
  int v34; // [rsp+4Ch] [rbp-ECh] BYREF
  UMPDOBJ *v35; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-DCh]
  void *v38; // [rsp+60h] [rbp-D8h] BYREF
  void *v39; // [rsp+68h] [rbp-D0h] BYREF
  int v40; // [rsp+70h] [rbp-C8h]
  unsigned int v41; // [rsp+74h] [rbp-C4h]
  int v42; // [rsp+78h] [rbp-C0h]
  unsigned int v43; // [rsp+7Ch] [rbp-BCh]
  struct _XLATEOBJ *v44; // [rsp+80h] [rbp-B8h]
  struct _XFORMOBJ *v45; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v46; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+98h] [rbp-A0h]
  struct _SURFOBJ *v48; // [rsp+A0h] [rbp-98h]
  _QWORD v49[10]; // [rsp+B0h] [rbp-88h] BYREF

  v37 = a4;
  v45 = a3;
  v44 = a2;
  v46 = (unsigned __int64)a8;
  v47 = (unsigned __int64)a6;
  v48 = a1;
  v10 = 1;
  v32 = 1;
  v34 = 0;
  v31 = 0;
  v33 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v38 = 0LL;
  v39 = 0LL;
  memset(v49, 0, sizeof(v49));
  v12 = v35;
  if ( !v35 )
  {
LABEL_2:
    XUMPDOBJ::~XUMPDOBJ(&v35);
    return 0LL;
  }
  if ( *((_DWORD *)v35 + 109) )
  {
    if ( a2 )
      v14 = ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120;
    else
      v14 = 96;
    v15 = a5;
    v16 = -1;
    if ( a5 + 7 >= a5 )
      v16 = a5 + 7;
    v40 = v16;
    if ( a5 + 7 < a5 )
      goto LABEL_2;
    v17 = v16 & 0xFFFFFFF8;
    v41 = v17;
    v18 = -1;
    if ( Size + 7 >= Size )
      v18 = Size + 7;
    v42 = v18;
    if ( Size + 7 < Size )
      goto LABEL_2;
    v19 = v18 & 0xFFFFFFF8;
    v43 = v19;
    v20 = v17 + v14;
    if ( v17 + v14 < v14 )
      goto LABEL_2;
    v21 = v17 + v14;
    v22 = v19 + v20;
    v23 = -1;
    if ( v19 + v21 >= v21 )
      v23 = v22;
    v36 = v23;
    if ( v22 < v21 )
      goto LABEL_2;
    v10 = UMPDOBJ::bThunkLargeBitmap(v35, a1, &v38, &v39, &v34, &v33, &v36);
    v32 = v10;
    v31 = v33;
  }
  else
  {
    v15 = a5;
  }
  if ( v10 )
  {
    v49[0] = 0x4C00000050LL;
    v49[2] = *(_QWORD *)v12;
    v49[3] = a1;
    v49[4] = v44;
    v49[5] = v45;
    v24 = (void *)(v46 & -(__int64)(Size != 0));
    v49[6] = __PAIR64__(v15, v37);
    v49[7] = v47 & -(__int64)(v15 != 0);
    LODWORD(v49[8]) = Size;
    v49[9] = v24;
    if ( (!v15 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v49[7], v15, v11))
      && (!Size || (v49[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1LL, v11)) != 0LL) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v49[3], v31) )
      {
        if ( (unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&v49[4], v25, v26) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&v49[5], 4LL) )
          {
            LODWORD(v30) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v12, v49, 80LL, &v32, v30) != -1 )
            {
              if ( Size )
              {
                v27 = (char *)v49[9];
                if ( (unsigned __int64)Size + v49[9] > MmUserProbeAddress || (unsigned __int64)Size + v49[9] < v49[9] )
                  *(_BYTE *)MmUserProbeAddress = 0;
                KernelPtr = UMPDOBJ::GetKernelPtr(v12, v27);
                memmove(v24, KernelPtr, Size);
              }
              v10 = v32;
              v29 = v31;
              goto LABEL_36;
            }
          }
        }
      }
    }
    v10 = 0;
  }
  v29 = v31;
LABEL_36:
  if ( v34 )
  {
    if ( v29 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v38;
    a1->pvScan0 = v39;
  }
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v10;
}
