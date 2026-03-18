/*
 * XREFs of sub_14043C010 @ 0x14043C010
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcAdjustBcbDepth @ 0x14018B380 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1401F2BA0 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_14043C010(PKDPC Dpc)
{
  _QWORD *v1; // r11
  __int64 ProcessorHistory_low; // r9
  char SystemArgument1; // r14
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
  BOOLEAN result; // al
  int SystemArgument1_high; // r15d
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  NTSTATUS v32; // eax
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PKDPC *DpcStack; // rbx
  PKDPC v36; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  v5 = ProcessorHistory_low;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v7) = SystemArgument1;
  v8 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v1;
  v36 = Dpc;
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
  v22 = (PKDEFERRED_ROUTINE)__ROL8__(v11 ^ *v1, SystemArgument1);
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
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v25, 0, v26 % 0x2710, Dpc);
  if ( v22 != Dpc[2].DeferredRoutine )
  {
    if ( !LODWORD(Dpc[2].SystemArgument2) || (SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1), !v5) )
    {
LABEL_32:
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v36 > DpcStack || &v36 < DpcStack - 3072 )
        DpcStack = (PKDPC *)CurrentThread->InitialStack;
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      v37 = 0x1FAC48E45A7451DLL;
      CcAdjustBcbDepth(
        (unsigned int)__ROL4__(1111490560, 74),
        __ROR8__(0x1FAC48E45A7451DLL, 75),
        0LL,
        v8,
        (unsigned int)__ROR4__(4292608, 78),
        (__int64 (__fastcall *)(__int64))KeBugCheckEx,
        DpcStack);
      JUMPOUT(0x14043C34CLL);
    }
    CurrentIrql = KeGetCurrentIrql();
    v30 = v8 & 0xFFFFFFFFFFFFF000uLL;
    v31 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_25:
    __writecr8(2uLL);
    while ( 1 )
    {
      v32 = VslVerifyPage(v30, 0);
      if ( v32 == -1073741267 )
      {
        if ( !SystemArgument1_high )
          goto LABEL_31;
        if ( CurrentIrql <= 1u )
        {
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          goto LABEL_25;
        }
      }
      else if ( v32 < 0 )
      {
LABEL_31:
        __writecr8(CurrentIrql);
        goto LABEL_32;
      }
      v30 += 4096LL;
      v31 += 4096LL;
      if ( v31 == ((v8 + v5 - 1) | 0xFFF) )
      {
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
    }
  }
  return result;
}
