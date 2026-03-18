/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003E6DC
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x1C0126280 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0042140 (HT_CreateStandardMonoPattern.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FDBCC (-SETFLAG@@YAXHAECKK@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  void *v11; // rax
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  __int64 v19; // rsi
  __int64 v20; // [rsp+68h] [rbp-9h] BYREF
  char v21; // [rsp+70h] [rbp-1h]
  int v22; // [rsp+74h] [rbp+3h]
  __int16 v23; // [rsp+78h] [rbp+7h] BYREF
  char v24; // [rsp+7Ah] [rbp+9h]
  char v25; // [rsp+7Bh] [rbp+Ah]
  __int16 v26; // [rsp+7Ch] [rbp+Bh]
  unsigned __int16 v27; // [rsp+80h] [rbp+Fh]
  unsigned __int16 v28; // [rsp+82h] [rbp+11h]
  __int64 v29; // [rsp+88h] [rbp+17h]
  _QWORD v30[5]; // [rsp+90h] [rbp+1Fh] BYREF

  if ( PDEVOBJ::pDevHTInfo(this, a2, a3, a4) || (unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
  {
    LODWORD(v8) = 0;
    v9 = 1464LL;
    v10 = 0LL;
    do
    {
      v29 = 0LL;
      v25 = byte_1C02E6B10[v10];
      v23 = 1;
      v24 = 4;
      v26 = 3848;
      v11 = PDEVOBJ::pDevHTInfo(this, v5, v6, v7);
      v12 = HT_CreateStandardMonoPattern(v11, &v23);
      if ( v12 <= 0 )
        break;
      memset(v30, 0, 0x20uLL);
      v30[2] = 0LL;
      v20 = 0LL;
      v22 = 0;
      HIDWORD(v30[0]) = v27;
      LODWORD(v30[1]) = v28;
      LODWORD(v30[0]) = 1;
      LODWORD(v30[3]) = 1;
      v21 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)v30, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v20 )
        goto LABEL_11;
      v21 |= 1u;
      LOBYTE(v13) = 5;
      HmgSetOwner(*(_QWORD *)(v20 + 32), 0LL, v13);
      LODWORD(v8) = v8 + 1;
      v14 = *(_QWORD *)this;
      ++v10;
      *(_QWORD *)(v9 + v14) = *(_QWORD *)(v20 + 32);
      v9 += 8LL;
      v29 = *(_QWORD *)(v20 + 72);
      v17 = PDEVOBJ::pDevHTInfo(this, v14, v15, v16);
      if ( (unsigned int)HT_CreateStandardMonoPattern(v17, &v23) != v12 )
      {
LABEL_11:
        SURFMEM::~SURFMEM((SURFMEM *)&v20);
        break;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v20);
    }
    while ( v9 < 1512 );
    if ( (int)v8 >= 6 )
    {
      SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 32LL), 0x100u);
      return 1LL;
    }
    v8 = (int)v8;
    if ( (int)v8 > 0 )
    {
      v19 = 8LL * (int)v8 + 1464;
      do
      {
        v19 -= 8LL;
        --v8;
        bDeleteSurface(*(_QWORD *)(v19 + *(_QWORD *)this));
      }
      while ( v8 > 0 );
    }
  }
  return 0LL;
}
