/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0287280
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02848B0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C0288350 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  int v7; // r14d
  int v8; // r15d
  int v9; // r12d
  struct _SURFOBJ *v10; // rsi
  UMPDOBJ *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  int v25; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v26; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v27; // [rsp+B8h] [rbp-58h]
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  void *v30; // [rsp+D0h] [rbp-40h] BYREF
  void *v31; // [rsp+D8h] [rbp-38h] BYREF
  void *v32; // [rsp+E0h] [rbp-30h] BYREF
  void *v33; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v34; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v35; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v36; // [rsp+100h] [rbp-10h]
  _QWORD v37[10]; // [rsp+110h] [rbp+0h] BYREF

  v6 = 0;
  v36 = a1;
  v7 = 0;
  v25 = 0;
  v24 = 0;
  v8 = 0;
  v23 = 0;
  v9 = 0;
  v20 = 0;
  v10 = a2;
  v21 = 0;
  v22 = 0;
  v26 = a4;
  v27 = a3;
  v34 = a2;
  v19 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v33 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  memset(v37, 0, 0x48uLL);
  v11 = v35;
  if ( !v35 )
    goto LABEL_19;
  if ( !*((_DWORD *)v35 + 109) )
    goto LABEL_8;
  if ( a5 )
    v12 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
  else
    v12 = 104;
  v19 = v12;
  v13 = UMPDOBJ::bThunkLargeBitmaps(
          v35,
          v10,
          v27,
          v26,
          &v33,
          &v32,
          &v31,
          &v30,
          &v29,
          &v28,
          &v25,
          &v20,
          &v24,
          &v21,
          &v23,
          &v22,
          &v19);
  v7 = v20;
  v14 = v13;
  v8 = v21;
  v9 = v22;
  v19 = v13;
  if ( v13 )
  {
    v10 = v34;
LABEL_8:
    v37[0] = 0xC00000048LL;
    v37[2] = *(_QWORD *)v11;
    v37[6] = v36;
    v37[4] = v27;
    v37[5] = v26;
    LODWORD(v37[8]) = a6;
    v37[3] = v10;
    v37[7] = a5;
    if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 144), (const void **)&v37[6], 24LL)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&v37[3], v7)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 80), (struct _SURFOBJ **)&v37[4], v8)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 96), (struct _SURFOBJ **)&v37[5], v9)
      || !(unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v37[7], v15, v16)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v11, v37, 72LL, &v19, Size) == -1)
      || (v14 = 1, !v19) )
    {
      v14 = 0;
    }
  }
  if ( *((_DWORD *)v11 + 109) )
    UMPDOBJ::RestoreBitmaps(
      v11,
      (unsigned __int64)v34,
      (unsigned __int64)v27,
      (unsigned __int64)v26,
      v33,
      v32,
      v31,
      v30,
      v29,
      v28,
      v25,
      v7,
      v24,
      v8,
      v23,
      v9);
  v6 = v14;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v6;
}
