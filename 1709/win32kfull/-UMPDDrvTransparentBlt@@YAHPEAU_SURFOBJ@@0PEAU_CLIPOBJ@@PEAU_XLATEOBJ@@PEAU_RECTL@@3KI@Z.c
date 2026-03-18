/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x1C0287C90
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

__int64 __fastcall UMPDDrvTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  struct _SURFOBJ *v11; // rsi
  int v12; // r15d
  int v13; // r14d
  UMPDOBJ *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v24; // [rsp+90h] [rbp-80h] BYREF
  int v25; // [rsp+94h] [rbp-7Ch] BYREF
  int v26; // [rsp+98h] [rbp-78h] BYREF
  int v27; // [rsp+9Ch] [rbp-74h] BYREF
  int v28; // [rsp+A0h] [rbp-70h] BYREF
  void *v29; // [rsp+A8h] [rbp-68h] BYREF
  void *v30; // [rsp+B0h] [rbp-60h] BYREF
  void *v31; // [rsp+B8h] [rbp-58h] BYREF
  void *v32; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v33; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v34; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v35; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v36; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v37; // [rsp+E8h] [rbp-28h]
  _QWORD v38[10]; // [rsp+F0h] [rbp-20h] BYREF

  v8 = 0;
  v36 = a5;
  v37 = a6;
  v35 = a3;
  v11 = a2;
  v33 = a2;
  v12 = 0;
  v24 = 1;
  v13 = 0;
  v28 = 0;
  v27 = 0;
  v25 = 0;
  v26 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  memset(v38, 0, sizeof(v38));
  v14 = v34;
  if ( !v34 )
    goto LABEL_20;
  if ( !*((_DWORD *)v34 + 109) )
    goto LABEL_8;
  if ( a4 )
    v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 168;
  else
    v15 = 144;
  v24 = v15;
  v16 = UMPDOBJ::bThunkLargeBitmaps(
          v34,
          a1,
          v11,
          0LL,
          &v32,
          &v31,
          &v30,
          &v29,
          0LL,
          0LL,
          &v28,
          &v25,
          &v27,
          &v26,
          0LL,
          0LL,
          &v24);
  v12 = v25;
  v17 = v16;
  v13 = v26;
  v24 = v16;
  if ( v16 )
  {
    v11 = v33;
LABEL_8:
    v38[0] = 0x4A00000050LL;
    v38[2] = *(_QWORD *)v14;
    v38[5] = v35;
    v38[7] = v36;
    v38[8] = v37;
    v38[9] = __PAIR64__(a8, a7);
    v38[3] = a1;
    v38[4] = v11;
    v38[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&v38[3], v12)
      || !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), (struct _SURFOBJ **)&v38[4], v13)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&v38[5], 24LL)
      || !(unsigned int)UMPDOBJ::pxlo(v14, (struct _XLATEOBJ **)&v38[6], v18, v19)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v38[7], 0x10u, v20)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v38[8], 0x10u, v21)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, v38, 80LL, &v24, Size) == -1)
      || (v17 = 1, !v24) )
    {
      v17 = 0;
    }
  }
  if ( *((_DWORD *)v14 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v33,
      0LL,
      v32,
      v31,
      v30,
      v29,
      0LL,
      0LL,
      v28,
      v12,
      v27,
      v13,
      0,
      0);
  v8 = v17;
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return v8;
}
