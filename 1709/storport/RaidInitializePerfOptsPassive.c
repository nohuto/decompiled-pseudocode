/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C00197FC
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C001D280 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C001D2AC (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r14
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  void *v6; // rcx
  KIRQL v8; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v10; // r15d
  __int64 v11; // r12
  ULONG ActiveProcessorCount; // r13d
  unsigned __int8 v13; // si
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned int v16; // r14d
  unsigned int v17; // eax
  size_t v18; // rdi
  _WORD *v19; // rbx
  unsigned int v20; // r13d
  char *v21; // rax
  char *v22; // r12
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // r9
  unsigned int v25; // r11d
  char *v26; // rdx
  unsigned int v27; // r14d
  __int64 v28; // r15
  char v29; // r12
  USHORT v30; // r14
  unsigned __int64 *v31; // r15
  unsigned __int64 v32; // rdx
  unsigned __int16 v33; // r9
  int v34; // r11d
  unsigned __int16 i; // r8
  __int64 v36; // rax
  unsigned int j; // edx
  char v38; // r8
  char v39; // r10
  unsigned int v40; // ecx
  unsigned int v41; // edi
  int v42; // r9d
  unsigned int v43; // r8d
  unsigned int k; // r11d
  __int64 v45; // r10
  __int64 v46; // rdx
  USHORT v47; // r14
  char *v48; // rdi
  unsigned int v49; // ebx
  ULONG v50; // eax
  unsigned int v51; // ebx
  int v52; // r15d
  int v53; // r9d
  unsigned int m; // r8d
  __int64 v55; // r10
  unsigned __int16 v56; // r10
  __int64 v57; // r9
  unsigned __int16 v58; // cx
  struct _SLIST_ENTRY *PoolWithTag; // r15
  unsigned int v60; // r12d
  __int64 v61; // r13
  PVOID v62; // rax
  _DWORD *v63; // r13
  unsigned int v64; // ebx
  ULONG v65; // eax
  unsigned __int16 v66; // r8
  int v67; // r10d
  char *v68; // rdx
  int v69; // r15d
  unsigned int v70; // r13d
  unsigned int n; // r9d
  __int64 v72; // rdi
  int v73; // ecx
  unsigned int v74; // edx
  signed __int32 v75[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+20h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v78; // [rsp+28h] [rbp-70h]
  char *v79; // [rsp+30h] [rbp-68h]
  _BYTE v80[96]; // [rsp+38h] [rbp-60h] BYREF
  KIRQL v82; // [rsp+A8h] [rbp+10h]
  size_t v83; // [rsp+A8h] [rbp+10h]
  USHORT v84; // [rsp+A8h] [rbp+10h]
  __int16 v85; // [rsp+B0h] [rbp+18h]
  USHORT v86; // [rsp+B8h] [rbp+20h]
  unsigned int v87; // [rsp+B8h] [rbp+20h]

  v1 = *(_WORD *)(a1 + 4740);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4744);
  v4 = a1;
  v5 = 0;
  v76 = 0;
  *(_WORD *)(a1 + 4740) = 0;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4744) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_87;
    v60 = KeQueryHighestNodeNumber() + 1;
    v61 = v60;
    v62 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (unsigned __int64)v60 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4752) = v62;
    if ( !v62 )
      goto LABEL_87;
    if ( v60 )
    {
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v2 + *(_QWORD *)(v4 + 4752)));
        v2 += 64LL;
        --v61;
      }
      while ( v61 );
      LODWORD(v2) = 0;
    }
    v63 = (_DWORD *)&PoolWithTag[1].Next + 1;
    do
    {
      *v63 = v2;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4752) + ((unsigned __int64)((unsigned int)v2 % v60) << 6)),
        PoolWithTag);
      LODWORD(v2) = v2 + 1;
      v63 += 8;
      PoolWithTag += 2;
    }
    while ( (unsigned int)v2 < v3 );
    v5 = v76;
    RaidAdapterAcquireStartIoLock(v4, v80);
    *(_DWORD *)(v4 + 4744) = v3;
    RaidAdapterReleaseStartIoLock(v4, v80);
    LOWORD(v2) = 0;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_5;
  v8 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v82 = v8;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v10 = ActiveGroupCount;
    v86 = ActiveGroupCount;
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
      goto LABEL_87;
    }
    if ( (_WORD)v10 )
    {
      v11 = 0LL;
      do
      {
        ProcNumber.Group = v2;
        ProcNumber.Reserved = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v2);
        v13 = 0;
        if ( ActiveProcessorCount )
        {
          v14 = 0;
          do
          {
            v15 = (unsigned __int64)(v14 + ((unsigned __int16)v2 << 6)) << 7;
            ProcNumber.Number = v13;
            KeInitializeDpc(
              (PRKDPC)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)),
              RaidpAdapterRedirectDpcRoutine,
              (PVOID)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)));
            KeSetImportanceDpc((PRKDPC)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 64LL));
            ++v13;
            *(_DWORD *)(v15 + *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 80) = 0;
            v14 = v13;
          }
          while ( v13 < ActiveProcessorCount );
          LOWORD(v10) = v86;
        }
        *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink + v11) = ActiveProcessorCount;
        LOWORD(v2) = v2 + 1;
        v11 += 4LL;
      }
      while ( (unsigned __int16)v2 < (unsigned __int16)v10 );
      v4 = a1;
      v5 = v76;
      v8 = v82;
    }
    _InterlockedOr(v75, 0);
    HIDWORD(WPP_MAIN_CB.Reserved) = (unsigned __int16)v10;
  }
  *(_WORD *)(v4 + 4740) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v8);
  if ( (v1 & 2) == 0 || (v85 = v1 & 0x3FC, (v1 & 0x3FC) == 0) )
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
  v16 = (unsigned __int8)(v1 >> 2);
  v78 = v16;
  v17 = v16 + 281;
  if ( (((_BYTE)v16 + 24) & 1) == 0 )
    v17 = v16 + 280;
  v18 = v17;
  v83 = v17;
  v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x72446152u);
  if ( !v19 )
  {
LABEL_87:
    v5 = -1073741670;
    goto LABEL_5;
  }
  v20 = v16 + 5;
  if ( (((_BYTE)v16 + 4) & 1) == 0 )
    v20 = v16 + 4;
  v87 = v20;
  v21 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v20 * *(unsigned __int16 *)(v4 + 4742), 0x72446152u);
  v79 = v21;
  v22 = v21;
  if ( !v21 )
  {
    ExFreePoolWithTag(v19, 0x72446152u);
    goto LABEL_87;
  }
  memset(v21, 0, v20 * *(unsigned __int16 *)(v4 + 4742));
  v23 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    do
    {
      v24 = 0;
      v25 = 0;
      v26 = &v22[v23 * v20];
      v27 = v23 << 6;
      *(_WORD *)v26 = v23;
      do
      {
        v28 = *(_QWORD *)(v4 + 4760);
        v29 = *(_BYTE *)(v27 + v28);
        if ( v29 != -1 )
        {
          v56 = 0;
          if ( v24 )
          {
            while ( v26[v56 + 4] != *(_BYTE *)((v23 << 6) + v25 + v28) )
            {
              if ( ++v56 >= v24 )
                goto LABEL_84;
            }
          }
          else
          {
LABEL_84:
            v26[v24 + 4] = v29;
            ++*((_WORD *)v26 + 1);
            ++v24;
          }
        }
        ++v25;
        ++v27;
      }
      while ( v25 < 0x40 );
      v22 = v79;
      ++v23;
      v20 = v87;
    }
    while ( v23 < *(_WORD *)(v4 + 4742) );
    v5 = v76;
    v18 = v83;
  }
  v30 = 0;
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v5 = 0;
    v31 = (unsigned __int64 *)(v19 + 132);
    do
    {
      memset(v19, 0, v18);
      KeQueryNodeActiveAffinity(v30, (PGROUP_AFFINITY)(v19 + 132), v19);
      if ( *v19 )
      {
        v32 = *v31;
        v33 = 0;
        v34 = 0;
        for ( i = 0; v32; v32 >>= 1 )
        {
          if ( (v32 & 1) != 0 )
          {
            v36 = v33++;
            *(_DWORD *)&v19[2 * v36 + 2] = i;
          }
          ++i;
        }
        for ( j = 0; j < (unsigned __int16)*v19; ++j )
        {
          v38 = 0;
          v39 = *(_BYTE *)(*(_DWORD *)&v19[2 * j + 2] + ((unsigned __int16)v19[136] << 6) + *(_QWORD *)(v4 + 4760));
          if ( v39 == -1 )
          {
            ++v34;
          }
          else
          {
            v57 = *((unsigned int *)v19 + 65);
            v58 = 0;
            if ( !(_DWORD)v57 )
              goto LABEL_75;
            do
            {
              if ( v39 == *((_BYTE *)v19 + v58 + 280) )
                v38 = 1;
              ++v58;
            }
            while ( v58 < (unsigned int)v57 );
            if ( !v38 )
            {
LABEL_75:
              *((_BYTE *)v19 + v57 + 280) = v39;
              ++*((_DWORD *)v19 + 65);
            }
          }
        }
        v40 = *((_DWORD *)v19 + 65);
        LOWORD(v41) = 0;
        if ( v40 )
        {
          if ( v34 )
          {
            v42 = 0;
            v43 = 0;
            for ( k = (v34 + v40 - 1) / v40; v43 < (unsigned __int16)*v19; ++v43 )
            {
              v45 = *(_QWORD *)(v4 + 4760);
              v46 = ((unsigned __int16)v19[136] << 6) + *(_DWORD *)&v19[2 * v43 + 2];
              if ( *(_BYTE *)(v46 + v45) == 0xFF )
              {
                ++v42;
                *(_BYTE *)(v46 + v45) = *((_BYTE *)v19 + (unsigned __int16)v41 + 280);
                if ( v42 == k )
                {
                  v42 = 0;
                  v41 = ((unsigned int)(unsigned __int16)v41 + 1) % *((_DWORD *)v19 + 65);
                }
              }
            }
          }
        }
        v18 = v83;
      }
      ++v30;
    }
    while ( v30 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v22 = v79;
  }
  ExFreePoolWithTag(v19, 0x72446152u);
  v47 = 0;
  v84 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    do
    {
      v48 = &v22[v47 * v20];
      if ( *((_WORD *)v48 + 1) )
      {
        v49 = *((unsigned __int16 *)v48 + 1);
        v50 = (v49 + KeQueryActiveProcessorCountEx(v47) - 1) / v49;
        if ( v50 != 1 )
        {
          LOWORD(v51) = 0;
          v52 = v47 << 6;
          v53 = 0;
          for ( m = 0; m < 0x40; ++m )
          {
            v55 = *(_QWORD *)(v4 + 4760);
            if ( *(_BYTE *)(v52 + m + v55) == 0xFF )
            {
              ++v53;
              *(_BYTE *)(v52 + m + v55) = v48[(unsigned __int16)v51 + 4];
              if ( v53 == v50 - 1 )
              {
                v53 = 0;
                v51 = ((unsigned int)(unsigned __int16)v51 + 1) % *((unsigned __int16 *)v48 + 1);
              }
            }
          }
          v22 = v79;
        }
      }
      else
      {
        LOWORD(v64) = 0;
        v65 = KeQueryActiveProcessorCountEx(v47);
        v66 = 0;
        v67 = 0;
        v68 = v22;
        v69 = v47 << 6;
        v70 = (v78 + v65 - 1) / v78;
        for ( n = 0; n < 0x40; ++n )
        {
          v72 = *(_QWORD *)(v4 + 4760);
          if ( *(_BYTE *)(v69 + n + v72) == 0xFF )
          {
            if ( !*((_WORD *)v68 + 1) )
            {
              v73 = (unsigned __int16)v64;
              do
              {
                v74 = (v73 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4742);
                v73 = (unsigned __int16)v74;
                LOWORD(v64) = v74;
                v68 = &v79[v87 * (unsigned __int16)v74];
              }
              while ( !*((_WORD *)v68 + 1) );
              v4 = a1;
              v22 = v79;
            }
            *(_BYTE *)(v69 + n + v72) = v68[v66 + 4];
            if ( ++v67 == v70 )
            {
              ++v66;
              v67 = 0;
              if ( v66 == *((_WORD *)v68 + 1) )
              {
                v66 = 0;
                v64 = ((unsigned int)(unsigned __int16)v64 + 1) % *(unsigned __int16 *)(v4 + 4742);
                v68 = &v22[v87 * v64];
              }
            }
          }
        }
        v47 = v84;
        v20 = v87;
      }
      v84 = ++v47;
    }
    while ( v47 < *(_WORD *)(v4 + 4742) );
    v5 = v76;
  }
  ExFreePoolWithTag(v22, 0x72446152u);
  *(_WORD *)(v4 + 4740) = v85 | *(_WORD *)(v4 + 4740) & 0xFC03 | 2;
  return v5;
}
