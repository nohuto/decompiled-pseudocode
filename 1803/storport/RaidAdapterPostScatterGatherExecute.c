/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C000A670
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C00084B0 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     RaidLogGetParm4 @ 0x1C000AC40 (RaidLogGetParm4.c)
 *     IsZonedWriteRequest @ 0x1C0010F00 (IsZonedWriteRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppxqt @ 0x1C0023E64 (McTemplateK0ppxqt.c)
 *     McTemplateK0ppxxx @ 0x1C0023F10 (McTemplateK0ppxxx.c)
 *     RaidAdapterRequestComplete @ 0x1C00275A8 (RaidAdapterRequestComplete.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0029FF4 (RaidGetIoStartingLbaAndLength.c)
 *     RaidZoneWriteGroupListPendingIoCount @ 0x1C002D890 (RaidZoneWriteGroupListPendingIoCount.c)
 *     RaidZoneWriteGroupListRemoveRequest @ 0x1C002D908 (RaidZoneWriteGroupListRemoveRequest.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C002D97C (RaidZoneWriteGroupListSearchRequest.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  PSLIST_ENTRY v7; // r13
  __int64 v8; // r12
  int v9; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, _QWORD); // rax
  char v16; // r14
  __int64 CurrentNodeNumber; // r14
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r14
  unsigned __int8 v24; // al
  int v25; // r9d
  _BYTE *v26; // r8
  char v27; // al
  __int64 Parm4; // rax
  __int64 v29; // r10
  __int64 v30; // r14
  __int64 v31; // r11
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // r8
  unsigned __int32 v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int32 v42; // r15d
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r12d
  unsigned int v49; // r15d
  __int64 v50; // rcx
  unsigned __int64 v51; // r11
  __int64 v52; // r10
  __int64 v53; // r14
  int v54; // ecx
  int v55; // ecx
  LARGE_INTEGER v56; // rax
  unsigned int v57; // r15d
  __int64 v58; // r13
  _BYTE *v59; // r14
  unsigned int v60; // r11d
  unsigned int i; // r10d
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // r9
  int v70; // edx
  int v71; // r8d
  signed __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rax
  unsigned int v75; // r15d
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // edx
  int v81; // ecx
  __int64 v82; // rdx
  char v83; // cl
  int v84; // r8d
  LARGE_INTEGER v85; // rax
  __int64 v86; // [rsp+40h] [rbp-29h] BYREF
  __int64 v87; // [rsp+48h] [rbp-21h]
  __int64 v88; // [rsp+50h] [rbp-19h]
  __int64 v89; // [rsp+58h] [rbp-11h]
  __int64 v90; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v92; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v93; // [rsp+D8h] [rbp+6Fh]
  PSLIST_ENTRY v94; // [rsp+E0h] [rbp+77h]
  __int64 v95; // [rsp+E8h] [rbp+7Fh]

  v2 = 0;
  a2[27] = a1;
  v94 = 0LL;
  v95 = 0LL;
  v4 = a2[21];
  v5 = a2;
  v6 = a2[28];
  v7 = 0LL;
  v87 = 0LL;
  v8 = 0LL;
  v88 = 0LL;
  LOBYTE(a2) = *(_BYTE *)(v4 + 2);
  v89 = 0LL;
  if ( (_BYTE)a2 == 40 )
  {
    LODWORD(a2) = *(_DWORD *)(v4 + 20);
    v9 = *(_DWORD *)(v4 + 24);
  }
  else
  {
    v9 = *(_DWORD *)(v4 + 12);
    LODWORD(a2) = (unsigned __int8)a2;
  }
  if ( v6 )
  {
    if ( *(int *)(v6 + 428) > 0 )
    {
      if ( (_DWORD)a2 == 32 || (v47 = 1, (_DWORD)a2 == 19) )
        v47 = 0;
      if ( v47 )
        goto LABEL_98;
    }
    else if ( *(_BYTE *)(v6 + 436) && (v9 & 0x10) == 0 || *(_BYTE *)(v6 + 437) && (v9 & 0x80000) == 0 )
    {
      goto LABEL_98;
    }
  }
  else if ( *(_DWORD *)(a1 + 812) && (unsigned int)((_DWORD)a2 - 36) > 1 && (*((_BYTE *)v5 + 17) & 8) == 0 )
  {
LABEL_98:
    *(_BYTE *)(v4 + 3) = 5;
    RaidAdapterRequestComplete(a1, v5, 1LL);
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
LABEL_56:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_10;
  }
  if ( !UseQPCTime )
    goto LABEL_56;
LABEL_9:
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_10:
  v11 = BYTE1(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) == 0;
  v12 = v5[21];
  v5[87] = PerformanceCounter.QuadPart;
  if ( v11 && v12 )
  {
    v24 = *(_BYTE *)(v12 + 2);
    if ( v24 != 40 )
    {
      v25 = v24;
      v26 = (_BYTE *)(v12 + 72);
      goto LABEL_42;
    }
    v25 = *(_DWORD *)(v12 + 20);
    v26 = 0LL;
    if ( !v25 )
    {
      v48 = *(_DWORD *)(v12 + 56);
      v49 = 0;
      if ( !v48 )
      {
LABEL_120:
        v8 = 0LL;
        goto LABEL_42;
      }
      while ( 1 )
      {
        v50 = *(unsigned int *)(v12 + 4LL * v49 + 120);
        if ( (unsigned int)v50 >= 0x80 )
        {
          v51 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v50 < (unsigned int)v51 )
          {
            v52 = v50 + v12;
            v53 = (unsigned int)v50;
            v54 = *(_DWORD *)(v50 + v12) - 64;
            if ( v54 )
            {
              v55 = v54 - 1;
              if ( v55 )
              {
                if ( v55 == 1 && v53 + 40 <= v51 )
                {
                  v26 = (_BYTE *)(v52 + 32);
                  if ( !*(_DWORD *)(v52 + 12) )
                    v26 = 0LL;
                  goto LABEL_120;
                }
              }
              else if ( v53 + 56 <= v51 )
              {
                goto LABEL_116;
              }
            }
            else if ( v53 + 40 <= v51 )
            {
LABEL_116:
              v8 = 0LL;
              if ( *(_BYTE *)(v52 + 10) )
                v26 = (_BYTE *)(v52 + 24);
              break;
            }
          }
        }
        if ( ++v49 >= v48 )
          goto LABEL_120;
      }
    }
LABEL_42:
    if ( v26 )
    {
      if ( !v25 && ((*v26 - 10) & 0x5F) == 0 )
      {
        v27 = v26[1];
        if ( (v27 & 8) != 0 )
          v26[1] = v27 & 0xF7;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 4450) )
  {
    if ( (qword_1C0056210 & 1) != 0 )
    {
      v90 = 0LL;
      Parm4 = RaidLogGetParm4(v5, v12);
      v29 = v5[20];
      v30 = Parm4;
      v31 = v5[21];
      if ( !v29 && v31 )
      {
        if ( *(_BYTE *)(v31 + 2) == 40 )
          v29 = *(_QWORD *)(v31 + 80);
        else
          v29 = *(_QWORD *)(v31 + 48);
      }
      v32 = v5[28];
      if ( v32 )
        v33 = (unsigned __int8)BYTE2(*(_DWORD *)(v32 + 88)) | ((((unsigned __int8)*(_DWORD *)(v32 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 88))) << 8);
      else
        v33 = 0;
      v34 = v5[27];
      if ( v34 && *(_DWORD *)(v34 + 5060) && *(_QWORD *)(v34 + 5064) )
      {
        v35 = _InterlockedIncrement((volatile signed __int32 *)(v34 + 5056));
        if ( *(_DWORD *)(v34 + 5060) == 256 )
          v36 = (unsigned __int8)v35;
        else
          v36 = v35 % *(_DWORD *)(v34 + 5060);
        v37 = *(_QWORD *)(v34 + 5064) + 48 * v36;
        *(_DWORD *)v37 = 36;
        *(_QWORD *)(v37 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v37 + 16) = v33;
        *(_QWORD *)(v37 + 8) = v29;
        *(_QWORD *)(v37 + 24) = v31;
        *(_QWORD *)(v37 + 32) = v30;
      }
    }
    v13 = v5[20];
    if ( v13 )
      *(_BYTE *)(v13 + 141) = -82;
    v14 = v5[27];
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v14 + 528) + 128LL);
    if ( v15 )
      v16 = v15(*(_QWORD *)(v14 + 536) + 16LL, v5[21]);
    else
      v16 = 1;
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
    {
      if ( UseQPCTime )
        v56 = KeQueryPerformanceCounter(0LL);
      else
        v56.QuadPart = KeQueryUnbiasedInterruptTime();
      v5[88] = v56.QuadPart;
    }
    if ( !v16 )
      return 0LL;
    if ( *(int *)(a1 + 4744) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 688) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else
    {
      CurrentNodeNumber = KeGetCurrentNodeNumber();
      v94 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + (CurrentNodeNumber << 6)));
      v7 = v94;
      if ( !v94 )
      {
        v57 = KeQueryHighestNodeNumber() + 1;
        do
LABEL_127:
          LODWORD(CurrentNodeNumber) = 0;
        while ( !v57 );
        while ( 1 )
        {
          v94 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4752)
                                                          + ((unsigned __int64)(unsigned int)CurrentNodeNumber << 6)));
          v7 = v94;
          if ( v94 )
            break;
          _mm_pause();
          LODWORD(CurrentNodeNumber) = CurrentNodeNumber + 1;
          if ( (unsigned int)CurrentNodeNumber >= v57 )
            goto LABEL_127;
        }
      }
      LODWORD(v7[1].Next) = CurrentNodeNumber;
      v5[3] = v7;
    }
  }
  if ( (qword_1C0056210 & 4) != 0 )
  {
    v38 = v5[28];
    if ( v38 )
      v39 = (unsigned __int8)BYTE2(*(_DWORD *)(v38 + 88)) | ((((unsigned __int8)*(_DWORD *)(v38 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(v38 + 88))) << 8);
    else
      v39 = 0LL;
    v88 = (unsigned int)v39;
    v40 = RaidLogGetParm4(v5, v39);
    v41 = v5[20];
    v8 = v5[21];
    v89 = v40;
    if ( v41 )
    {
      v87 = v41;
    }
    else if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v46 = *(_QWORD *)(v8 + 80);
      else
        v46 = *(_QWORD *)(v8 + 48);
      v87 = v46;
    }
  }
  v18 = v5[28];
  if ( !v18 || !*(_BYTE *)(v18 + 121) )
    goto LABEL_26;
  v58 = v5[21];
  if ( *(_BYTE *)(v58 + 2) != 40 )
  {
    v59 = (_BYTE *)(v58 + 72);
    goto LABEL_152;
  }
  v59 = 0LL;
  if ( !*(_DWORD *)(v58 + 20) )
  {
    v60 = *(_DWORD *)(v58 + 56);
    for ( i = 0; i < v60; ++i )
    {
      v62 = *(unsigned int *)(v58 + 4LL * i + 120);
      if ( (unsigned int)v62 >= 0x80 )
      {
        v63 = *(unsigned int *)(v58 + 16);
        if ( (unsigned int)v62 < (unsigned int)v63 )
        {
          v64 = (unsigned int)v62;
          v65 = *(_DWORD *)(v62 + v58) - 64;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              if ( v66 == 1 && v64 + 40 <= v63 )
              {
                v59 = (_BYTE *)(v64 + v58 + 32);
                if ( !*(_DWORD *)(v64 + v58 + 12) )
                  v59 = 0LL;
                break;
              }
            }
            else if ( v64 + 56 <= v63 )
            {
              goto LABEL_146;
            }
          }
          else if ( v64 + 40 <= v63 )
          {
LABEL_146:
            if ( *(_BYTE *)(v64 + v58 + 10) )
              v59 = (_BYTE *)(v64 + v58 + 24);
            break;
          }
        }
      }
    }
  }
