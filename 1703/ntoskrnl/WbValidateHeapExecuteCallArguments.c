/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x14053C8C0
 * Callers:
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v16; // eax
  int v17; // ecx

  v6 = 0;
  memset(a3, 0, 0x140uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 + 240 > 0x7FFFFFFF0000LL || v7 + 240 < v7 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v8 = *(_OWORD **)(a1 + 8);
  *(_OWORD *)(a3 + 1) = *v8;
  *(_OWORD *)(a3 + 3) = v8[1];
  *(_OWORD *)(a3 + 5) = v8[2];
  *(_OWORD *)(a3 + 7) = v8[3];
  *(_OWORD *)(a3 + 9) = v8[4];
  *(_OWORD *)(a3 + 11) = v8[5];
  *(_OWORD *)(a3 + 13) = v8[6];
  *(_OWORD *)(a3 + 15) = v8[7];
  v8 += 8;
  *(_OWORD *)(a3 + 17) = *v8;
  *(_OWORD *)(a3 + 19) = v8[1];
  *(_OWORD *)(a3 + 21) = v8[2];
  *(_OWORD *)(a3 + 23) = v8[3];
  *(_OWORD *)(a3 + 25) = v8[4];
  *(_OWORD *)(a3 + 27) = v8[5];
  *(_OWORD *)(a3 + 29) = v8[6];
  v9 = *(_QWORD *)(a1 + 8);
  a3[39] = v9;
  if ( (*((_DWORD *)a3 + 11) & 0xF) != 0 )
    return (unsigned int)-1073741811;
  v10 = a3[8] & 0xFFFFFFF;
  if ( v10 )
  {
    v11 = v9 - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
    *a3 = v11;
    v12 = *((_DWORD *)a3 + 13);
    if ( v12 <= 0x1000 )
      v12 = 4096;
    *((_DWORD *)a3 + 76) = v12;
    v13 = *((_DWORD *)a3 + 17);
    *((_DWORD *)a3 + 68) = 16;
    if ( (v13 & 0xFFFFFFF) != 0 )
    {
      v16 = a3[9] & 0xFFFFFFF;
      *((_DWORD *)a3 + 67) = v16;
      *((_DWORD *)a3 + 66) = v13 & 0xFFFFFFF;
      a3[32] = v11 + (v13 & 0xFFFFFFF);
      *((_DWORD *)a3 + 74) = v16 + 16;
      *((_DWORD *)a3 + 73) = v10;
      v17 = *((_DWORD *)a3 + 15);
      *((_DWORD *)a3 + 72) = v17 & 0xFFFFFFF;
      a3[35] = v11 + (v17 & 0xFFFFFFF);
    }
    else
    {
      *((_DWORD *)a3 + 67) = v10;
      v14 = *((_DWORD *)a3 + 15);
      *((_DWORD *)a3 + 66) = v14 & 0xFFFFFFF;
      a3[32] = v11 + (v14 & 0xFFFFFFF);
    }
    *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 67) + *((_DWORD *)a3 + 73) + 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
