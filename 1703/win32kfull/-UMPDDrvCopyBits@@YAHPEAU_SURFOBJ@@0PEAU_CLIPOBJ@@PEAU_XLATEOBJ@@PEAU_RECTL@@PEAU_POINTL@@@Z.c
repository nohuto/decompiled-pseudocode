/*
 * XREFs of ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0135A00
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
  int v13; // esi
  ULONG v15; // eax
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  void *v23; // [rsp+A8h] [rbp-68h] BYREF
  void *v24; // [rsp+B0h] [rbp-60h] BYREF
  void *v25; // [rsp+B8h] [rbp-58h] BYREF
  void *v26; // [rsp+C0h] [rbp-50h] BYREF
  struct _SURFOBJ *v27; // [rsp+C8h] [rbp-48h]
  UMPDOBJ *v28; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v29; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v30; // [rsp+E0h] [rbp-30h]
  struct _POINTL *v31; // [rsp+E8h] [rbp-28h]
  _QWORD Src[10]; // [rsp+F0h] [rbp-20h] BYREF

  v6 = 0;
  v30 = a5;
  v31 = a6;
  v29 = a3;
  v9 = a2;
  v27 = a2;
  v10 = 0;
  v18 = 1;
  v11 = 0;
  v22 = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v28);
  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  memset(Src, 0, 0x48uLL);
  v12 = v28;
  if ( !v28 )
    goto LABEL_14;
  if ( !*((_DWORD *)v28 + 109) )
    goto LABEL_3;
  if ( a4 )
    v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 24;
  else
    v15 = 0;
  v18 = v15 + 128;
  v16 = UMPDOBJ::bThunkLargeBitmaps(
          v28,
          a1,
          v9,
          0LL,
          &v26,
          &v25,
          &v24,
          &v23,
          0LL,
          0LL,
          &v22,
          &v19,
          &v21,
          &v20,
          0LL,
          0LL,
          &v18);
  v10 = v19;
  v13 = v16;
  v11 = v20;
  v18 = v16;
  if ( v16 )
  {
    v9 = v27;
LABEL_3:
    Src[0] = 0x1300000048LL;
    Src[2] = *(_QWORD *)v12;
    Src[5] = v29;
    Src[7] = v30;
    Src[8] = v31;
    Src[3] = a1;
    Src[4] = v9;
    Src[6] = a4;
    if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v10)
      || !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), (struct _SURFOBJ **)&Src[4], v11)
      || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&Src[5], 0x18u)
      || !(unsigned int)UMPDOBJ::pxlo(v12, (struct _XLATEOBJ **)&Src[6])
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[7], 0x10u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[8], 8u)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x48u, &v18, Size) == -1)
      || (v13 = 1, !v18) )
    {
      v13 = 0;
    }
  }
  if ( *((_DWORD *)v12 + 109) )
    UMPDOBJ::RestoreBitmaps(v12, a1, v27, 0LL, v26, v25, v24, v23, 0LL, 0LL, v22, v10, v21, v11, 0, 0);
  v6 = v13;
LABEL_14:
  XUMPDOBJ::~XUMPDOBJ(&v28);
  return v6;
}
