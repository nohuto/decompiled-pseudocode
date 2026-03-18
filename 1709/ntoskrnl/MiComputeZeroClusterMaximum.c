/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x14011BCB0
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  _KPROCESS *Process; // rbp
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v5 = (((unsigned __int64)(*(_DWORD *)v4 & 0xFFF) + *(_QWORD *)(v4 + 8) + 4095LL) >> 12) - v2;
  v6 = *(_QWORD *)v4 + (v2 << 12);
  v7 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - (v6 >> 12) + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v5 <= v7 )
    v7 = v5;
  v9 = *(_QWORD **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
  v10 = MiSufficientAvailablePages((__int64)v9, 0x1388uLL);
  v11 = 1LL;
  if ( !v10 )
    v7 = 1LL;
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 0x40) != 0
    && (*(_BYTE *)a1 != 1 || (*(_DWORD *)(a1 + 80) & 0x4000) == 0) )
  {
    v13 = *(_QWORD *)&Process[1].Spare2[31];
    v14 = *(_QWORD *)&Process[1].Spare2[63];
    if ( v13 >= v14 )
      return 1LL;
    if ( v13 + v7 > v14 )
      v7 = v14 - v13;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v15 = *(_DWORD *)(a1 + 80);
    if ( (v15 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v9, ((v15 >> 3) & 7) + 1);
      if ( v7 > AvailablePagesBelowPriority )
        v7 = AvailablePagesBelowPriority;
    }
  }
  if ( !v7 )
    v7 = v11;
  result = 512 - ((((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
