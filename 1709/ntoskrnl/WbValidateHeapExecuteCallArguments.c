/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x1405028F0
 * Callers:
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // r9d
  int v15; // ecx
  __int16 v17; // cx
  int v18; // eax
  int v19; // ecx

  v6 = 0;
  memset(a3, 0, 0x140uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v7 )
  {
    v17 = *(_WORD *)(v7 + 8);
    if ( (v17 == 332 || v17 == 452)
      && (unsigned __int16)PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process) == 452 )
    {
      *(_QWORD *)(a1 + 8) &= ~1uLL;
    }
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 + 240 > 0x7FFFFFFF0000LL || v8 + 240 < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v9 = *(_OWORD **)(a1 + 8);
  *(_OWORD *)(a3 + 1) = *v9;
  *(_OWORD *)(a3 + 3) = v9[1];
  *(_OWORD *)(a3 + 5) = v9[2];
  *(_OWORD *)(a3 + 7) = v9[3];
  *(_OWORD *)(a3 + 9) = v9[4];
  *(_OWORD *)(a3 + 11) = v9[5];
  *(_OWORD *)(a3 + 13) = v9[6];
  *(_OWORD *)(a3 + 15) = v9[7];
  v9 += 8;
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
    v13 = *((_DWORD *)a3 + 13);
    if ( v13 <= 0x1000 )
      v13 = 4096;
    *((_DWORD *)a3 + 76) = v13;
    v14 = *((_DWORD *)a3 + 17);
    *((_DWORD *)a3 + 68) = 16;
    if ( (v14 & 0xFFFFFFF) != 0 )
    {
      v18 = a3[9] & 0xFFFFFFF;
      *((_DWORD *)a3 + 67) = v18;
      *((_DWORD *)a3 + 66) = v14 & 0xFFFFFFF;
      a3[32] = v12 + (v14 & 0xFFFFFFF);
      *((_DWORD *)a3 + 74) = v18 + 16;
      *((_DWORD *)a3 + 73) = v11;
      v19 = *((_DWORD *)a3 + 15);
      *((_DWORD *)a3 + 72) = v19 & 0xFFFFFFF;
      a3[35] = v12 + (v19 & 0xFFFFFFF);
    }
    else
    {
      *((_DWORD *)a3 + 67) = v11;
      v15 = *((_DWORD *)a3 + 15);
      *((_DWORD *)a3 + 66) = v15 & 0xFFFFFFF;
      a3[32] = v12 + (v15 & 0xFFFFFFF);
    }
    *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 67) + *((_DWORD *)a3 + 73) + 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
