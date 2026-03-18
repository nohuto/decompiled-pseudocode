/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0284A60
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

__int64 __fastcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  struct _SURFOBJ *v10; // rsi
  int v11; // r15d
  int v12; // r14d
  UMPDOBJ *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  void *v28; // [rsp+A8h] [rbp-68h] BYREF
  void *v29; // [rsp+B0h] [rbp-60h] BYREF
  void *v30; // [rsp+B8h] [rbp-58h] BYREF
  void *v31; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v32; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v33; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v34; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v35; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v36; // [rsp+E8h] [rbp-28h]
  struct _BLENDOBJ *v37; // [rsp+F0h] [rbp-20h]
  _QWORD v38[10]; // [rsp+100h] [rbp-10h] BYREF

  v7 = 0;
  v35 = a5;
  v36 = a6;
  v10 = a2;
  v37 = a7;
  v11 = 0;
  v34 = a3;
  v12 = 0;
  v32 = a2;
  v23 = 1;
  v27 = 0;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  memset(v38, 0, sizeof(v38));
  v13 = v33;
  if ( !v33 )
    goto LABEL_21;
  if ( !*((_DWORD *)v33 + 109) )
    goto LABEL_8;
  if ( a4 )
    v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 176;
  else
    v14 = 152;
  v23 = v14;
  v15 = UMPDOBJ::bThunkLargeBitmaps(
          v33,
          a1,
          v10,
          0LL,
          &v31,
          &v30,
          &v29,
          &v28,
          0LL,
          0LL,
          &v27,
          &v24,
          &v26,
          &v25,
          0LL,
          0LL,
          &v23);
  v11 = v24;
  v16 = v15;
  v12 = v25;
  v23 = v15;
  if ( v15 )
  {
    v10 = v32;
LABEL_8:
    v38[0] = 0x4700000050LL;
    v38[2] = *(_QWORD *)v13;
    v38[5] = v34;
    v38[7] = v35;
    v38[8] = v36;
    v38[9] = v37;
    v38[3] = a1;
    v38[4] = v10;
    v38[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), (struct _SURFOBJ **)&v38[3], v11)
      || !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), (struct _SURFOBJ **)&v38[4], v12)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), (const void **)&v38[5], 24LL)
      || !(unsigned int)UMPDOBJ::pxlo(v13, (struct _XLATEOBJ **)&v38[6], v17, v18)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v38[7], 0x10u, v19)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v38[8], 0x10u, v20)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 304), (const void **)&v38[9], 4LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v13, v38, 80LL, &v23, Size) == -1)
      || (v16 = 1, !v23) )
    {
      v16 = 0;
    }
  }
  if ( *((_DWORD *)v13 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)a1,
      (unsigned __int64)v32,
      0LL,
      v31,
      v30,
      v29,
      v28,
      0LL,
      0LL,
      v27,
      v11,
      v26,
      v12,
      0,
      0);
  v7 = v16;
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v33);
  return v7;
}
