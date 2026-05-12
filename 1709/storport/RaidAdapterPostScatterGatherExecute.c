/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C0009270
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0007100 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0009200 (RaidpAdapterContinueScatterGather.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     RaidLogGetParm4 @ 0x1C00099C0 (RaidLogGetParm4.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C001E950 (RaAllocateConcurrentChannelToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     IsZonedWriteRequest @ 0x1C002B5D4 (IsZonedWriteRequest.c)
 *     RaidAdapterRequestComplete @ 0x1C002DF24 (RaidAdapterRequestComplete.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C002FF44 (RaidGetIoStartingLbaAndLength.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C0031E5C (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C0031F64 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, _QWORD); // rax
  char v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r14
  __int64 Parm4; // rax
  __int64 v22; // r10
  __int64 v23; // r14
  __int64 v24; // r11
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // r8
  unsigned __int32 v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int32 v35; // r12d
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  LARGE_INTEGER v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r15
  unsigned int v46; // r11d
  unsigned int i; // r10d
  __int64 v48; // rcx
  unsigned __int64 v49; // r8
  __int64 v50; // r9
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rcx
  unsigned __int8 v57; // r10
  _BYTE *v58; // r14
  unsigned int v59; // r11d
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  int v62; // ecx
  int v63; // ecx
  unsigned int v64; // r15d
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rax
  char v68; // cl
  LARGE_INTEGER v69; // rax
  __int64 v70; // [rsp+40h] [rbp-29h] BYREF
  __int64 v71; // [rsp+48h] [rbp-21h]
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-19h]
  __int64 v73; // [rsp+58h] [rbp-11h]
  __int64 v74; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v76; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v77; // [rsp+D8h] [rbp+6Fh]
  __int64 v78; // [rsp+E0h] [rbp+77h]
  __int64 v79; // [rsp+E8h] [rbp+7Fh]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  ListEntry = 0LL;
  v79 = 0LL;
  v4 = *(_QWORD *)(a2 + 224);
  v5 = a1;
  v6 = *(_QWORD *)(a2 + 168);
  v7 = 0LL;
  v71 = 0LL;
  v8 = 0LL;
  v78 = 0LL;
  v73 = 0LL;
  LOBYTE(a1) = *(_BYTE *)(v6 + 2);
  if ( (_BYTE)a1 == 40 )
  {
    LODWORD(a1) = *(_DWORD *)(v6 + 20);
    v9 = *(_DWORD *)(v6 + 24);
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 12);
    LODWORD(a1) = (unsigned __int8)a1;
  }
  if ( v4 )
  {
    if ( *(int *)(v4 + 428) > 0 )
    {
      if ( (_DWORD)a1 == 32 || (v40 = 1, (_DWORD)a1 == 19) )
        v40 = 0;
      if ( v40 )
        goto LABEL_86;
    }
    else if ( *(_BYTE *)(v4 + 436) && (v9 & 0x10) == 0 || *(_BYTE *)(v4 + 437) && (v9 & 0x80000) == 0 )
    {
      goto LABEL_86;
    }
  }
  else if ( *(_DWORD *)(v5 + 812) && (unsigned int)(a1 - 36) > 1 && (*(_BYTE *)(a2 + 17) & 8) == 0 )
  {
LABEL_86:
    *(_BYTE *)(v6 + 3) = 5;
    RaidAdapterRequestComplete(v5, a2, 1LL);
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
LABEL_46:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_10;
  }
  if ( !UseQPCTime )
    goto LABEL_46;
LABEL_9:
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_10:
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( *(_BYTE *)(v5 + 4450) )
  {
    if ( (qword_1C0056210 & 1) != 0 )
    {
      v74 = 0LL;
      Parm4 = RaidLogGetParm4(a2);
      v22 = *(_QWORD *)(a2 + 160);
      v23 = Parm4;
      v24 = *(_QWORD *)(a2 + 168);
      if ( !v22 && v24 )
      {
        if ( *(_BYTE *)(v24 + 2) == 40 )
          v22 = *(_QWORD *)(v24 + 80);
        else
          v22 = *(_QWORD *)(v24 + 48);
      }
      v25 = *(_QWORD *)(a2 + 224);
      if ( v25 )
        v26 = (unsigned __int8)BYTE2(*(_DWORD *)(v25 + 88)) | ((((unsigned __int8)*(_DWORD *)(v25 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v25 + 88))) << 8);
      else
        v26 = 0;
      v27 = *(_QWORD *)(a2 + 216);
      if ( v27 && *(_DWORD *)(v27 + 5060) && *(_QWORD *)(v27 + 5064) )
      {
        v28 = _InterlockedIncrement((volatile signed __int32 *)(v27 + 5056));
        if ( *(_DWORD *)(v27 + 5060) == 256 )
          v29 = (unsigned __int8)v28;
        else
          v29 = v28 % *(_DWORD *)(v27 + 5060);
        v30 = *(_QWORD *)(v27 + 5064) + 48 * v29;
        *(_DWORD *)v30 = 36;
        *(_QWORD *)(v30 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v30 + 16) = v26;
        *(_QWORD *)(v30 + 8) = v22;
        *(_QWORD *)(v30 + 24) = v24;
        *(_QWORD *)(v30 + 32) = v23;
      }
    }
    v11 = *(_QWORD *)(a2 + 160);
    if ( v11 )
      *(_BYTE *)(v11 + 141) = -82;
    v12 = *(_QWORD *)(a2 + 216);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 528) + 128LL);
    if ( v13 )
      v14 = v13(*(_QWORD *)(v12 + 536) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v14 = 1;
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
    {
      if ( UseQPCTime )
        v41 = KeQueryPerformanceCounter(0LL);
      else
        v41.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v41;
    }
    if ( !v14 )
      return 0LL;
    if ( *(int *)(v5 + 4744) > 1 )
    {
      ListEntry = (PSLIST_ENTRY)RaAllocateConcurrentChannelToken(v5);
      *(_QWORD *)(a2 + 24) = ListEntry;
    }
    else if ( *(_DWORD *)(v5 + 688) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 680), &LockHandle);
    }
    else
    {
      LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(v5);
    }
  }
  if ( (qword_1C0056210 & 4) != 0 )
  {
    v31 = *(_QWORD *)(a2 + 224);
    if ( v31 )
      v32 = (unsigned __int8)BYTE2(*(_DWORD *)(v31 + 88)) | ((((unsigned __int8)*(_DWORD *)(v31 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v31 + 88))) << 8);
    else
      v32 = 0;
    v7 = v32;
    v78 = v32;
    v33 = RaidLogGetParm4(a2);
    v34 = *(_QWORD *)(a2 + 160);
    v8 = *(_QWORD *)(a2 + 168);
    v73 = v33;
    if ( v34 )
    {
      v71 = v34;
    }
    else if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v39 = *(_QWORD *)(v8 + 80);
      else
        v39 = *(_QWORD *)(v8 + 48);
      v71 = v39;
    }
  }
  v15 = *(_QWORD *)(a2 + 224);
  if ( !v15 || !*(_BYTE *)(v15 + 121) )
    goto LABEL_25;
  if ( (unsigned __int8)IsZonedWriteRequest(v15, 0LL, a2) )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 160) + 184LL) + 8LL);
    if ( *(_BYTE *)(v44 + 2) != 40 )
    {
      v45 = v44 + 72;
      goto LABEL_120;
    }
    v45 = 0LL;
    if ( !*(_DWORD *)(v44 + 20) )
    {
      v46 = *(_DWORD *)(v44 + 56);
      for ( i = 0; i < v46; ++i )
      {
        v48 = *(unsigned int *)(v44 + 4LL * i + 120);
        if ( (unsigned int)v48 >= 0x80 )
        {
          v49 = *(unsigned int *)(v44 + 16);
          if ( (unsigned int)v48 < (unsigned int)v49 )
          {
            v50 = (unsigned int)v48;
            v51 = *(_DWORD *)(v48 + v44) - 64;
            if ( v51 )
            {
              v52 = v51 - 1;
              if ( v52 )
              {
                if ( v52 == 1 && v50 + 40 <= v49 )
                {
                  v45 = v50 + v44 + 32;
                  if ( !*(_DWORD *)(v50 + v44 + 12) )
                    v45 = 0LL;
                  break;
                }
              }
              else if ( v50 + 56 <= v49 )
              {
                goto LABEL_114;
              }
            }
            else if ( v50 + 40 <= v49 )
            {
LABEL_114:
              if ( *(_BYTE *)(v50 + v44 + 10) )
                v45 = v50 + v44 + 24;
              break;
            }
          }
        }
      }
    }
