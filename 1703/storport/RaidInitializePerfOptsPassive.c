/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C0010038
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C000FE20 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C001E314 (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  void *v6; // rcx
  KIRQL v8; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v10; // r15d
  unsigned __int16 v11; // r14
  __int64 v12; // r12
  unsigned __int8 v13; // bp
  ULONG ActiveProcessorCount; // esi
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // edi
  unsigned int v18; // eax
  size_t v19; // r14
  _WORD *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edi
  char *v23; // rax
  char *v24; // r13
  unsigned __int16 v25; // dx
  unsigned int v26; // ebp
  char *v27; // rcx
  unsigned __int16 v28; // r8
  unsigned int v29; // r10d
  __int64 v30; // r14
  __int64 v31; // rdi
  char v32; // r15
  USHORT v33; // r12
  struct _GROUP_AFFINITY *v34; // r13
  unsigned __int64 Mask; // rdx
  unsigned __int16 v36; // r9
  int v37; // r14d
  unsigned __int16 i; // r8
  __int64 v39; // rax
  unsigned int v40; // ecx
  char v41; // r8
  __int64 v42; // rdi
  int v43; // r11d
  char v44; // r15
  unsigned int v45; // ecx
  unsigned int v46; // r11d
  int v47; // r9d
  unsigned int j; // r8d
  __int64 v49; // r10
  __int64 v50; // rdx
  __int64 v51; // r12
  USHORT v52; // r15
  unsigned int v53; // ebp
  char *v54; // r14
  unsigned int v55; // ebx
  ULONG v56; // eax
  __int64 v57; // rdi
  unsigned int v58; // ebx
  int v59; // r8d
  __int64 v60; // r11
  __int64 v61; // r9
  unsigned __int16 v62; // r9
  char v63; // di
  __int64 v64; // r10
  unsigned __int16 v65; // r9
  struct _SLIST_ENTRY *PoolWithTag; // r15
  __int64 v67; // r12
  __int64 v68; // r13
  PVOID v69; // rax
  __int64 v70; // r14
  unsigned int v71; // r14d
  unsigned int *v72; // r13
  unsigned int v73; // ebx
  ULONG v74; // eax
  char *v75; // r14
  __int64 v76; // rdi
  unsigned __int16 v77; // r8
  int v78; // r9d
  char *v79; // rdx
  unsigned int v80; // r13d
  __int64 v81; // r11
  int v82; // ecx
  unsigned int v83; // edx
  signed __int32 v84[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+20h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v87; // [rsp+28h] [rbp-70h]
  char *v88; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  KIRQL v91; // [rsp+A8h] [rbp+10h]
  size_t v92; // [rsp+A8h] [rbp+10h]
  USHORT v93; // [rsp+A8h] [rbp+10h]
  __int16 v94; // [rsp+B0h] [rbp+18h]
  unsigned int v95; // [rsp+B8h] [rbp+20h]

  v1 = *(_WORD *)(a1 + 4740);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4744);
  v4 = a1;
  v5 = 0;
  v85 = 0;
  *(_WORD *)(a1 + 4740) = 0;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4744) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_91;
    v67 = (unsigned int)KeQueryHighestNodeNumber() + 1;
    v68 = v67;
    v69 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v67 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4752) = v69;
    if ( !v69 )
      goto LABEL_91;
    if ( (_DWORD)v67 )
    {
      v70 = 0LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v70 + *(_QWORD *)(v4 + 4752)));
        v70 += 64LL;
        --v68;
      }
      while ( v68 );
    }
    v71 = 0;
    v72 = (unsigned int *)&PoolWithTag[1].Next + 1;
    do
    {
      *v72 = v71;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4752) + ((unsigned __int64)(v71 % (unsigned int)v67) << 6)),
        PoolWithTag);
      ++v71;
      v72 += 8;
      PoolWithTag += 2;
    }
    while ( v71 < v3 );
    v2 = 0LL;
    RaidAdapterAcquireStartIoLock(v4, &LockHandle);
    *(_DWORD *)(v4 + 4744) = v3;
    if ( *(_DWORD *)(v4 + 688) )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      RaidAdapterReleaseInterruptLock(v4, (KIRQL)LockHandle.LockQueue.Next);
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_5;
  v8 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v91 = v8;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v10 = ActiveGroupCount;
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = ExAllocatePoolWithTag(
                                               NonPagedPoolNx,
                                               (unsigned __int64)ActiveGroupCount << 13,
                                               0x72446152u);
    if ( !*((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
      || (WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (_LIST_ENTRY *)ExAllocatePoolWithTag(
                                                                              NonPagedPoolNx,
                                                                              4LL * v10,
                                                                              0x72446152u)) == 0LL )
    {
      v5 = -1073741670;
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
        {
          ExFreePoolWithTag(*(&WPP_MAIN_CB.Reserved + 1), 0x72446152u);
          *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
        }
        if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
        {
          ExFreePoolWithTag(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, 0x72446152u);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
        }
        HIDWORD(WPP_MAIN_CB.Reserved) = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v8);
      goto LABEL_5;
    }
    v11 = 0;
    if ( (_WORD)v10 )
    {
      v12 = 0LL;
      do
      {
        ProcNumber.Group = v11;
        ProcNumber.Reserved = 0;
        v13 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v11);
        if ( ActiveProcessorCount )
        {
          v15 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
          do
          {
            ProcNumber.Number = v13;
            v16 = (v2 + v13) << 7;
            KeInitializeDpc((PRKDPC)(v16 + v15), RaidpAdapterRedirectDpcRoutine, (PVOID)(v16 + v15));
            KeSetImportanceDpc((PRKDPC)(v16 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)(v16 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)(v16 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 64LL));
            v15 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
            ++v13;
            *(_DWORD *)(v16 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80) = 0;
          }
          while ( v13 < ActiveProcessorCount );
        }
        ++v11;
        v2 += 64LL;
        *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink + v12) = ActiveProcessorCount;
        v12 += 4LL;
      }
      while ( v11 < (unsigned __int16)v10 );
      v4 = a1;
      v5 = v85;
      v8 = v91;
    }
    _InterlockedOr(v84, 0);
    HIDWORD(WPP_MAIN_CB.Reserved) = (unsigned __int16)v10;
  }
  *(_WORD *)(v4 + 4740) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v8);
  if ( (v1 & 2) == 0 || (v94 = v1 & 0x3FC, (v1 & 0x3FC) == 0) )
  {
LABEL_5:
    v6 = *(void **)(v4 + 4760);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x72446152u);
      *(_QWORD *)(v4 + 4760) = 0LL;
      *(_WORD *)(v4 + 4742) = 0;
    }
    return v5;
  }
  v17 = (unsigned __int8)(v1 >> 2);
  v87 = v17;
  v18 = v17 + 281;
  if ( (((_BYTE)v17 + 24) & 1) == 0 )
    v18 = v17 + 280;
  v19 = v18;
  v92 = v18;
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x72446152u);
  if ( !v20 )
  {
LABEL_91:
    v5 = -1073741670;
    goto LABEL_5;
  }
  v21 = v17 + 4;
  v22 = v17 + 5;
  if ( (v21 & 1) == 0 )
    v22 = v21;
  v95 = v22;
  v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v22 * *(unsigned __int16 *)(v4 + 4742), 0x72446152u);
  v88 = v23;
  v24 = v23;
  if ( !v23 )
  {
    ExFreePoolWithTag(v20, 0x72446152u);
    goto LABEL_91;
  }
  memset(v23, 0, v22 * *(unsigned __int16 *)(v4 + 4742));
  v25 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v26 = v22;
    do
    {
      v27 = &v24[v26 * v25];
      v28 = 0;
      v29 = 0;
      *(_WORD *)v27 = v25;
      do
      {
        v30 = *(_QWORD *)(v4 + 4760);
        v31 = (v25 << 6) + v29;
        v32 = *(_BYTE *)(v31 + v30);
        if ( v32 != -1 )
        {
          v62 = 0;
          if ( v28 )
          {
            v63 = *(_BYTE *)(v31 + v30);
            while ( v27[v62 + 4] != v63 )
            {
              if ( ++v62 >= v28 )
                goto LABEL_88;
            }
          }
          else
          {
LABEL_88:
            v27[v28 + 4] = v32;
            ++*((_WORD *)v27 + 1);
            ++v28;
          }
        }
        ++v29;
      }
      while ( v29 < 0x40 );
      v24 = v88;
      ++v25;
    }
    while ( v25 < *(_WORD *)(v4 + 4742) );
    v5 = v85;
    v19 = v92;
  }
  v33 = 0;
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v34 = (struct _GROUP_AFFINITY *)(v20 + 132);
    v5 = 0;
    do
    {
      memset(v20, 0, v19);
      KeQueryNodeActiveAffinity(v33, v34, v20);
      if ( *v20 )
      {
        Mask = v34->Mask;
        v36 = 0;
        v37 = 0;
        for ( i = 0; Mask; Mask >>= 1 )
        {
          if ( (Mask & 1) != 0 )
          {
            v39 = v36++;
            *(_DWORD *)&v20[2 * v39 + 2] = i;
          }
          ++i;
        }
        v40 = 0;
        if ( *v20 )
        {
          do
          {
            v41 = 0;
            v42 = *(_QWORD *)(v4 + 4760);
            v43 = *(_DWORD *)&v20[2 * v40 + 2];
            v44 = *(_BYTE *)(v43 + ((unsigned __int16)v20[136] << 6) + v42);
            if ( v44 == -1 )
            {
              ++v37;
            }
            else
            {
              v64 = *((unsigned int *)v20 + 65);
              v65 = 0;
              if ( !(_DWORD)v64 )
                goto LABEL_89;
              do
              {
                if ( *(_BYTE *)(v43 + ((unsigned __int16)v20[136] << 6) + v42) == *((_BYTE *)v20 + v65 + 280) )
                  v41 = 1;
                ++v65;
              }
              while ( v65 < (unsigned int)v64 );
              if ( !v41 )
              {
LABEL_89:
                *((_BYTE *)v20 + v64 + 280) = v44;
                ++*((_DWORD *)v20 + 65);
              }
            }
            ++v40;
          }
          while ( v40 < (unsigned __int16)*v20 );
          v34 = (struct _GROUP_AFFINITY *)(v20 + 132);
        }
        v45 = *((_DWORD *)v20 + 65);
        LOWORD(v46) = 0;
        if ( v45 )
        {
          if ( v37 )
          {
            v47 = 0;
            for ( j = 0; j < (unsigned __int16)*v20; ++j )
            {
              v49 = *(_QWORD *)(v4 + 4760);
              v50 = ((unsigned __int16)v20[136] << 6) + *(_DWORD *)&v20[2 * j + 2];
              if ( *(_BYTE *)(v50 + v49) == 0xFF )
              {
                ++v47;
                *(_BYTE *)(v50 + v49) = *((_BYTE *)v20 + (unsigned __int16)v46 + 280);
                if ( v47 == (v37 + v45 - 1) / v45 )
                {
                  v47 = 0;
                  v46 = ((unsigned int)(unsigned __int16)v46 + 1) % *((_DWORD *)v20 + 65);
                }
              }
            }
          }
        }
        v19 = v92;
      }
      ++v33;
    }
    while ( v33 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v24 = v88;
  }
  ExFreePoolWithTag(v20, 0x72446152u);
  LODWORD(v51) = 0;
  v52 = 0;
  v93 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v53 = v95;
    do
    {
      v54 = &v24[v53 * v52];
      if ( *((_WORD *)v54 + 1) <= (unsigned __int16)v51 )
      {
        LOWORD(v73) = v51;
        v74 = KeQueryActiveProcessorCountEx(v52);
        v75 = v88;
        v76 = v52 << 6;
        v77 = v51;
        v78 = v51;
        v79 = v88;
        v80 = (v87 + v74 - 1) / v87;
        v51 = 64LL;
        do
        {
          v81 = *(_QWORD *)(v4 + 4760);
          if ( *(_BYTE *)(v76 + v81) == 0xFF )
          {
            if ( !*((_WORD *)v79 + 1) )
            {
              v82 = (unsigned __int16)v73;
              do
              {
                v83 = (v82 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4742);
                v82 = (unsigned __int16)v83;
                LOWORD(v73) = v83;
                v79 = &v88[v95 * (unsigned __int16)v83];
              }
              while ( !*((_WORD *)v79 + 1) );
              v4 = a1;
              v75 = v88;
              v53 = v95;
            }
            ++v78;
            *(_BYTE *)(v76 + v81) = v79[v77 + 4];
            if ( v78 == v80 )
            {
              ++v77;
              v78 = 0;
              if ( v77 == *((_WORD *)v79 + 1) )
              {
                v77 = 0;
                v73 = ((unsigned int)(unsigned __int16)v73 + 1) % *(unsigned __int16 *)(v4 + 4742);
                v79 = &v75[v53 * v73];
              }
            }
          }
          v76 = (unsigned int)(v76 + 1);
          --v51;
        }
        while ( v51 );
        v52 = v93;
        v24 = v88;
      }
      else
      {
        v55 = *((unsigned __int16 *)v54 + 1);
        v56 = (v55 + KeQueryActiveProcessorCountEx(v52) - 1) / v55;
        if ( v56 != 1 )
        {
          v57 = v52 << 6;
          LOWORD(v58) = v51;
          v59 = v51;
          v60 = 64LL;
          do
          {
            v61 = *(_QWORD *)(v4 + 4760);
            if ( *(_BYTE *)(v57 + v61) == 0xFF )
            {
              ++v59;
              *(_BYTE *)(v57 + v61) = v54[(unsigned __int16)v58 + 4];
              if ( v59 == v56 - 1 )
              {
                v59 = v51;
                v58 = ((unsigned int)(unsigned __int16)v58 + 1) % *((unsigned __int16 *)v54 + 1);
              }
            }
            v57 = (unsigned int)(v57 + 1);
            --v60;
          }
          while ( v60 );
          v53 = v95;
        }
      }
      v93 = ++v52;
    }
    while ( v52 < *(_WORD *)(v4 + 4742) );
    v5 = v85;
  }
  ExFreePoolWithTag(v24, 0x72446152u);
  *(_WORD *)(v4 + 4740) = v94 | *(_WORD *)(v4 + 4740) & 0xFC03 | 2;
  return v5;
}
