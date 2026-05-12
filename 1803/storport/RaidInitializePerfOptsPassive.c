/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C002AD18
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0029188 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007C70 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0007C9C (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r14
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  struct _SLIST_ENTRY *PoolWithTag; // r15
  void *v7; // rcx
  unsigned int v9; // r12d
  __int64 v10; // r13
  PVOID v11; // rax
  _DWORD *v12; // r13
  KIRQL v13; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v15; // r15d
  __int64 v16; // r12
  ULONG ActiveProcessorCount; // r13d
  unsigned __int8 v18; // si
  int v19; // eax
  unsigned __int64 v20; // rdi
  unsigned int v21; // edi
  unsigned int v22; // eax
  size_t v23; // r14
  _WORD *v24; // rbx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // edi
  char *v28; // rax
  char *v29; // r13
  unsigned __int16 v30; // r8
  unsigned int v31; // ebp
  char *v32; // rdx
  unsigned __int16 v33; // r9
  unsigned int v34; // r11d
  unsigned int v35; // r14d
  __int64 v36; // r15
  char v37; // r12
  unsigned __int16 v38; // r10
  USHORT v39; // r12
  struct _GROUP_AFFINITY *v40; // r13
  unsigned int v41; // ecx
  unsigned __int64 Mask; // rdx
  unsigned __int16 v43; // r9
  int v44; // r15d
  unsigned __int16 v45; // r8
  __int64 v46; // rax
  unsigned int v47; // edx
  char v48; // r8
  __int64 v49; // rdi
  int v50; // ecx
  char v51; // r14
  __int64 v52; // r10
  unsigned __int16 v53; // r9
  char v54; // cl
  unsigned int v55; // r8d
  unsigned int v56; // r11d
  int v57; // r9d
  unsigned int v58; // eax
  unsigned int v59; // r8d
  __int64 v60; // r10
  __int64 v61; // rdx
  USHORT v62; // r14
  unsigned int v63; // ebp
  char *v64; // rdi
  unsigned int v65; // ebx
  ULONG v66; // eax
  unsigned int v67; // ebx
  int v68; // r15d
  int v69; // r9d
  unsigned int i; // r8d
  __int64 v71; // r10
  unsigned int v72; // ebx
  ULONG v73; // eax
  unsigned __int16 v74; // r8
  int v75; // r10d
  char *v76; // r12
  unsigned int v77; // r13d
  char *v78; // rdx
  int v79; // r15d
  unsigned int j; // r9d
  __int64 v81; // rdi
  int v82; // ecx
  unsigned int v83; // edx
  signed __int32 v84[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+20h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v87; // [rsp+28h] [rbp-70h]
  unsigned int v88; // [rsp+2Ch] [rbp-6Ch]
  PVOID P; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v90[4]; // [rsp+38h] [rbp-60h] BYREF
  KIRQL Size; // [rsp+A8h] [rbp+10h]
  size_t Sizea; // [rsp+A8h] [rbp+10h]
  USHORT Sizeb; // [rsp+A8h] [rbp+10h]
  __int16 v95; // [rsp+B0h] [rbp+18h]
  USHORT v96; // [rsp+B8h] [rbp+20h]
  unsigned int v97; // [rsp+B8h] [rbp+20h]

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
      goto LABEL_5;
    v9 = KeQueryHighestNodeNumber() + 1;
    v10 = v9;
    v11 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (unsigned __int64)v9 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4752) = v11;
    if ( !v11 )
      goto LABEL_5;
    if ( v9 )
    {
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v2 + *(_QWORD *)(v4 + 4752)));
        v2 += 64LL;
        --v10;
      }
      while ( v10 );
      LODWORD(v2) = 0;
    }
    v12 = (_DWORD *)&PoolWithTag[1].Next + 1;
    do
    {
      *v12 = v2;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4752) + ((unsigned __int64)((unsigned int)v2 % v9) << 6)),
        PoolWithTag);
      LODWORD(v2) = v2 + 1;
      v12 += 8;
      PoolWithTag += 2;
    }
    while ( (unsigned int)v2 < v3 );
    v5 = v85;
    RaidAdapterAcquireStartIoLock(v4, v90);
    *(_DWORD *)(v4 + 4744) = v3;
    RaidAdapterReleaseStartIoLock(v4, v90);
    LOWORD(v2) = 0;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_6;
  v13 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  Size = v13;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v15 = ActiveGroupCount;
    v96 = ActiveGroupCount;
    *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = ExAllocatePoolWithTag(
                                                       NonPagedPoolNx,
                                                       (unsigned __int64)ActiveGroupCount << 13,
                                                       0x72446152u);
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock
      || (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v15, 0x72446152u)) == 0LL )
    {
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
        {
          ExFreePoolWithTag(*(PVOID *)&WPP_MAIN_CB.DeviceLock.Header.Lock, 0x72446152u);
          *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
        }
        if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
        {
          ExFreePoolWithTag(*(PVOID *)&WPP_MAIN_CB.ActiveThreadCount, 0x72446152u);
          *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
        }
        LODWORD(WPP_MAIN_CB.SecurityDescriptor) = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
      goto LABEL_5;
    }
    if ( (_WORD)v15 )
    {
      v16 = 0LL;
      do
      {
        ProcNumber.Group = v2;
        ProcNumber.Reserved = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v2);
        v18 = 0;
        if ( ActiveProcessorCount )
        {
          v19 = 0;
          do
          {
            v20 = (unsigned __int64)(v19 + ((unsigned __int16)v2 << 6)) << 7;
            ProcNumber.Number = v18;
            KeInitializeDpc(
              (PRKDPC)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock),
              (PKDEFERRED_ROUTINE)RaidpAdapterRedirectDpcRoutine,
              (PVOID)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock));
            KeSetImportanceDpc((PRKDPC)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 64LL));
            ++v18;
            *(_DWORD *)(v20 + *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock + 80) = 0;
            v19 = v18;
          }
          while ( v18 < ActiveProcessorCount );
          LOWORD(v15) = v96;
        }
        *(_DWORD *)(v16 + *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount) = ActiveProcessorCount;
        LOWORD(v2) = v2 + 1;
        v16 += 4LL;
      }
      while ( (unsigned __int16)v2 < (unsigned __int16)v15 );
      v4 = a1;
      v5 = v85;
      v13 = Size;
    }
    _InterlockedOr(v84, 0);
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = (unsigned __int16)v15;
  }
  *(_WORD *)(v4 + 4740) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
  if ( (v1 & 2) == 0 || (v95 = v1 & 0x3FC, (v1 & 0x3FC) == 0) )
  {
LABEL_6:
    v7 = *(void **)(v4 + 4760);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x72446152u);
      *(_QWORD *)(v4 + 4760) = 0LL;
      *(_WORD *)(v4 + 4742) = 0;
    }
    return v5;
  }
  v21 = (unsigned __int8)(v1 >> 2);
  v87 = v21;
  v22 = v21 + 281;
  if ( (((_BYTE)v21 + 24) & 1) == 0 )
    v22 = v21 + 280;
  v23 = v22;
  Sizea = v22;
  v24 = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x72446152u);
  if ( !v24 )
  {
LABEL_5:
    v5 = -1073741670;
    goto LABEL_6;
  }
  v25 = v21 + 4;
  v26 = (((_BYTE)v21 + 4) & 1) == 0;
  v27 = v21 + 5;
  if ( v26 )
    v27 = v25;
  v97 = v27;
  v28 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v27 * *(unsigned __int16 *)(v4 + 4742), 0x72446152u);
  P = v28;
  v29 = v28;
  if ( !v28 )
  {
    ExFreePoolWithTag(v24, 0x72446152u);
    goto LABEL_5;
  }
  memset(v28, 0, v27 * *(unsigned __int16 *)(v4 + 4742));
  v30 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v31 = v27;
    do
    {
      v32 = &v29[v30 * v31];
      v33 = 0;
      v34 = 0;
      v35 = v30 << 6;
      *(_WORD *)v32 = v30;
      do
      {
        v36 = *(_QWORD *)(v4 + 4760);
        v37 = *(_BYTE *)(v35 + v36);
        if ( v37 != -1 )
        {
          v38 = 0;
          if ( v33 )
          {
            while ( v32[v38 + 4] != *(_BYTE *)((v30 << 6) + v34 + v36) )
            {
              if ( ++v38 >= v33 )
                goto LABEL_52;
            }
          }
          else
          {
LABEL_52:
            v32[v33 + 4] = v37;
            ++*((_WORD *)v32 + 1);
            ++v33;
          }
        }
        ++v34;
        ++v35;
      }
      while ( v34 < 0x40 );
      v29 = (char *)P;
      v31 = v27;
      ++v30;
    }
    while ( v30 < *(_WORD *)(v4 + 4742) );
    v5 = v85;
    v23 = Sizea;
  }
  v39 = 0;
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v40 = (struct _GROUP_AFFINITY *)(v24 + 132);
    v5 = 0;
    do
    {
      memset(v24, 0, v23);
      KeQueryNodeActiveAffinity(v39, v40, v24);
      LOWORD(v41) = *v24;
      if ( *v24 )
      {
        Mask = v40->Mask;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        if ( v40->Mask )
        {
          do
          {
            if ( (Mask & 1) != 0 )
            {
              v46 = v43++;
              *(_DWORD *)&v24[2 * v46 + 2] = v45;
            }
            ++v45;
            Mask >>= 1;
          }
          while ( Mask );
          LOWORD(v41) = *v24;
        }
        v47 = 0;
        if ( (_WORD)v41 )
        {
          do
          {
            v48 = 0;
            v49 = *(_QWORD *)(v4 + 4760);
            v50 = (unsigned __int16)v24[136] << 6;
            v51 = *(_BYTE *)((unsigned int)(v50 + *(_DWORD *)&v24[2 * v47 + 2]) + v49);
            if ( v51 == -1 )
            {
              ++v44;
            }
            else
            {
              v52 = *((unsigned int *)v24 + 65);
              v53 = 0;
              if ( !(_DWORD)v52 )
                goto LABEL_73;
              v54 = *(_BYTE *)((unsigned int)(v50 + *(_DWORD *)&v24[2 * v47 + 2]) + v49);
              do
              {
                if ( v54 == *((_BYTE *)v24 + v53 + 280) )
                  v48 = 1;
                ++v53;
              }
              while ( v53 < (unsigned int)v52 );
              if ( !v48 )
              {
LABEL_73:
                *((_BYTE *)v24 + v52 + 280) = v51;
                ++*((_DWORD *)v24 + 65);
              }
            }
            v41 = (unsigned __int16)*v24;
            ++v47;
          }
          while ( v47 < v41 );
          v23 = Sizea;
        }
        v55 = *((_DWORD *)v24 + 65);
        LOWORD(v56) = 0;
        if ( v55 )
        {
          if ( v44 )
          {
            v57 = 0;
            v58 = (v44 + v55 - 1) / v55;
            v59 = 0;
            if ( (_WORD)v41 )
            {
              do
              {
                v60 = *(_QWORD *)(v4 + 4760);
                v61 = ((unsigned __int16)v24[136] << 6) + *(_DWORD *)&v24[2 * v59 + 2];
                if ( *(_BYTE *)(v61 + v60) == 0xFF )
                {
                  ++v57;
                  *(_BYTE *)(v61 + v60) = *((_BYTE *)v24 + (unsigned __int16)v56 + 280);
                  if ( v57 == v58 )
                  {
                    v57 = 0;
                    v56 = ((unsigned int)(unsigned __int16)v56 + 1) % *((_DWORD *)v24 + 65);
                  }
                }
                ++v59;
              }
              while ( v59 < (unsigned __int16)*v24 );
              v40 = (struct _GROUP_AFFINITY *)(v24 + 132);
            }
          }
        }
      }
      ++v39;
    }
    while ( v39 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v29 = (char *)P;
  }
  ExFreePoolWithTag(v24, 0x72446152u);
  v62 = 0;
  Sizeb = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v63 = v97;
    do
    {
      v64 = &v29[v62 * v63];
      if ( *((_WORD *)v64 + 1) )
      {
        v65 = *((unsigned __int16 *)v64 + 1);
        v66 = (v65 + KeQueryActiveProcessorCountEx(v62) - 1) / v65;
        if ( v66 != 1 )
        {
          LOWORD(v67) = 0;
          v68 = v62 << 6;
          v69 = 0;
          for ( i = 0; i < 0x40; ++i )
          {
            v71 = *(_QWORD *)(v4 + 4760);
            if ( *(_BYTE *)(v68 + i + v71) == 0xFF )
            {
              ++v69;
              *(_BYTE *)(v68 + i + v71) = v64[(unsigned __int16)v67 + 4];
              if ( v69 == v66 - 1 )
              {
                v69 = 0;
                v67 = ((unsigned int)(unsigned __int16)v67 + 1) % *((unsigned __int16 *)v64 + 1);
              }
            }
          }
          v63 = v97;
        }
      }
      else
      {
        LOWORD(v72) = 0;
        v73 = KeQueryActiveProcessorCountEx(v62);
        v74 = 0;
        v75 = 0;
        v76 = (char *)P;
        v77 = (v87 + v73 - 1) / v87;
        v88 = v77;
        v78 = (char *)P;
        v79 = v62 << 6;
        for ( j = 0; j < 0x40; ++j )
        {
          v81 = *(_QWORD *)(v4 + 4760);
          if ( *(_BYTE *)(v79 + j + v81) == 0xFF )
          {
            if ( !*((_WORD *)v78 + 1) )
            {
              v82 = (unsigned __int16)v72;
              do
              {
                v83 = (v82 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4742);
                v82 = (unsigned __int16)v83;
                LOWORD(v72) = v83;
                v78 = (char *)P + v97 * (unsigned __int16)v83;
              }
              while ( !*((_WORD *)v78 + 1) );
              v4 = a1;
              v76 = (char *)P;
              v63 = v97;
              v77 = v88;
            }
            ++v75;
            *(_BYTE *)(v79 + j + v81) = v78[v74 + 4];
            if ( v75 == v77 )
            {
              ++v74;
              v75 = 0;
              if ( v74 == *((_WORD *)v78 + 1) )
              {
                v72 = ((unsigned int)(unsigned __int16)v72 + 1) % *(unsigned __int16 *)(v4 + 4742);
                v78 = &v76[v63 * v72];
                v74 = 0;
              }
            }
          }
        }
        v62 = Sizeb;
        v29 = (char *)P;
      }
      Sizeb = ++v62;
    }
    while ( v62 < *(_WORD *)(v4 + 4742) );
    v5 = v85;
  }
  ExFreePoolWithTag(v29, 0x72446152u);
  *(_WORD *)(v4 + 4740) = v95 | *(_WORD *)(v4 + 4740) & 0xFC03 | 2;
  return v5;
}
