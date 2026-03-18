/*
 * XREFs of ?UMPDDrvTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KI@Z @ 0x1C028B180
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
  ULONG v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v20; // [rsp+90h] [rbp-80h] BYREF
  int v21; // [rsp+94h] [rbp-7Ch] BYREF
  int v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+9Ch] [rbp-74h] BYREF
  int v24; // [rsp+A0h] [rbp-70h] BYREF
  void *v25; // [rsp+A8h] [rbp-68h] BYREF
  void *v26; // [rsp+B0h] [rbp-60h] BYREF
  void *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v29; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v30; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v31; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v32; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v33; // [rsp+E8h] [rbp-28h]
  _QWORD Src[10]; // [rsp+F0h] [rbp-20h] BYREF

  v8 = 0;
  v32 = a5;
  v33 = a6;
  v31 = a3;
  v11 = a2;
  v29 = a2;
  v12 = 0;
  v20 = 1;
  v13 = 0;
  v24 = 0;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  memset(Src, 0, sizeof(Src));
  v14 = v30;
  if ( !v30 )
    goto LABEL_20;
  if ( !*((_DWORD *)v30 + 109) )
    goto LABEL_8;
  if ( a4 )
    v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v15 = 0;
  v20 = v15 + 144;
  v16 = UMPDOBJ::bThunkLargeBitmaps(
          v30,
          a1,
          v11,
          0LL,
          &v28,
          &v27,
          &v26,
          &v25,
          0LL,
          0LL,
          &v24,
          &v21,
          &v23,
          &v22,
          0LL,
          0LL,
          &v20);
  v12 = v21;
  v17 = v16;
  v13 = v22;
  v20 = v16;
  if ( v16 )
  {
    v11 = v29;
LABEL_8:
    Src[0] = 0x4A00000050LL;
    Src[2] = *(_QWORD *)v14;
    Src[5] = v31;
    Src[7] = v32;
    Src[8] = v33;
    Src[9] = __PAIR64__(a8, a7);
    Src[3] = a1;
    Src[4] = v11;
    Src[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 64), (struct _SURFOBJ **)&Src[3], v12)
      || !(unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), (struct _SURFOBJ **)&Src[4], v13)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 112), (const void **)&Src[5], 0x18u)
      || !(unsigned int)UMPDOBJ::pxlo(v14, (struct _XLATEOBJ **)&Src[6])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[7], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&Src[8], 0x10u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v14, Src, 0x50u, &v20, Size) == -1)
      || (v17 = 1, !v20) )
    {
      v17 = 0;
    }
  }
  if ( *((_DWORD *)v14 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v14,
      (unsigned __int64)a1,
      (unsigned __int64)v29,
      0LL,
      v28,
      v27,
      v26,
      v25,
      0LL,
      0LL,
      v24,
      v12,
      v23,
      v13,
      0,
      0);
  v8 = v17;
LABEL_20:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v8;
}
