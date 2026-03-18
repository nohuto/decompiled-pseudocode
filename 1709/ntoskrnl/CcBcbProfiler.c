/*
 * XREFs of CcBcbProfiler @ 0x1401682E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcAdjustBcbDepth @ 0x14018B380 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1401F2BA0 (VslVerifyPage.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r10
  __int64 v5; // r13
  char v6; // r15
  __int64 v7; // r12
  int v8; // ebx
  unsigned __int64 v9; // r14
  _QWORD *v10; // r9
  const char *v11; // rax
  __int64 v12; // rdi
  unsigned int i; // r11d
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  unsigned __int8 *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  int v27; // r12d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rsi
  int v31; // eax
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *DpcStack; // rbx
  _QWORD v35[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v36; // [rsp+58h] [rbp-30h]

  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 144);
    v4 = *(_QWORD **)(a2 + 128);
    v5 = v3;
    v6 = *(_BYTE *)(a2 + 168);
    v7 = *(_QWORD *)(a2 + 160);
    LOBYTE(v8) = v6;
    v35[0] = a2;
    v9 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v4;
    v10 = (_QWORD *)v9;
    v11 = (const char *)v9;
    if ( v9 < v9 + v3 )
    {
      do
      {
        _mm_prefetch(v11, 0);
        v11 += 64;
      }
      while ( (unsigned __int64)v11 < v9 + v3 );
    }
    v12 = v7;
    for ( i = (unsigned int)v3 >> 7; i; --i )
    {
      v14 = 8LL;
      do
      {
        v15 = v10[1] ^ __ROL8__(*v10 ^ v12, v8);
        v10 += 2;
        v12 = __ROL8__(v15, v8);
        --v14;
      }
      while ( v14 );
      v16 = __ROL8__(v7 ^ ((unsigned __int64)v10 - v9), 17) ^ v7 ^ ((unsigned __int64)v10 - v9);
      v36 = (v16 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v8 = ((unsigned __int8)(v36 ^ v16) ^ (unsigned __int8)v8) & 0x3F;
      if ( !v8 )
        LOBYTE(v8) = 1;
    }
    v17 = v3 & 0x7F;
    if ( v17 >= 8 )
    {
      v18 = (unsigned __int64)v17 >> 3;
      do
      {
        v12 = __ROL8__(*v10++ ^ v12, v8);
        v17 -= 8;
        --v18;
      }
      while ( v18 );
    }
    for ( ; v17; --v17 )
    {
      v19 = *(unsigned __int8 *)v10;
      v10 = (_QWORD *)((char *)v10 + 1);
      v12 = __ROL8__(v19 ^ v12, v8);
    }
    v20 = (const char *)v4;
    if ( v4 < (_QWORD *)((char *)v4 + 12) )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( v20 < (const char *)v4 + 12 );
    }
    v21 = __ROL8__(*v4 ^ v12, v6);
    v22 = 4;
    v23 = (unsigned __int8 *)(v4 + 1);
    do
    {
      v24 = *v23++;
      v21 = __ROL8__(v24 ^ v21, v6);
      --v22;
    }
    while ( v22 );
    v25 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v26 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v25, 0, v26 % 0x2710, (PKDPC)a2);
    if ( v21 != *(_QWORD *)(a2 + 152) )
    {
      if ( !*(_DWORD *)(a2 + 176) || (v27 = *(_DWORD *)(a2 + 172), !v5) )
      {
LABEL_34:
        _disable();
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = KeGetCurrentThread();
        DpcStack = CurrentPrcb->DpcStack;
        if ( !CurrentPrcb->DpcRoutineActive || v35 > DpcStack || v35 < DpcStack - 3072 )
          DpcStack = CurrentThread->InitialStack;
        CurrentThread[1].QuantumTarget = 0LL;
        CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
        ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
        v35[1] = 0x1FAC48E45A7451DLL;
        CcAdjustBcbDepth(
          __ROL4__(1111490560, 74),
          __ROR8__(0x1FAC48E45A7451DLL, 75),
          0,
          v9,
          (unsigned int)__ROR4__(4292608, 78),
          (__int64)KeBugCheckEx,
          (__int64)DpcStack);
        JUMPOUT(0x14016862BLL);
      }
      CurrentIrql = KeGetCurrentIrql();
      v29 = v9 & 0xFFFFFFFFFFFFF000uLL;
      v30 = (v9 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_28:
      __writecr8(2uLL);
      while ( 1 )
      {
        v31 = VslVerifyPage(v29, 0LL);
        if ( v31 == -1073741267 )
        {
          if ( !v27 )
            goto LABEL_33;
          if ( CurrentIrql <= 1u )
          {
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            goto LABEL_28;
          }
        }
        else if ( v31 < 0 )
        {
LABEL_33:
          __writecr8(CurrentIrql);
          goto LABEL_34;
        }
        v29 += 4096LL;
        v30 += 4096LL;
        if ( v30 == ((v9 + v5 - 1) | 0xFFF) )
        {
          __writecr8(CurrentIrql);
          return;
        }
      }
    }
  }
}