LABEL_120:
    v53 = *(_QWORD *)(a2 + 224);
    v70 = 0LL;
    v76 = 0;
    v54 = RaidZoneWriteGroupListSearchRequest((int)v53 + 400, 0, a2, *(_DWORD *)(v53 + 580), 0);
    RaidGetIoStartingLbaAndLength(v45, &v70, &v76);
    v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 40), 0LL, 0LL);
    if ( v70 == v55 )
    {
      v56 = v76;
      v55 = v56 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 40), v76);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v54 + 56));
    if ( (unsigned __int64)(v55 - *(_QWORD *)(v54 + 16)) >= *(_QWORD *)(v54 + 32) )
    {
      if ( (qword_1C0056210 & 0x1000) != 0 )
        DbgLogRequest(v5, 41, v70, v76, v55, *(_QWORD *)(v54 + 16), v79);
      RaidZoneWriteGroupListRemoveRequest(*(_QWORD *)(a2 + 224) + 400LL, v54);
    }
    if ( (qword_1C0056210 & 0x1000) != 0 )
      DbgLogRequest(v5, 40, v70, v76, v55, v8, v79);
    goto LABEL_160;
  }
  v57 = *(_BYTE *)(v8 + 2);
  if ( v57 != 40 )
  {
    v58 = (_BYTE *)(v8 + 72);
    goto LABEL_147;
  }
  v58 = 0LL;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_147;
  v59 = *(_DWORD *)(v8 + 56);
  v43 = 0LL;
  if ( !v59 )
    goto LABEL_147;
  while ( 1 )
  {
    v60 = *(unsigned int *)(v8 + 4LL * (unsigned int)v43 + 120);
    if ( (unsigned int)v60 < 0x80 )
      goto LABEL_144;
    v61 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v60 >= (unsigned int)v61 )
      goto LABEL_144;
    v42 = (unsigned int)v60;
    v62 = *(_DWORD *)(v60 + v8) - 64;
    if ( !v62 )
      break;
    v63 = v62 - 1;
    if ( v63 )
    {
      if ( v63 == 1 && v42 + 40 <= v61 )
      {
        v58 = (_BYTE *)(v42 + v8 + 32);
        if ( !*(_DWORD *)(v42 + v8 + 12) )
          v58 = 0LL;
        goto LABEL_147;
      }
    }
    else if ( v42 + 56 <= v61 )
    {
      goto LABEL_141;
    }
