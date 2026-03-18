/*
 * XREFs of ScsiReadCapacityRequest @ 0x1C0008668
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int *v7; // rbx
  _BYTE *v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r8d
  int v12; // r12d
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // ecx
  char v17; // cl
  char v18; // cl
  char v19; // cl
  unsigned __int64 v20; // [rsp+68h] [rbp+38h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = (int *)(a2 + 60);
    v8 = *(_BYTE **)(a2 + 64);
    v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(_BYTE **)(a2 + 24);
    v7 = (int *)(a2 + 16);
    v9 = *(unsigned __int8 *)(a2 + 7);
  }
  v10 = *(_QWORD *)(a1 + 8 * v9 + 1224);
  v11 = 0;
  v12 = *(_DWORD *)(v10 + 52);
  v13 = *(_QWORD *)(v10 + 56) - 1LL;
  v20 = v13;
  v14 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v9 + 1224);
  if ( *(_BYTE *)(v14 + 66) || *(_WORD *)(v14 + 48) )
  {
    v13 = 0LL;
    v20 = 0LL;
  }
  if ( (unsigned int)*v7 < 8 || (v16 = 12, (_DWORD)a4 == 16) && (unsigned int)*v7 < 0xC || !v8 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v13) = 6;
    NVMeSetSenseData(a2, v13, 0LL, a4);
    return 3238002692LL;
  }
  if ( (_DWORD)a4 != 16 || *a3 != 0x9E )
  {
    v8[6] = BYTE1(v12);
    v8[5] = BYTE2(v12);
    v8[4] = HIBYTE(v12);
    v8[7] = v12;
    if ( v13 < 0xFFFFFFFF )
    {
      v8[3] = v13;
      v8[2] = BYTE1(v13);
      *v8 = BYTE3(v13);
      v8[1] = BYTE2(v13);
    }
    else
    {
      *(_DWORD *)v8 = -1;
    }
    *v7 = 8;
LABEL_26:
    *(_BYTE *)(a2 + 3) = 1;
    return v11;
  }
  if ( (a3[1] & 0x1F) == 0x10 )
  {
    v8[6] = BYTE1(v20);
    v8[5] = BYTE2(v20);
    v8[4] = BYTE3(v20);
    v8[3] = BYTE4(v20);
    v8[2] = BYTE5(v20);
    v8[1] = BYTE6(v20);
    *v8 = HIBYTE(v20);
    v8[7] = v13;
    v8[10] = BYTE1(v12);
    v8[9] = BYTE2(v12);
    v8[8] = HIBYTE(v12);
    v8[11] = v12;
    if ( (unsigned int)*v7 >= 0x10 )
    {
      v8[12] &= 0xF0u;
      v17 = v8[13];
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 1224) + 52LL) == 512 )
        v18 = v17 & 0xF0 | 3;
      else
        v18 = v17 & 0xF0;
      v8[14] &= 0xC0u;
      v8[13] = v18;
      v19 = v8[14] & 0x3F;
      v8[15] = 0;
      v8[14] = v19 & 0xBF | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1224) + 65LL) << 7);
      v16 = (unsigned int)*v7 < 0x20 ? 16 : 32;
    }
    *v7 = v16;
    goto LABEL_26;
  }
  LOBYTE(a4) = 32;
  LOBYTE(v13) = 6;
  NVMeSetSenseData(a2, v13, 0LL, a4);
  return (unsigned int)-1056964601;
}
