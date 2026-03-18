/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1400F4A18
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400F0BD0 (MiGetCurrentMultiplexedVm.c)
 *     MiGetStandbyRepurposed @ 0x1400F4ED4 (MiGetStandbyRepurposed.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  int v5; // ecx
  int v6; // edx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  KIRQL v11; // r14
  LONG *SharedVm; // rax
  int StandbyRepurposed; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v16 = v6 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 120);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 152);
  if ( *(char *)(AnyMultiplexedVm + 192) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (*(_BYTE *)(AnyMultiplexedVm + 192) & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 4232);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v11);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1LL);
  v14 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (_UNKNOWN **)a2[6];
  v15 = v14 + *(_QWORD *)(v10 + 4224);
  a2[5] = v15;
  if ( v15 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v14 << 12;
  return result;
}
