/*
 * XREFs of MiQueryAddressSpan @ 0x1400B1200
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // r12
  unsigned __int8 v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r13
  int v13; // eax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdi
  unsigned __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+A0h] [rbp+8h]
  unsigned int v20; // [rsp+A8h] [rbp+10h] BYREF
  int v21; // [rsp+B0h] [rbp+18h] BYREF
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a3;
  v19 = 0;
  if ( a3 > (((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 1
    || !a3 )
  {
    v5 = (((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = (__int64)&Process[1].IdealNode[12];
  v9 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v10 = MiQueryAddressState(a2, v5 - 1, v9, a4, (__int64)Process, (int *)&v20, (__int64 *)&v17, &v21);
  v12 = v20;
  *(_DWORD *)(a1 + 32) = v10;
  if ( (_DWORD)v12 )
    v13 = MmProtectToValue[v12];
  else
    v13 = 0;
  *(_DWORD *)(a1 + 36) = v13;
  v14 = v17;
  v15 = v17;
  while ( v14 < v5 )
  {
    if ( (unsigned int)MiQueryAddressState(v14, v5 - 1, v9, a4, (__int64)Process, &v22, (__int64 *)&v17, &v21) != *(_DWORD *)(a1 + 32)
      || v22 != (_DWORD)v12 )
    {
      break;
    }
    v14 = v17;
    ++v19;
    v15 = v17;
    if ( (v19 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v8) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v8, v9, v11);
      MiLockWorkingSetShared(v8);
    }
  }
  MiUnlockWorkingSetShared(v8, v9, v11);
  return v15;
}
