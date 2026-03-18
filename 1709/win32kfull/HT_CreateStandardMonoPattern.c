/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C0042140
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003E6DC (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     GetCachedSMP @ 0x1C00421F0 (GetCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C0042368 (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 *     HT_CreateHalftoneBrush @ 0x1C023E370 (HT_CreateHalftoneBrush.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(int a1, __int16 *a2)
{
  unsigned __int8 v2; // si
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int HalftoneBrush; // eax
  unsigned int v8; // ebx
  __int16 v10; // r8
  __int64 v11; // rdx
  __int16 v12; // r10
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r10
  int v15; // r11d
  __int64 v16; // rdx
  char v17; // cl
  __int16 v18; // ax
  _DWORD v19[4]; // [rsp+40h] [rbp-20h] BYREF
  int *v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *((_BYTE *)a2 + 3);
  if ( v2 > 0x76u )
    return 4294967269LL;
  v21 = 0;
  v5 = pDCIAdjClr(a1, 0, 0, 0, 0, 0, (__int64)&v22);
  v6 = v5;
  if ( v5 )
  {
    if ( v2 >= 0x12u )
    {
      v10 = *(_WORD *)(v5 + 166);
      v12 = *(_WORD *)(v5 + 170);
      BYTE2(v22) = *((_BYTE *)a2 + 2);
      v11 = BYTE2(v22);
      a2[4] = v10;
      a2[5] = v12;
      v13 = ComputeBytesPerScanLine(1LL, v11);
      v16 = *((_QWORD *)a2 + 2);
      a2[3] = v13;
      if ( !v16 )
      {
        v8 = v14 * v13;
        goto LABEL_6;
      }
      v17 = v15;
      BYTE1(v21) = 118 - v2;
      v20 = &v21;
      v18 = *a2;
      LOBYTE(v21) = 118 - v2;
      v19[0] = 196864;
      if ( (v18 & 2) != 0 )
        v17 = v15 + 2;
      v19[1] = 100;
      LOBYTE(v22) = v17;
      v19[2] = v15;
      if ( ((unsigned __int8)v18 & (unsigned __int8)v15) == 0 )
        LOBYTE(v22) = v17 | 8;
      BYTE1(v22) = v15;
      HIBYTE(v22) = 0;
      HalftoneBrush = HT_CreateHalftoneBrush(a1, 0, (unsigned int)v19, v22, v16);
    }
    else
    {
      HalftoneBrush = GetCachedSMP(v5, a2);
    }
    v8 = HalftoneBrush;
LABEL_6:
    EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 8));
    return v8;
  }
  return v22;
}
