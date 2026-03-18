/*
 * XREFs of MiAgeWorkingSetTail @ 0x14009EF90
 * Callers:
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 *     VmQueryAccessedState @ 0x140278238 (VmQueryAccessedState.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rsi
  int i; // edi
  unsigned int *v4; // rbx
  unsigned int v5; // r10d
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _KPROCESS *Process; // rcx
  unsigned int v10; // eax
  bool v11; // zf
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rdi
  unsigned __int8 v15; // bl
  LONG *v16; // rcx
  LONG *SharedVm; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 144);
  for ( i = 0; ; i = 1 )
  {
    v4 = *(unsigned int **)(v1 + 64);
    if ( !v4 )
      goto LABEL_22;
    v5 = v4[3];
    if ( !v5 )
      goto LABEL_22;
    v6 = *((unsigned __int8 *)v4 + 4);
    v7 = qword_140388568;
    if ( (v6 & 2) == 0 )
    {
      v8 = *v4;
      if ( (_DWORD)v8 != 1 )
        goto LABEL_11;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] || Process->SecureState.SecureHandle )
        v7 = -1LL;
    }
    v8 = *v4;
    if ( (_DWORD)v8 == 1 )
    {
      v10 = 0;
      goto LABEL_12;
    }
LABEL_11:
    v10 = ((v6 & 8) != 0) + 1;
LABEL_12:
    if ( *((_BYTE *)v4 + 5) || *((_QWORD *)v4 + 2) > v7 )
    {
      if ( (v6 & 1) != 0 )
        KeFlushCurrentTbOnly(v8, v6, v7);
      else
        KeFlushTb(v8, v10, v7);
      *((_BYTE *)v4 + 5) = 0;
    }
    else
    {
      v11 = (v6 & 1) == 0;
      v12 = (__int64)(v4 + 6);
      if ( v11 )
        KeFlushMultipleRangeTb(v5, v12, v8, v10);
      else
        KeFlushMultipleRangeCurrentTb(v5, v12, (unsigned int)v8);
    }
    *((_BYTE *)v4 + 4) &= ~8u;
    v4[3] = 0;
    *((_QWORD *)v4 + 2) = 0LL;
LABEL_22:
    if ( *(_DWORD *)(v1 + 84) )
    {
      MiFreeWsleList(*(_QWORD *)(a1 + 8), v1 + 72, 0);
      *(_DWORD *)(v1 + 84) = 0;
    }
    v13 = *(_DWORD **)(v1 + 256);
    if ( !v13 || !*v13 )
      break;
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_BYTE *)(a1 + 4);
    MiPreUnlockWorkingSetExclusive(v14, v15);
    v16 = &dword_140389780;
    if ( (*(_BYTE *)(v14 + 192) & 7) != 2 )
      v16 = (LONG *)(v14 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    else
      *v16 = 0;
    __writecr8(v15);
    VmQueryAccessedState(*(_QWORD *)(v1 + 256) + 8LL, **(unsigned int **)(v1 + 256), (*(_DWORD *)v1 & 3) != 0);
    SharedVm = MiGetSharedVm(v14);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    MiProcessVmAccessedInfo(v14, *(_QWORD *)(v1 + 256), MiAgeWorkingSetEPTCallback, v1);
  }
  if ( *(_BYTE *)(a1 + 5) || i )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
