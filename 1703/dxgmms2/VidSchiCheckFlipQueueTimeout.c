/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C00096E0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  KSPIN_LOCK *v3; // rdi
  _QWORD *v4; // rsi
  char v6; // bl
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // ebx
  __int64 v14; // r12
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  bool v26; // cc
  __int64 v27; // rcx
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v3 = (KSPIN_LOCK *)(a1 + 1880);
  v4 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
  {
    v9 = a1 + 2992;
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2316LL) )
    {
      ++v8;
      v9 += 8LL;
      if ( v8 >= v7 )
        goto LABEL_6;
    }
    v6 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 40) )
    return 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 8 * v11 + 2992);
    v13 = 0;
    KeAcquireInStackQueuedSpinLock(v3, &v28);
    v14 = 0LL;
    if ( *(_DWORD *)(a1 + 128) )
      break;
LABEL_19:
    KeReleaseInStackQueuedSpinLock(&v28);
    if ( v13 )
      goto LABEL_36;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 40) )
      return 0LL;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v12 + 8 * v14 + 24);
    if ( !v15 )
      goto LABEL_17;
    v16 = *(_DWORD *)(v12 + 4);
    if ( v16 < 4 && (!*(_BYTE *)(a1 + 132) || v16 != 3) )
      goto LABEL_17;
    if ( (*(_DWORD *)v15 & 1) != 0 )
      break;
    v17 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v15 + 8) = MEMORY[0xFFFFF78000000320];
    if ( *(_DWORD *)(v12 + 2300) )
    {
      v18 = v15 + 1224LL * *(unsigned int *)(v15 + 44) + 56;
      v33 = v18;
      v19 = *(_DWORD *)(v18 + 1044);
      if ( v19 == 5 || v19 == 15 )
      {
        v20 = v17 - *(_QWORD *)(v18 + 1080);
        v21 = 10000000LL * g_TdrConfig[1];
        if ( v20 * (unsigned __int64)KeQueryTimeIncrement() > v21 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) == 0 )
            goto LABEL_41;
          v22 = __rdtsc();
          v23 = __readmsr(0x400000F6u);
          v24 = *((unsigned int *)KeGetCurrentPrcb() + 17);
          v30 = 10 * (v22 - v23) / v24;
          v25 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v24, 10 * (v22 - v23) % v24);
          v25[5] = v30;
          v25[3] = v23;
          v25[4] = v22;
          WdLogEvent5_WdPresentTokenEvent(v25);
          v26 = v23 <= v22;
          v4 = a2;
          if ( v26 && v30 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
          {
LABEL_41:
            *(_DWORD *)v15 |= 1u;
            *(_QWORD *)(v15 + 16) = v20;
            v27 = *(_QWORD *)(v33 + 1080);
            *(_QWORD *)(v15 + 24) = v27;
            if ( v4 )
              *v4 = v27;
          }
        }
      }
    }
    v13 = *(_DWORD *)v15 & 1;
    if ( v13 )
    {
LABEL_18:
      v3 = (KSPIN_LOCK *)(a1 + 1880);
      goto LABEL_19;
    }
LABEL_17:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 128) )
      goto LABEL_18;
  }
  if ( v4 )
    *v4 = *(_QWORD *)(v15 + 24);
  KeReleaseInStackQueuedSpinLock(&v28);
LABEL_36:
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
