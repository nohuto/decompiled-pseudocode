/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0287F30
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
  ULONG v14; // eax
  unsigned int v15; // eax
  int v16; // esi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  void *v24; // [rsp+A8h] [rbp-68h] BYREF
  void *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v28; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v29; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v30; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v31; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v32; // [rsp+E8h] [rbp-28h]
  struct _BLENDOBJ *v33; // [rsp+F0h] [rbp-20h]
  _QWORD Src[10]; // [rsp+100h] [rbp-10h] BYREF

  v7 = 0;
  v31 = a5;
  v32 = a6;
  v10 = a2;
  v33 = a7;
  v11 = 0;
  v30 = a3;
  v12 = 0;
  v28 = a2;
  v19 = 1;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  memset(Src, 0, sizeof(Src));
  v13 = v29;
  if ( !v29 )
    goto LABEL_21;
  if ( !*((_DWORD *)v29 + 109) )
    goto LABEL_8;
  if ( a4 )
    v14 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v14 = 0;
  v19 = v14 + 152;
  v15 = UMPDOBJ::bThunkLargeBitmaps(
          v29,
          a1,
          v10,
          0LL,
          &v27,
          &v26,
          &v25,
          &v24,
          0LL,
          0LL,
          &v23,
          &v20,
          &v22,
          &v21,
          0LL,
          0LL,
          &v19);
  v11 = v20;
  v16 = v15;
  v12 = v21;
  v19 = v15;
  if ( v15 )
  {
    v10 = v28;
LABEL_8:
    Src[0] = 0x4700000050LL;
    Src[2] = *(_QWORD *)v13;
    Src[5] = v30;
    Src[7] = v31;
    Src[8] = v32;
    Src[9] = v33;
    Src[3] = a1;
    Src[4] = v10;
    Src[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), (struct _SURFOBJ **)&Src[3], v11)
      || !(unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), (struct _SURFOBJ **)&Src[4], v12)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 112), (const void **)&Src[5], 0x18u)
      || !(unsigned int)UMPDOBJ::pxlo(v13, (struct _XLATEOBJ **)&Src[6])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&Src[7], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&Src[8], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 304), (const void **)&Src[9], 4u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v13, Src, 0x50u, &v19, Size) == -1)
      || (v16 = 1, !v19) )
    {
      v16 = 0;
    }
  }
  if ( *((_DWORD *)v13 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)a1,
      (unsigned __int64)v28,
      0LL,
      v27,
      v26,
      v25,
      v24,
      0LL,
      0LL,
      v23,
      v11,
      v22,
      v12,
      0,
      0);
  v7 = v16;
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v7;
}
