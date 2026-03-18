/*
 * XREFs of ?UMPDDrvStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0137600
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02848B0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C0288350 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  int v26; // esi
  unsigned int v28; // eax
  unsigned int v29; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v31; // [rsp+90h] [rbp-80h] BYREF
  int v32; // [rsp+94h] [rbp-7Ch] BYREF
  int v33; // [rsp+98h] [rbp-78h] BYREF
  int v34; // [rsp+9Ch] [rbp-74h] BYREF
  int v35; // [rsp+A0h] [rbp-70h] BYREF
  int v36; // [rsp+A4h] [rbp-6Ch] BYREF
  int v37; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v38; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v39; // [rsp+B8h] [rbp-58h]
  void *v40; // [rsp+C0h] [rbp-50h] BYREF
  void *v41; // [rsp+C8h] [rbp-48h] BYREF
  void *v42; // [rsp+D0h] [rbp-40h] BYREF
  void *v43; // [rsp+D8h] [rbp-38h] BYREF
  void *v44; // [rsp+E0h] [rbp-30h] BYREF
  void *v45; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v46; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v47; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v48; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v49; // [rsp+108h] [rbp-8h]
  struct _POINTL *v50; // [rsp+110h] [rbp+0h]
  struct _RECTL *v51; // [rsp+118h] [rbp+8h]
  struct _RECTL *v52; // [rsp+120h] [rbp+10h]
  struct _POINTL *v53; // [rsp+128h] [rbp+18h]
  struct _BRUSHOBJ *v54; // [rsp+130h] [rbp+20h]
  _QWORD v55[16]; // [rsp+140h] [rbp+30h] BYREF

  v13 = 0;
  v14 = a1;
  v49 = a6;
  v15 = 0;
  v16 = 0;
  v50 = a7;
  v17 = 0;
  v51 = a8;
  v52 = a9;
  v53 = a10;
  v46 = a1;
  v54 = a12;
  v48 = a4;
  v38 = a3;
  v39 = a2;
  v31 = 1;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v47);
  v45 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  memset(v55, 0, sizeof(v55));
  v18 = v47;
  if ( !v47 )
    goto LABEL_19;
  if ( !*((_DWORD *)v47 + 109) )
    goto LABEL_3;
  if ( a5 )
    v28 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 280;
  else
    v28 = 256;
  v31 = v28;
  v29 = UMPDOBJ::bThunkLargeBitmaps(
          v47,
          v14,
          v39,
          v38,
          &v45,
          &v44,
          &v43,
          &v42,
          &v41,
          &v40,
          &v37,
          &v32,
          &v36,
          &v33,
          &v35,
          &v34,
          &v31);
  v15 = v32;
  v26 = v29;
  v16 = v33;
  v17 = v34;
  v31 = v29;
  if ( v29 )
  {
    v14 = v46;
LABEL_3:
    v55[0] = 0x4500000080LL;
    v55[2] = *(_QWORD *)v18;
    v55[4] = v39;
    v55[5] = v38;
    v55[6] = v48;
    v55[8] = v49;
    v55[9] = v50;
    v55[10] = v51;
    v55[11] = v52;
    v55[12] = v53;
    LODWORD(v55[13]) = a11;
    v55[14] = v54;
    LODWORD(v55[15]) = a13;
    v55[3] = v14;
    v55[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 64), (struct _SURFOBJ **)&v55[3], v15)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 80), (struct _SURFOBJ **)&v55[4], v16)
      || !(unsigned int)UMPDOBJ::pso(v18, (UMPDOBJ *)((char *)v18 + 96), (struct _SURFOBJ **)&v55[5], v17)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 112), (const void **)&v55[6], 24LL)
      || !(unsigned int)UMPDOBJ::pxlo(v18, (struct _XLATEOBJ **)&v55[7], v19, v20)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v55[8], 0x18u, v21)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v55[9], 8u, v22)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v55[10], 0x10u, v23)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v55[11], 0x10u, v24)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v55[12], 8u, v25)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v18, (UMPDOBJ *)((char *)v18 + 144), (const void **)&v55[14], 24LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v18, v55, 128LL, &v31, Size) == -1)
      || (v26 = 1, !v31) )
    {
      v26 = 0;
    }
  }
  if ( *((_DWORD *)v18 + 109) )
    UMPDOBJ::RestoreBitmaps(v18, v46, v39, v38, v45, v44, v43, v42, v41, v40, v37, v15, v36, v16, v35, v17);
  v13 = v26;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v47);
  return v13;
}
