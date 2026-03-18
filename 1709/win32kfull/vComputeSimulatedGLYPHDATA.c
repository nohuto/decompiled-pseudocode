/*
 * XREFs of vComputeSimulatedGLYPHDATA @ 0x1C023710C
 * Callers:
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 * Callees:
 *     vFindTAndB @ 0x1C02367B0 (vFindTAndB.c)
 */

__int64 __fastcall vComputeSimulatedGLYPHDATA(
        __int64 a1,
        _BYTE *a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v9; // ebp
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // r8d
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // ecx
  __int64 result; // rax
  int v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+60h] [rbp+18h] BYREF

  v9 = a4;
  v11 = 0;
  vFindTAndB(a2, a3, a4, &v23, &v24);
  v12 = a7;
  v13 = v23;
  v14 = v24;
  v15 = a5;
  if ( a7 != 1 )
  {
    v13 = a7 * v23;
    v14 = a7 * v24;
    v9 *= a7;
    v15 = a7 * a5;
  }
  v16 = a6 * a3;
  *(_QWORD *)a1 = 0LL;
  if ( v13 == v14 )
  {
    v13 = 0;
    v14 = v12 * v9;
  }
  v17 = v14 - v15;
  v18 = v13 - v15;
  *(_DWORD *)(a1 + 44) = v17;
  *(_DWORD *)(a1 + 36) = v18;
  *(_DWORD *)(a1 + 28) = -16 * v17;
  v19 = a8;
  *(_DWORD *)(a1 + 24) = -16 * v18;
  v20 = *(_DWORD *)(v19 + 12) & 0x6000;
  switch ( v20 )
  {
    case 0:
      v21 = v16;
      goto LABEL_14;
    case 8192:
      v11 = v16 + 1;
      v21 = v16 + 1;
      break;
    case 16384:
      v21 = v16 + ((v9 - 1) >> 1);
LABEL_14:
      v11 = v16;
      break;
    case 24576:
      v11 = v16 + 1;
      v21 = v16 + ((v9 + 1) >> 1);
      break;
    default:
      v21 = 1;
      break;
  }
  if ( !v16 )
    v21 = 1;
  *(_DWORD *)(a1 + 40) = v21;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  result = 16 * (v11 & (unsigned int)-(v16 != 0));
  *(_DWORD *)(a1 + 20) = 16 * v21;
  *(_DWORD *)(a1 + 12) = result;
  *(_DWORD *)(a1 + 52) = result;
  return result;
}
