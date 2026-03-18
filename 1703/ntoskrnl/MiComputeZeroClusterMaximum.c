/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x140073568
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  _KPROCESS *Process; // rdx
  __int64 v9; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v5 = (((unsigned __int64)(*(_DWORD *)v4 & 0xFFF) + *(_QWORD *)(v4 + 8) + 4095LL) >> 12) - v2;
  v6 = *(_QWORD *)v4 + (v2 << 12);
  v7 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - (v6 >> 12) + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v5 <= v7 )
    v7 = v5;
  v9 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
  if ( *(_QWORD *)(v9 + 5760) < 0x1388uLL )
    v7 = 1LL;
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 0x40) != 0
    && (*(_BYTE *)a1 != 1 || (*(_DWORD *)(a1 + 80) & 0x4000) == 0) )
  {
    v11 = *(_QWORD *)&Process[1].Spare2[31];
    v12 = *(_QWORD *)&Process[1].Spare2[63];
    if ( v11 >= v12 )
      return 1LL;
    if ( v11 + v7 > v12 )
      v7 = v12 - v11;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v13 = *(_DWORD *)(a1 + 80);
    if ( (v13 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v9, ((v13 >> 3) & 7) + 1);
      if ( v7 > AvailablePagesBelowPriority )
        v7 = AvailablePagesBelowPriority;
    }
  }
  if ( !v7 )
    v7 = 1LL;
  result = 512 - ((((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
