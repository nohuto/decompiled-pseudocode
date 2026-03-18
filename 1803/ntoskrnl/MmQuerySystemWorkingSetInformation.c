/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14007FE08
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x14008045C (MiGetCurrentMultiplexedVm.c)
 *     MiGetStandbyRepurposed @ 0x1400819A0 (MiGetStandbyRepurposed.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(unsigned int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rdx
  char *AnyMultiplexedVm; // rdi
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int8 v12; // r14
  __int64 SharedVm; // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r8
  int StandbyRepurposed; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = a1;
  v6 = 2;
  v7 = a1 - 2;
  if ( (_DWORD)v7 )
  {
    v20 = v7 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        return result;
      v6 = 1;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetCurrentMultiplexedVm(2LL, v7, v5);
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v10 = (unsigned int)(v9 - 2);
  v11 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v12 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
  *a2 = *((_QWORD *)AnyMultiplexedVm + 15);
  a2[1] = *((_QWORD *)AnyMultiplexedVm + 20);
  *((_DWORD *)a2 + 4) = *((_DWORD *)AnyMultiplexedVm + 1);
  a2[3] = *((_QWORD *)AnyMultiplexedVm + 14);
  a2[4] = *((_QWORD *)AnyMultiplexedVm + 19);
  v14 = AnyMultiplexedVm[184];
  if ( v14 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v14 = AnyMultiplexedVm[184];
  }
  if ( (v14 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v11 + 8 * v10 + 4296);
  v15 = MiGetSharedVm(AnyMultiplexedVm);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 40));
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v12, v16);
  StandbyRepurposed = MiGetStandbyRepurposed(v11, 1LL);
  v18 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (_UNKNOWN **)a2[6];
  v19 = v18 + *(_QWORD *)(v11 + 4288);
  a2[5] = v19;
  if ( v19 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v18 << 12;
  return result;
}