LABEL_144:
    v43 = (unsigned int)(v43 + 1);
    if ( (unsigned int)v43 >= v59 )
      goto LABEL_147;
  }
  if ( v42 + 40 > v61 )
    goto LABEL_144;
LABEL_141:
  if ( *(_BYTE *)(v42 + v8 + 10) )
    v58 = (_BYTE *)(v42 + v8 + 24);
LABEL_147:
  v77 = 0LL;
  v64 = 0;
  if ( v58 )
  {
    v65 = v57 == 40 ? *(_DWORD *)(v8 + 20) : v57;
    if ( !v65 && *v58 == 0x94 && v58[1] == 4 )
    {
      v66 = 0LL;
      if ( (v58[14] & 1) != 0 )
        goto LABEL_157;
      v67 = RaidZoneWriteGroupListSearchRequest(
              (unsigned int)*(_QWORD *)(a2 + 224) + 400,
              0,
              a2,
              *(_DWORD *)(*(_QWORD *)(a2 + 224) + 580LL),
              0);
      if ( v67 )
      {
        v66 = v67;
LABEL_157:
        v64 = RaidZoneWriteGroupListPendingIoCount(*(_QWORD *)(a2 + 224) + 400LL, v66, v42, v43);
      }
      if ( (qword_1C0056210 & 0x1000) != 0 )
      {
        v68 = v58[14];
        HIBYTE(v77) = v58[2];
        BYTE6(v77) = v58[3];
        BYTE5(v77) = v58[4];
        BYTE4(v77) = v58[5];
        BYTE3(v77) = v58[6];
        BYTE2(v77) = v58[7];
        BYTE1(v77) = v58[8];
        LOBYTE(v77) = v58[9];
        DbgLogRequest(v5, 42, v77, v64, v8, v68 & 1, v79);
      }
    }
  }
LABEL_160:
  v7 = v78;
LABEL_25:
  v16 = *(_QWORD *)(a2 + 160);
  if ( v16 )
    *(_BYTE *)(v16 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v17 = *(_QWORD *)(a2 + 168);
  v18 = *(_QWORD *)(v5 + 536) + 16LL;
  v79 = MEMORY[0xFFFFF78000000014];
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 528) + 16LL))(v18, v17);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
  {
    if ( UseQPCTime )
      v69 = KeQueryPerformanceCounter(0LL);
    else
      v69.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v69;
  }
  if ( *(_BYTE *)(v5 + 4450) )
  {
    if ( *(int *)(v5 + 4744) > 1 )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v5 + 4752) + ((unsigned __int64)LODWORD(ListEntry[1].Next) << 6)),
        ListEntry);
    }
    else if ( *(_DWORD *)(v5 + 688) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      RaidAdapterReleaseInterruptLock(v5, (KIRQL)LockHandle.LockQueue.Next);
    }
  }
  if ( (qword_1C0056210 & 4) != 0 && *(_DWORD *)(v5 + 5060) && *(_QWORD *)(v5 + 5064) )
  {
    v35 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 5056));
    if ( *(_DWORD *)(v5 + 5060) == 256 )
      v36 = (unsigned __int8)v35;
    else
      v36 = v35 % *(_DWORD *)(v5 + 5060);
    v37 = v79;
    v38 = *(_QWORD *)(v5 + 5064) + 48 * v36;
    *(_DWORD *)v38 = 0;
    if ( !v37 )
      v37 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v38 + 40) = v37;
    *(_QWORD *)(v38 + 8) = v71;
    *(_QWORD *)(v38 + 32) = v73;
    *(_QWORD *)(v38 + 16) = v7;
    *(_QWORD *)(v38 + 24) = v8;
  }
  if ( !v19 )
    return (unsigned int)-1073741823;
  return v2;
}
