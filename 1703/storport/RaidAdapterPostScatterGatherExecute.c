/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C000A340
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C000A2D0 (RaidpAdapterContinueScatterGather.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     RaidLogGetParm4 @ 0x1C000A7E0 (RaidLogGetParm4.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C001DBE0 (RaAllocateConcurrentChannelToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C002B2A0 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterRequestComplete @ 0x1C002CF98 (RaidAdapterRequestComplete.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 Parm4; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, _QWORD); // rax
  char v21; // bl
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // r12
  unsigned __int32 v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v32; // eax
  LARGE_INTEGER v33; // rax
  unsigned int AddressLongFromXrb; // eax
  LARGE_INTEGER v35; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+80h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+90h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 224);
  v3 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v5 = *(_QWORD *)(a2 + 168);
  v6 = a1;
  ListEntry = 0LL;
  v39 = 0LL;
  LOBYTE(a1) = *(_BYTE *)(v5 + 2);
  if ( (_BYTE)a1 == 40 )
  {
    LODWORD(a1) = *(_DWORD *)(v5 + 20);
    v7 = *(unsigned int *)(v5 + 24);
  }
  else
  {
    v7 = *(unsigned int *)(v5 + 12);
    LODWORD(a1) = (unsigned __int8)a1;
  }
  if ( v2 )
  {
    if ( *(int *)(v2 + 428) > 0 )
    {
      if ( (_DWORD)a1 == 32 || (v32 = 0, (_DWORD)a1 == 19) )
        v32 = 1;
      if ( v32 != 1 )
        goto LABEL_75;
    }
    else if ( *(_BYTE *)(v2 + 436) && (v7 & 0x10) == 0 || *(_BYTE *)(v2 + 437) && (v7 & 0x80000) == 0 )
    {
      goto LABEL_75;
    }
  }
  else if ( *(_DWORD *)(v6 + 812) && (unsigned int)(a1 - 36) > 1 && (*(_BYTE *)(a2 + 17) & 8) == 0 )
  {
LABEL_75:
    *(_BYTE *)(v5 + 3) = 5;
    LOBYTE(v7) = 1;
    RaidAdapterRequestComplete(v6, a2, v7);
    return 0LL;
  }
  if ( !StorEtwLoggingEnabled )
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_10;
    }
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
      goto LABEL_9;
LABEL_79:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_10;
  }
  if ( !UseQPCTime )
    goto LABEL_79;
LABEL_9:
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_10:
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( *(_BYTE *)(v6 + 4450) )
  {
    if ( (qword_1C00551F8 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2);
      v10 = *(_QWORD *)(a2 + 224);
      v11 = v10
          ? (unsigned __int8)BYTE2(*(_DWORD *)(v10 + 88)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v10 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v10 + 88))) << 8)
          : 0LL;
      v12 = *(_QWORD *)(a2 + 216);
      v13 = *(_QWORD *)(a2 + 168);
      v14 = *(_QWORD *)(a2 + 160);
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 5060) && *(_QWORD *)(v12 + 5064) )
        {
          v15 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 5056));
          if ( *(_DWORD *)(v12 + 5060) == 256 )
            v16 = (unsigned __int8)v15;
          else
            v16 = v15 % *(_DWORD *)(v12 + 5060);
          v17 = *(_QWORD *)(v12 + 5064) + 48 * v16;
          *(_DWORD *)v17 = 36;
          *(_QWORD *)(v17 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v17 + 8) = v14;
          *(_QWORD *)(v17 + 16) = v11;
          *(_QWORD *)(v17 + 24) = v13;
          *(_QWORD *)(v17 + 32) = Parm4;
        }
      }
    }
    v18 = *(_QWORD *)(a2 + 160);
    if ( v18 )
      *(_BYTE *)(v18 + 141) = -82;
    v19 = *(_QWORD *)(a2 + 216);
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v19 + 528) + 128LL);
    if ( v20 )
      v21 = v20(*(_QWORD *)(v19 + 536) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v21 = 1;
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
    {
      if ( UseQPCTime )
        v33 = KeQueryPerformanceCounter(0LL);
      else
        v33.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v33;
    }
    if ( !v21 )
      return 0LL;
    v22 = *(_QWORD *)(a2 + 224);
    v37 = *(_QWORD *)(a2 + 160);
    if ( v22 )
      v23 = (unsigned __int8)BYTE2(*(_DWORD *)(v22 + 88)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v22 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v22 + 88))) << 8);
    else
      v23 = 0LL;
    v24 = *(_QWORD *)(a2 + 168);
    if ( *(int *)(v6 + 4744) > 1 )
    {
      ListEntry = (PSLIST_ENTRY)RaAllocateConcurrentChannelToken(v6);
      *(_QWORD *)(a2 + 24) = ListEntry;
    }
    else if ( *(_DWORD *)(v6 + 688) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 680), &LockHandle);
    }
    else
    {
      LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(v6);
    }
  }
  else
  {
    v37 = *(_QWORD *)(a2 + 160);
    AddressLongFromXrb = DbgGetAddressLongFromXrb(a2);
    v24 = *(_QWORD *)(a2 + 168);
    v23 = AddressLongFromXrb;
  }
  if ( (qword_1C00551F8 & 4) != 0 )
    v39 = RaidLogGetParm4(a2);
  v25 = *(_QWORD *)(a2 + 160);
  if ( v25 )
    *(_BYTE *)(v25 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v26 = MEMORY[0xFFFFF78000000014];
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v6 + 528) + 16LL))(
          *(_QWORD *)(v6 + 536) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled
    && (((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 || ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0) )
  {
    if ( UseQPCTime )
      v35 = KeQueryPerformanceCounter(0LL);
    else
      v35.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v35;
  }
  if ( *(_BYTE *)(v6 + 4450) )
  {
    if ( *(int *)(v6 + 4744) > 1 )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v6 + 4752) + ((unsigned __int64)LODWORD(ListEntry[1].Next) << 6)),
        ListEntry);
    }
    else if ( *(_DWORD *)(v6 + 688) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      RaidAdapterReleaseInterruptLock(v6, (KIRQL)LockHandle.LockQueue.Next);
    }
  }
  if ( (qword_1C00551F8 & 4) != 0 && *(_DWORD *)(v6 + 5060) && *(_QWORD *)(v6 + 5064) )
  {
    v28 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 5056));
    if ( *(_DWORD *)(v6 + 5060) == 256 )
      v29 = (unsigned __int8)v28;
    else
      v29 = v28 % *(_DWORD *)(v6 + 5060);
    v30 = *(_QWORD *)(v6 + 5064) + 48 * v29;
    *(_DWORD *)v30 = 0;
    if ( v26 )
      *(_QWORD *)(v30 + 40) = v26;
    else
      *(_QWORD *)(v30 + 40) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v30 + 8) = v37;
    *(_QWORD *)(v30 + 32) = v39;
    *(_QWORD *)(v30 + 16) = v23;
    *(_QWORD *)(v30 + 24) = v24;
  }
  if ( !v27 )
    return (unsigned int)-1073741823;
  return v3;
}
