/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0131340
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0097B84 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C0287D88 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C028B844 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        struct _BRUSHOBJ *a12,
        unsigned int a13)
{
  unsigned int v13; // edi
  struct _SURFOBJ *v14; // rsi
  int v15; // r12d
  int v16; // r14d
  int v17; // r15d
  UMPDOBJ *v18; // rbx
  int v19; // esi
  ULONG v21; // eax
  unsigned int v22; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v24; // [rsp+90h] [rbp-80h] BYREF
  int v25; // [rsp+94h] [rbp-7Ch] BYREF
  int v26; // [rsp+98h] [rbp-78h] BYREF
  int v27; // [rsp+9Ch] [rbp-74h] BYREF
  int v28; // [rsp+A0h] [rbp-70h] BYREF
  int v29; // [rsp+A4h] [rbp-6Ch] BYREF
  int v30; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v31; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v32; // [rsp+B8h] [rbp-58h]
  void *v33; // [rsp+C0h] [rbp-50h] BYREF
  void *v34; // [rsp+C8h] [rbp-48h] BYREF
  void *v35; // [rsp+D0h] [rbp-40h] BYREF
  void *v36; // [rsp+D8h] [rbp-38h] BYREF
  void *v37; // [rsp+E0h] [rbp-30h] BYREF
  void *v38; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v39; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v40; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v41; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v42; // [rsp+108h] [rbp-8h]
  struct _POINTL *v43; // [rsp+110h] [rbp+0h]
  struct _RECTL *v44; // [rsp+118h] [rbp+8h]
  struct _RECTL *v45; // [rsp+120h] [rbp+10h]
  struct _POINTL *v46; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v47; // [rsp+130h] [rbp+20h]
  _QWORD Src[16]; // [rsp+140h] [rbp+30h] BYREF

  v13 = 0;
  v14 = a1;
  v42 = a6;
  v15 = 0;
  v16 = 0;
  v43 = a7;
  v17 = 0;
  v44 = a8;
  v45 = a9;
  v46 = a10;
  v39 = a1;
  v47 = a12;
  v41 = a4;
  v31 = a3;
  v32 = a2;
  v24 = 1;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v40);
  v38 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  memset(Src, 0, sizeof(Src));
  v18 = v40;
  if ( !v40 )
    goto LABEL_19;
  if ( !*((_DWORD *)v40 + 109) )
    goto LABEL_3;
  if ( a5 )
    v21 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v21 = 0;
  v24 = v21 + 256;
  v22 = UMPDOBJ::bThunkLargeBitmaps(
          v40,
          v14,
          v32,
          v31,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v33,
          &v30,
          &v25,
          &v29,
          &v26,
          &v28,
          &v27,
          &v24);
  v15 = v25;
  v19 = v22;
  v16 = v26;
  v17 = v27;
  v24 = v22;
  if ( v22 )
  {
    v14 = v39;
LABEL_3:
    Src[0] = 0x4500000080LL;
    Src[2] = *(_QWORD *)v18;
    Src[4] = v32;
    Src[5] = v31;
    Src[6] = v41;
    Src[8] = v42;
    Src[9] = v43;
    Src[10] = v44;
    Src[11] = v45;
    Src[12] = v46;
    LODWORD(Src[13]) = a11;
    Src[14] = v47;
    LODWORD(Src[15]) = a13;
    Src[3] = v14;
    Src[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 64), (struct _SURFOBJ **)&Src[3], v15)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), (struct _SURFOBJ **)&Src[4], v16)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), (struct _SURFOBJ **)&Src[5], v17)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 112), (const void **)&Src[6], 0x18u)
      || !(unsigned int)UMPDOBJ::pxlo(v18, (struct _XLATEOBJ **)&Src[7])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[8], 0x18u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[9], 8u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[10], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[11], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&Src[12], 8u)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 144), (const void **)&Src[14], 0x18u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v18, Src, 0x80u, &v24, Size) == -1)
      || (v19 = 1, !v24) )
    {
      v19 = 0;
    }
  }
  if ( *((_DWORD *)v18 + 109) )
    UMPDOBJ::RestoreBitmaps(v18, v39, v32, v31, v38, v37, v36, v35, v34, v33, v30, v15, v29, v16, v28, v17);
  v13 = v19;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v40);
  return v13;
}
