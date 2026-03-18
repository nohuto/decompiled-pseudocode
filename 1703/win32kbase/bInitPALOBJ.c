/*
 * XREFs of bInitPALOBJ @ 0x1C01D7B18
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     GreCreateSemaphoreInternal @ 0x1C0054A38 (GreCreateSemaphoreInternal.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00781E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 bInitPALOBJ()
{
  unsigned int v0; // edi
  int *v1; // rcx
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  struct _BASEOBJECT *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r10
  HPALETTE v14; // rax
  struct PALETTE *v15; // rax
  struct _BASEOBJECT *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  HPALETTE *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  __int64 *v20; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  v1 = (int *)&unk_1C018E26C;
  pArrayOfSquares = (unsigned int *)&unk_1C018E26C;
  v2 = 0;
  v3 = (int *)&unk_1C018E26C;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v1++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (HSEMAPHORE)GreCreateSemaphoreInternal();
  if ( !ghsemPalette )
    return 0LL;
  if ( logDefaultPal != 768 || !word_1C0189382 )
    goto LABEL_9;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        (PALMEMOBJ *)&v16,
                        1,
                        (unsigned __int16)word_1C0189382,
                        dword_1C0189384,
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
LABEL_9:
    v7 = 0LL;
    goto LABEL_10;
  }
  v17 = 1;
  v7 = *(_QWORD *)v16;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
LABEL_10:
  if ( !(unsigned int)bSetStockObject(v7, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)gahStockObjects[15]);
  v8 = (__int64)v20;
  HmgSetOwner(*v20, 0, 8);
  WPP_MAIN_CB.Reserved = (PVOID)v8;
  dclevelDefault = (HPALETTE)gahStockObjects[15];
  qword_1C0188BC8 = v8;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
    DEC_SHARE_REF_CNT((int *)v8);
    return 0LL;
  }
  v9 = v16;
  ppalDefaultSurface8bpp = v16;
  v10 = *(_DWORD *)(v8 + 28) >> 1;
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      *(_DWORD *)(v11 + *((_QWORD *)v9 + 15)) = *(_DWORD *)(v11 + *(_QWORD *)(v8 + 120));
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v13 = v10;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      *(_DWORD *)(*((_QWORD *)v9 + 15) + 4 * v4) = *(_DWORD *)(*(_QWORD *)(v8 + 120) + 4LL * (unsigned int)(v4 - 236));
      --v13;
    }
    while ( v13 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  DEC_SHARE_REF_CNT((int *)v8);
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u, 1) )
  {
    v14 = *v18;
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = v18;
    v19 = 1;
    hpalMono = v14;
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v16, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v15 = v16;
      v16 = 0LL;
      v0 = 1;
      gppalRGB = v15;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
  return v0;
}
