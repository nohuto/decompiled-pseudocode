/*
 * XREFs of sub_14041C010 @ 0x14041C010
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     CcAdjustBcbDepth @ 0x14018B680 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1401EDCC0 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_14041C010(PKDPC Dpc)
{
  _QWORD *v1; // r11
  __int64 ProcessorHistory_low; // r9
  int SystemArgument1_low; // r14d
  __int64 v5; // r12
  unsigned __int64 DeferredContext; // r15
  int v7; // edi
  __int64 v8; // rbp
  _QWORD *v9; // r10
  const char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned int i; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  const char *v20; // rax
  int v21; // edx
  PKDEFERRED_ROUTINE v22; // rdi
  unsigned __int8 *v23; // r11
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // eax
  BOOLEAN result; // al
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  NTSTATUS v31; // eax
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PKDPC *DpcStack; // rbx
  PKDPC v35; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  SystemArgument1_low = LOBYTE(Dpc[2].SystemArgument1);
  v5 = ProcessorHistory_low;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v7) = Dpc[2].SystemArgument1;
  v8 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v1;
  v35 = Dpc;
  v9 = (_QWORD *)v8;
  v10 = (const char *)v8;
  if ( v8 < (unsigned __int64)(ProcessorHistory_low + v8) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < ProcessorHistory_low + v8 );
  }
  v11 = DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v13 = 8LL;
    do
    {
      v14 = v11 ^ *v9;
      v15 = v9[1];
      v9 += 2;
      v11 = __ROL8__(__ROL8__(v14, v7) ^ v15, v7);
      --v13;
    }
    while ( v13 );
    v16 = __ROL8__(DeferredContext ^ ((unsigned __int64)v9 - v8), 17) ^ DeferredContext ^ ((unsigned __int64)v9 - v8);
    v7 = ((unsigned __int8)(((v16 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16) ^ (unsigned __int8)v7) & 0x3F;
    if ( !v7 )
      LOBYTE(v7) = 1;
  }
  v17 = ProcessorHistory_low & 0x7F;
  if ( v17 >= 8 )
  {
    v18 = (unsigned __int64)v17 >> 3;
    do
    {
      v11 = __ROL8__(*v9++ ^ v11, v7);
      v17 -= 8;
      --v18;
    }
    while ( v18 );
  }
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v9;
    v9 = (_QWORD *)((char *)v9 + 1);
    v11 = __ROL8__(v19 ^ v11, v7);
  }
  v20 = (const char *)v1;
  if ( v1 < (_QWORD *)((char *)v1 + 12) )
  {
    do
    {
      _mm_prefetch(v20, 0);
      v20 += 64;
    }
    while ( v20 < (const char *)v1 + 12 );
  }
  v21 = 4;
  v22 = (PKDEFERRED_ROUTINE)__ROL8__(v11 ^ *v1, SystemArgument1_low);
  v23 = (unsigned __int8 *)(v1 + 1);
  do
  {
    v24 = *v23++;
    v22 = (PKDEFERRED_ROUTINE)__ROL8__(v24 ^ (unsigned __int64)v22, SystemArgument1_low);
    --v21;
  }
  while ( v21 );
  v25 = -1200000000 - (unsigned int)ExGenRandom(1) % 100000000LL;
  v26 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v25, 0, v26 % 0x2710, Dpc);
  if ( v22 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      LOBYTE(SystemArgument1_low) = HIDWORD(Dpc[2].SystemArgument1) == 0;
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = v8 & 0xFFFFFFFFFFFFF000uLL;
        v30 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v31 = VslVerifyPage(v29, 0);
          if ( v31 == -1073741267 )
            break;
LABEL_26:
          if ( v31 < 0 )
            goto LABEL_30;
LABEL_27:
          v29 += 4096LL;
          v30 += 4096LL;
          if ( v30 == ((v8 + v5 - 1) | 0xFFF) )
          {
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            return result;
          }
        }
        while ( !SystemArgument1_low )
        {
          if ( CurrentIrql > 1u )
            goto LABEL_27;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v31 = VslVerifyPage(v29, 0);
          if ( v31 != -1073741267 )
            goto LABEL_26;
        }
LABEL_30:
        __writecr8(CurrentIrql);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive || &v35 > DpcStack || &v35 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v36 = 0xFD624722D3A5E70LL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(-2071986176, 151),
      __ROR8__(0xFD624722D3A28E8LL, 206),
      0LL,
      v8,
      (unsigned int)__ROR4__(-2097152000, 215),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x14041C39FLL);
  }
  return result;
}
