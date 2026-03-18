/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C013ADB0
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

__int64 __fastcall UMPDDrvCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  struct _SURFOBJ *v9; // rsi
  int v10; // r15d
  int v11; // r14d
  UMPDOBJ *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // esi
  unsigned int v19; // eax
  unsigned int v20; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v22; // [rsp+90h] [rbp-80h] BYREF
  int v23; // [rsp+94h] [rbp-7Ch] BYREF
  int v24; // [rsp+98h] [rbp-78h] BYREF
  int v25; // [rsp+9Ch] [rbp-74h] BYREF
  int v26; // [rsp+A0h] [rbp-70h] BYREF
  void *v27; // [rsp+A8h] [rbp-68h] BYREF
  void *v28; // [rsp+B0h] [rbp-60h] BYREF
  void *v29; // [rsp+B8h] [rbp-58h] BYREF
  void *v30; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v31; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v32; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v33; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v34; // [rsp+E0h] [rbp-30h]
  struct _POINTL *v35; // [rsp+E8h] [rbp-28h]
  _QWORD v36[10]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = 0;
  v34 = a5;
  v35 = a6;
  v33 = a3;
  v9 = a2;
  v31 = a2;
  v10 = 0;
  v22 = 1;
  v11 = 0;
  v26 = 0;
  v25 = 0;
  v23 = 0;
  v24 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v32);
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  memset(v36, 0, 0x48uLL);
  v12 = v32;
  if ( !v32 )
    goto LABEL_14;
  if ( !*((_DWORD *)v32 + 109) )
    goto LABEL_3;
  if ( a4 )
    v19 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 152;
  else
    v19 = 128;
  v22 = v19;
  v20 = UMPDOBJ::bThunkLargeBitmaps(
          v32,
          a1,
          v9,
          0LL,
          &v30,
          &v29,
          &v28,
          &v27,
          0LL,
          0LL,
          &v26,
          &v23,
          &v25,
          &v24,
          0LL,
          0LL,
          &v22);
  v10 = v23;
  v17 = v20;
  v11 = v24;
  v22 = v20;
  if ( v20 )
  {
    v9 = v31;
LABEL_3:
    v36[0] = 0x1300000048LL;
    v36[2] = *(_QWORD *)v12;
    v36[5] = v33;
    v36[7] = v34;
    v36[8] = v35;
    v36[3] = a1;
    v36[4] = v9;
    v36[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v36[3], v10)
      || !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), (struct _SURFOBJ **)&v36[4], v11)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&v36[5], 24LL)
      || !(unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&v36[6], v13, v14)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v36[7], 0x10u, v15)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v36[8], 8u, v16)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v36, 72LL, &v22, Size) == -1)
      || (v17 = 1, !v22) )
    {
      v17 = 0;
    }
  }
  if ( *((_DWORD *)v12 + 109) )
    UMPDOBJ::RestoreBitmaps(v12, a1, v31, 0LL, v30, v29, v28, v27, 0LL, 0LL, v26, v10, v25, v11, 0, 0);
  v6 = v17;
LABEL_14:
  XUMPDOBJ::~XUMPDOBJ(&v32);
  return v6;
}
