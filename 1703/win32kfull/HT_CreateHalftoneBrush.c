/*
 * XREFs of HT_CreateHalftoneBrush @ 0x1C023CA38
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     HT_CreateStandardMonoPattern @ 0x1C00F4124 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     pDCIAdjClr @ 0x1C0034290 (pDCIAdjClr.c)
 *     ComputeBytesPerScanLine @ 0x1C00F434C (ComputeBytesPerScanLine.c)
 *     CreateHalftoneBrushPat @ 0x1C023E0D8 (CreateHalftoneBrushPat.c)
 */

__int64 __fastcall HT_CreateHalftoneBrush(__int64 a1, __m128i *a2, __int64 a3, int a4, __int64 a5)
{
  char v5; // bl
  __int16 v9; // dx
  __int64 v10; // rbp
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // cx
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // r10
  unsigned int v18; // edi
  int HalftoneBrushPat; // eax
  unsigned int v20; // [rsp+40h] [rbp-28h] BYREF
  PVOID pv; // [rsp+48h] [rbp-20h] BYREF
  int v22; // [rsp+80h] [rbp+18h]

  pv = 0LL;
  v5 = a4;
  if ( !a3 || *(_DWORD *)(a3 + 8) != 1 || !*(_QWORD *)(a3 + 16) )
    return 4294967262LL;
  LOBYTE(v22) = 0;
  BYTE1(v22) = *(_BYTE *)(a3 + 3);
  v9 = 16;
  HIBYTE(v22) = BYTE1(a4);
  BYTE2(v22) = HIBYTE(a4);
  if ( (a4 & 1) != 0 || BYTE1(a4) == 1 )
    v9 = 17;
  v10 = a5;
  v11 = v9 | 2;
  if ( (a4 & 4) == 0 )
    v11 = v9;
  v12 = v11 | 4;
  if ( (a4 & 2) == 0 )
    v12 = v11;
  v13 = v12 | 8;
  if ( (a4 & 0x10) == 0 )
    v13 = v12;
  v14 = pDCIAdjClr(a1, a2, (_QWORD *)((unsigned __int64)&pv & -(__int64)(a5 != 0)), 0, v13, v22, &v20);
  if ( !v14 )
    return v20;
  v16 = ComputeBytesPerScanLine(BYTE1(a4), BYTE2(a4), *(unsigned __int16 *)(v14 + 166));
  v18 = v16 * *(unsigned __int16 *)(v17 + 170);
  if ( a5 )
  {
    if ( (v5 & 8) != 0 )
    {
      v10 = (int)(v18 - v16) + a5;
      v16 = -v16;
    }
    HalftoneBrushPat = CreateHalftoneBrushPat(v17, a3, pv, v10, v16);
    if ( HalftoneBrushPat <= 0 )
      v18 = HalftoneBrushPat;
    EngFreeMem(pv);
  }
  else
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(v17 + 8));
  }
  return v18;
}
