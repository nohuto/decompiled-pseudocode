/*
 * XREFs of ?UMPDDrvPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0286300
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

__int64 __fastcall UMPDDrvPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _SURFOBJ *v12; // rsi
  int v13; // r12d
  int v14; // r14d
  int v15; // r15d
  UMPDOBJ *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v29; // [rsp+90h] [rbp-80h] BYREF
  int v30; // [rsp+94h] [rbp-7Ch] BYREF
  int v31; // [rsp+98h] [rbp-78h] BYREF
  int v32; // [rsp+9Ch] [rbp-74h] BYREF
  int v33; // [rsp+A0h] [rbp-70h] BYREF
  int v34; // [rsp+A4h] [rbp-6Ch] BYREF
  int v35; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v36; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v37; // [rsp+B8h] [rbp-58h]
  void *v38; // [rsp+C0h] [rbp-50h] BYREF
  void *v39; // [rsp+C8h] [rbp-48h] BYREF
  void *v40; // [rsp+D0h] [rbp-40h] BYREF
  void *v41; // [rsp+D8h] [rbp-38h] BYREF
  void *v42; // [rsp+E0h] [rbp-30h] BYREF
  void *v43; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v44; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v45; // [rsp+F8h] [rbp-18h] BYREF
  struct _CLIPOBJ *v46; // [rsp+100h] [rbp-10h]
  struct tagCOLORADJUSTMENT *v47; // [rsp+108h] [rbp-8h]
  struct _POINTL *v48; // [rsp+110h] [rbp+0h]
  struct _POINTFIX *v49; // [rsp+118h] [rbp+8h]
  struct _RECTL *v50; // [rsp+120h] [rbp+10h]
  struct _POINTL *v51; // [rsp+128h] [rbp+18h]
  _QWORD v52[14]; // [rsp+130h] [rbp+20h] BYREF

  v11 = 0;
  v12 = a1;
  v47 = a6;
  v13 = 0;
  v14 = 0;
  v48 = a7;
  v15 = 0;
  v49 = a8;
  v50 = a9;
  v44 = a1;
  v51 = a10;
  v46 = a4;
  v36 = a3;
  v37 = a2;
  v29 = 1;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v45);
  v43 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  memset(v52, 0, sizeof(v52));
  v16 = v45;
  if ( !v45 )
    goto LABEL_24;
  if ( !*((_DWORD *)v45 + 109) )
    goto LABEL_8;
  if ( a5 )
    v17 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 248;
  else
    v17 = 224;
  v29 = v17;
  v18 = UMPDOBJ::bThunkLargeBitmaps(
          v45,
          v12,
          v37,
          v36,
          &v43,
          &v42,
          &v41,
          &v40,
          &v39,
          &v38,
          &v35,
          &v30,
          &v34,
          &v31,
          &v33,
          &v32,
          &v29);
  v13 = v30;
  v19 = v18;
  v14 = v31;
  v15 = v32;
  v29 = v18;
  if ( v18 )
  {
    v12 = v44;
LABEL_8:
    v52[0] = 0x4600000070LL;
    v52[2] = *(_QWORD *)v16;
    v52[4] = v37;
    v52[5] = v36;
    v52[6] = v46;
    v52[8] = v47;
    v52[9] = v48;
    v52[10] = v49;
    v52[11] = v50;
    v52[12] = v51;
    LODWORD(v52[13]) = a11;
    v52[3] = v12;
    v52[7] = a5;
    if ( !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 64), (struct _SURFOBJ **)&v52[3], v13)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 80), (struct _SURFOBJ **)&v52[4], v14)
      || !(unsigned int)UMPDOBJ::pso(v16, (UMPDOBJ *)((char *)v16 + 96), (struct _SURFOBJ **)&v52[5], v15)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v16, (UMPDOBJ *)((char *)v16 + 112), (const void **)&v52[6], 24LL)
      || !(unsigned int)UMPDOBJ::pxlo(v16, (struct _XLATEOBJ **)&v52[7], v20, v21)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v52[8], 0x18u, v22)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v52[9], 8u, v23)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v52[10], 0x18u, v24)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v52[11], 0x10u, v25)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v52[12], 8u, v26)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v16, v52, 112LL, &v29, Size) == -1)
      || (v19 = 1, !v29) )
    {
      v19 = 0;
    }
  }
  if ( *((_DWORD *)v16 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v16,
      (unsigned __int64)v44,
      (unsigned __int64)v37,
      (unsigned __int64)v36,
      v43,
      v42,
      v41,
      v40,
      v39,
      v38,
      v35,
      v13,
      v34,
      v14,
      v33,
      v15);
  v11 = v19;
LABEL_24:
  XUMPDOBJ::~XUMPDOBJ(&v45);
  return v11;
}
