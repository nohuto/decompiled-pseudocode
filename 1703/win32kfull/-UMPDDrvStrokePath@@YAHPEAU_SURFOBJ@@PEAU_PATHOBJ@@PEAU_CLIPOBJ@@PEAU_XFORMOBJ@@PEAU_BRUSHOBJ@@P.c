/*
 * XREFs of ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1C0273A6C (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  int v11; // r15d
  UMPDOBJ *v12; // rbx
  ULONG v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v24; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _BRUSHOBJ *v26; // [rsp+78h] [rbp-88h]
  struct _POINTL *v27; // [rsp+80h] [rbp-80h]
  _QWORD Src[12]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 0;
  v26 = a5;
  v27 = a6;
  v11 = 0;
  v25 = a4;
  v24 = a3;
  v18 = 1;
  v20 = 0;
  v19 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v21 = 0LL;
  v22 = 0LL;
  memset(Src, 0, sizeof(Src));
  v12 = v23;
  if ( v23 )
  {
    if ( !*((_DWORD *)v23 + 109)
      || (!a7 ? (v13 = 0) : (v13 = ((4 * a7->cstyle + 7) & 0xFFFFFFF8) + 40),
          v18 = v13 + 176,
          v14 = UMPDOBJ::bThunkLargeBitmap(v23, a1, &v21, &v22, &v20, &v19, &v18),
          v11 = v19,
          v15 = v14,
          (v18 = v14) != 0) )
    {
      Src[0] = 0xE00000060LL;
      Src[2] = *(_QWORD *)v12;
      Src[5] = v24;
      Src[6] = v25;
      Src[7] = v26;
      Src[8] = v27;
      LODWORD(Src[11]) = a8;
      Src[3] = a1;
      Src[4] = a2;
      Src[9] = a7;
      if ( !(unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&Src[3], v11)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 224), (const void **)&Src[4], 8u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 112), (const void **)&Src[5], 0x18u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 272), (const void **)&Src[6], 4u)
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&Src[7], 0x18u)
        || !(unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&Src[8], 8u)
        || !(unsigned int)UMPDOBJ::ThunkLINEATTRS(v12, (struct _LINEATTRS **)&Src[9])
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v12, Src, 0x60u, &v18, Size) == -1)
        || (v15 = 1, !v18) )
      {
        v15 = 0;
      }
    }
    if ( v20 )
    {
      if ( v11 )
        UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
      a1->pvBits = v21;
      a1->pvScan0 = v22;
    }
    v8 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return v8;
}