LABEL_152:
  if ( (unsigned __int8)IsZonedWriteRequest(v5[28], 0LL, v5) )
  {
    v67 = v5[28];
    v86 = 0LL;
    v92 = 0;
    v68 = RaidZoneWriteGroupListSearchRequest((int)v67 + 400, 0, (_DWORD)v5, *(_DWORD *)(v67 + 580), 0);
    RaidGetIoStartingLbaAndLength(v59, &v86, &v92, v69);
    v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 40), 0LL, 0LL);
    v73 = v72;
    if ( v86 == v72 )
    {
      v74 = v92;
      v73 = v74 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 40), v92);
    }
    else
    {
      if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 0x20) != 0 )
        McTemplateK0ppxxx(v86, v70, v71, v5[20], v5[96], v92, v86, v72);
      ++*(_DWORD *)(a1 + 5744);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v68 + 56));
    if ( (unsigned __int64)(v73 - *(_QWORD *)(v68 + 16)) >= *(_QWORD *)(v68 + 32) )
    {
      if ( (qword_1C0056210 & 0x1000) != 0 )
        DbgLogRequest(a1, 41, v86, v92, v73, *(_QWORD *)(v68 + 16), v95);
      RaidZoneWriteGroupListRemoveRequest(v5[28] + 400LL, v68);
    }
    if ( (qword_1C0056210 & 0x1000) != 0 )
      DbgLogRequest(a1, 40, v86, v92, v73, v58, v95);
    goto LABEL_181;
  }
  v93 = 0LL;
  v75 = 0;
  if ( v59 )
  {
    LOBYTE(v76) = *(_BYTE *)(v58 + 2);
    v76 = (_BYTE)v76 == 40 ? *(_DWORD *)(v58 + 20) : (unsigned __int8)v76;
    if ( !v76 && *v59 == 0x94 && v59[1] == 4 )
    {
      v77 = v5[28];
      v78 = v77 + 400;
      if ( (v59[14] & 1) != 0 )
      {
        v82 = 0LL;
      }
      else
      {
        v79 = RaidZoneWriteGroupListSearchRequest(v78, 0, (_DWORD)v5, *(_DWORD *)(v77 + 580), 0);
        if ( !v79 )
          goto LABEL_176;
        v82 = v79;
        v78 = v5[28] + 400LL;
      }
      v75 = RaidZoneWriteGroupListPendingIoCount(v78, v82);
LABEL_176:
      if ( (qword_1C0056210 & 0x1000) != 0 )
      {
        v83 = v59[14];
        HIBYTE(v93) = v59[2];
        BYTE6(v93) = v59[3];
        BYTE5(v93) = v59[4];
        BYTE4(v93) = v59[5];
        BYTE3(v93) = v59[6];
        BYTE2(v93) = v59[7];
        BYTE1(v93) = v59[8];
        LOBYTE(v93) = v59[9];
        DbgLogRequest(a1, 42, v93, v75, v58, v83 & 1, v95);
      }
      else
      {
        v84 = v93;
      }
      if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 0x40) != 0 )
        McTemplateK0ppxqt(v81, v80, v84, v5[20], v5[96], v84, v75, v59[14] & 1);
    }
  }
