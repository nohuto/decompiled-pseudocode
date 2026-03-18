/*
 * XREFs of sub_140489010 @ 0x140489010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcAdjustBcbDepth @ 0x1401B5030 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1402306C0 (VslVerifyPage.c)
 */

char __fastcall sub_140489010(PKDPC Dpc)
{
  _QWORD *v1; // r11
  __int64 ProcessorHistory_low; // r9
  char SystemArgument1; // r14
  __int64 v5; // r15
  unsigned __int64 DeferredContext; // r12
  int v7; // edi
  __int64 v8; // rbp
  _QWORD *v9; // r10
  const char *v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 i; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  const char *v20; // rax
  int v21; // edx
  PKDEFERRED_ROUTINE v22; // rdi
  unsigned __int8 *v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v30; // rbx
  __int64 v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  NTSTATUS v34; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PKDPC *DpcStack; // rbx
  PKDPC v39; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  v5 = ProcessorHistory_low;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v7) = SystemArgument1;
  v8 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v1;
  v39 = Dpc;
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
  v11 = (unsigned int)ProcessorHistory_low >> 7;
  for ( i = DeferredContext; v11; --v11 )
  {
    v13 = 8LL;
    do
    {
      v14 = i ^ *v9;
      v15 = v9[1];
      v9 += 2;
      i = __ROL8__(__ROL8__(v14, v7) ^ v15, v7);
      --v13;
    }
    while ( v13 );
    v16 = __ROL8__(DeferredContext ^ ((unsigned __int64)v9 - v8), 17);
    v7 = ((unsigned __int8)((((v16 ^ DeferredContext ^ ((unsigned __int64)v9 - v8))
                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16 ^ DeferredContext ^ ((_BYTE)v9 - v8)) ^ (unsigned __int8)v7) & 0x3F;
    if ( !v7 )
      LOBYTE(v7) = 1;
  }
  v17 = ProcessorHistory_low & 0x7F;
  if ( v17 >= 8 )
  {
    v18 = (unsigned __int64)v17 >> 3;
    do
    {
      i = __ROL8__(*v9++ ^ i, v7);
      v17 -= 8;
      --v18;
    }
    while ( v18 );
  }
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v9;
    v9 = (_QWORD *)((char *)v9 + 1);
    i = __ROL8__(v19 ^ i, v7);
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
  v22 = (PKDEFERRED_ROUTINE)__ROL8__(i ^ *v1, SystemArgument1);
  v23 = (unsigned __int8 *)(v1 + 1);
  do
  {
    v24 = *v23++;
    v22 = (PKDEFERRED_ROUTINE)__ROL8__(v24 ^ (unsigned __int64)v22, SystemArgument1);
    --v21;
  }
  while ( v21 );
  v25 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v26 = ExGenRandom(1);
  LOBYTE(v27) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v25, 0, v26 % 0x2710, Dpc);
  if ( v22 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = v8 & 0xFFFFFFFFFFFFF000uLL;
        v31 = (v8 + v5 - 1) | 0xFFF;
        v32 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v33 = CurrentIrql;
          v34 = VslVerifyPage(v30, 0);
          if ( v34 == -1073741267 )
            break;
LABEL_27:
          v27 = v33;
          if ( v34 < 0 )
            goto LABEL_31;
LABEL_28:
          v30 += 4096LL;
          v32 += 4096LL;
          if ( v32 == v31 )
          {
            __writecr8(v27);
            return v27;
          }
        }
        v27 = CurrentIrql;
        while ( SystemArgument1_high )
        {
          if ( CurrentIrql > 1u )
            goto LABEL_28;
          v33 = CurrentIrql;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v34 = VslVerifyPage(v30, 0);
          v27 = CurrentIrql;
          if ( v34 != -1073741267 )
            goto LABEL_27;
        }
LABEL_31:
        __writecr8(v33);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive || &v39 > DpcStack || &v39 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v40 = 0x7451D01FAC486661LL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(603979780, 58),
      __ROR8__(0x7451D01FAC48E45ALL, 183),
      0LL,
      v8,
      (unsigned int)__ROR4__(262, 192),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x140489384LL);
  }
  return v27;
}
