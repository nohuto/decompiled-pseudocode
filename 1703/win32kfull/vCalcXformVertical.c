/*
 * XREFs of vCalcXformVertical @ 0x1C0232338
 * Callers:
 *     bSetXform @ 0x1C0230C60 (bSetXform.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 */

__int64 __fastcall vCalcXformVertical(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  int v6; // r11d
  __int64 v7; // r8
  int fixed; // eax
  int v9; // r10d
  unsigned int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // r10d

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(__int16 *)(v3 + 422);
  v6 = *(__int16 *)(v3 + 424);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 368);
  *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 372);
  LODWORD(v3) = -*(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 352) = 0x40000000;
  *(_DWORD *)(a1 + 332) = v3;
  *(_DWORD *)(a1 + 336) = -*(_DWORD *)(a1 + 360);
  v5 <<= 16;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 340) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  FixMul(*(unsigned int *)(a1 + 92), (unsigned int)(v6 << 16), a3);
  fixed = FixMul(*(unsigned int *)(a1 + 80), v5, v7);
  *(_DWORD *)(a1 + 392) = fixed + v9;
  FixMul(*(unsigned int *)(a1 + 96), v10, v11);
  result = FixMul(*(unsigned int *)(a1 + 84), v5, v12);
  *(_DWORD *)(a1 + 396) = result + v14;
  return result;
}
