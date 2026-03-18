/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x140031018
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x140083AB0 (MiGetStandbyRepurposed.c)
 *     MiGetCurrentMultiplexedVm @ 0x140084C44 (MiGetCurrentMultiplexedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(unsigned int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 AnyMultiplexedVm; // rdi
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int8 v12; // r14
  volatile LONG *SharedVm; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = a1;
  v6 = 2LL;
  v7 = a1 - 2;
  if ( (_DWORD)v7 )
  {
    v16 = v7 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return result;
      v6 = 1LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm(2LL, v7, v5);
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v10 = (unsigned int)(v9 - 2);
  v11 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
  v12 = MiLockWorkingSetShared(AnyMultiplexedVm);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 120);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 152);
  if ( *(char *)(AnyMultiplexedVm + 192) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (*(_BYTE *)(AnyMultiplexedVm + 192) & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v11 + 8 * v10 + 4104);
  SharedVm = (volatile LONG *)MiGetSharedVm(AnyMultiplexedVm);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v12);
  result = (_UNKNOWN **)MiGetStandbyRepurposed(v11, 1LL);
  v14 = *a2;
  *((_DWORD *)a2 + 14) = (_DWORD)result;
  v15 = v14 + *(_QWORD *)(v11 + 4096);
  if ( v15 > a2[6] )
    v15 = a2[6];
  a2[1] <<= 12;
  *a2 = v14 << 12;
  a2[5] = v15;
  return result;
}
