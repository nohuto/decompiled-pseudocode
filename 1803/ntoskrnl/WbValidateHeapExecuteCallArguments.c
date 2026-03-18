/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x14050FCE8
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  _OWORD *v8; // rcx
  _OWORD *v9; // rcx
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx
  int v15; // r10d
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // r11d
  __int16 v20; // cx
  unsigned __int64 v21; // rax

  v6 = 0;
  memset(a3, 0, 0x140uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v7 )
  {
    v20 = *(_WORD *)(v7 + 8);
    if ( v20 == 332 || v20 == 452 )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v21 )
      {
        if ( *(_WORD *)(v21 + 8) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v8 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)(v8 + 15) > 0x7FFFFFFF0000LL || v8 + 15 < v8 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_OWORD **)(a1 + 8);
  }
  *(_OWORD *)(a3 + 1) = *v8;
  *(_OWORD *)(a3 + 3) = v8[1];
  *(_OWORD *)(a3 + 5) = v8[2];
  *(_OWORD *)(a3 + 7) = v8[3];
  *(_OWORD *)(a3 + 9) = v8[4];
  *(_OWORD *)(a3 + 11) = v8[5];
  *(_OWORD *)(a3 + 13) = v8[6];
  *(_OWORD *)(a3 + 15) = v8[7];
  v9 = v8 + 8;
  *(_OWORD *)(a3 + 17) = *v9;
  *(_OWORD *)(a3 + 19) = v9[1];
  *(_OWORD *)(a3 + 21) = v9[2];
  *(_OWORD *)(a3 + 23) = v9[3];
  *(_OWORD *)(a3 + 25) = v9[4];
  *(_OWORD *)(a3 + 27) = v9[5];
  *(_OWORD *)(a3 + 29) = v9[6];
  v10 = *(_QWORD *)(a1 + 8);
  a3[39] = v10;
  if ( (*((_DWORD *)a3 + 11) & 0xF) != 0 )
    return (unsigned int)-1073741811;
  v11 = a3[8] & 0xFFFFFFF;
  if ( v11 )
  {
    v12 = v10 - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
    *a3 = v12;
    v13 = 4096;
    if ( *((_DWORD *)a3 + 13) > 0x1000u )
      v13 = *((_DWORD *)a3 + 13);
    *((_DWORD *)a3 + 76) = v13;
    v14 = *((_DWORD *)a3 + 17);
    v15 = v14 & 0xFFFFFFF;
    v16 = *((_DWORD *)a3 + 15);
    if ( (v14 & 0xFFFFFFF) != 0 )
    {
      v18 = a3[9] & 0xFFFFFFF;
      *((_DWORD *)a3 + 74) = v18 + 16;
      *((_DWORD *)a3 + 73) = v11;
      *((_DWORD *)a3 + 72) = v16 & 0xFFFFFFF;
      a3[35] = v12 + (v16 & 0xFFFFFFF);
      v17 = v14 & 0xFFFFFFF;
    }
    else
    {
      v17 = v16 & 0xFFFFFFF;
      v15 = v16 & 0xFFFFFFF;
      v18 = v11;
    }
    *((_DWORD *)a3 + 68) = 16;
    *((_DWORD *)a3 + 67) = v18;
    *((_DWORD *)a3 + 66) = v15;
    a3[32] = v12 + v17;
    *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 67) + *((_DWORD *)a3 + 73) + 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