LABEL_181:
  v7 = v94;
LABEL_26:
  v19 = v5[20];
  if ( v19 )
    *(_BYTE *)(v19 + 141) = -86;
  *((_BYTE *)v5 + 16) = v5[2] & 0xE3 | 0xC;
  v20 = v5[21];
  v21 = *(_QWORD *)(a1 + 536) + 16LL;
  v95 = MEMORY[0xFFFFF78000000014];
  v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 528) + 16LL))(v21, v20);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
  {
    if ( UseQPCTime )
      v85 = KeQueryPerformanceCounter(0LL);
    else
      v85.QuadPart = KeQueryUnbiasedInterruptTime();
    v5[89] = v85.QuadPart;
  }
  if ( *(_BYTE *)(a1 + 4450) )
  {
    if ( *(int *)(a1 + 4744) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 688) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
    }
    else
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)LODWORD(v7[1].Next) << 6)),
        v7);
    }
  }
  if ( (qword_1C0056210 & 4) != 0 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v42 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 5056));
    if ( *(_DWORD *)(a1 + 5060) == 256 )
      v43 = (unsigned __int8)v42;
    else
      v43 = v42 % *(_DWORD *)(a1 + 5060);
    v44 = v95;
    v45 = *(_QWORD *)(a1 + 5064) + 48 * v43;
    *(_DWORD *)v45 = 0;
    if ( !v44 )
      v44 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v45 + 40) = v44;
    *(_QWORD *)(v45 + 8) = v87;
    *(_QWORD *)(v45 + 16) = v88;
    *(_QWORD *)(v45 + 32) = v89;
    *(_QWORD *)(v45 + 24) = v8;
  }
  if ( !v22 )
    return (unsigned int)-1073741823;
  return v2;
}
