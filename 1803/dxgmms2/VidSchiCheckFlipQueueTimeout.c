/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C000B270
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  KSPIN_LOCK *v3; // rdi
  _QWORD *v4; // rsi
  char v6; // bl
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // ebx
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  bool v27; // cc
  __int64 v28; // rcx
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp+8h]
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v3 = (KSPIN_LOCK *)(a1 + 1904);
  v4 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
  {
    v9 = a1 + 3032;
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2312LL) )
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
    v12 = *(_QWORD *)(a1 + 8 * v11 + 3032);
    v13 = 0;
    KeAcquireInStackQueuedSpinLock(v3, &v29);
    v14 = 0LL;
    if ( *(_DWORD *)(a1 + 132) )
      break;
LABEL_13:
    KeReleaseInStackQueuedSpinLock(&v29);
    if ( v13 )
      goto LABEL_41;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 40) )
      return 0LL;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(v12 + 8 * v14 + 24);
    if ( !v15 )
      goto LABEL_11;
    if ( *(int *)(v12 + 4) < 4 && !*(_BYTE *)(a1 + 136) )
      goto LABEL_11;
    if ( (*(_DWORD *)v15 & 1) != 0 )
      break;
    v17 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v15 + 8) = MEMORY[0xFFFFF78000000320];
    if ( *(_DWORD *)(v12 + 2300) )
    {
      v18 = v15 + 1280LL * *(unsigned int *)(v15 + 44) + 56;
      v34 = v18;
      v19 = *(_DWORD *)(v18 + 1052);
      if ( v19 == 5 || v19 == 15 )
      {
        v21 = v17 - *(_QWORD *)(v18 + 1088);
        v22 = 10000000LL * g_TdrConfig[1];
        if ( v21 * (unsigned __int64)KeQueryTimeIncrement() > v22 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 300LL) & 0x200) == 0 )
            goto LABEL_36;
          v23 = __rdtsc();
          v24 = __readmsr(0x400000F6u);
          v25 = *((unsigned int *)KeGetCurrentPrcb() + 17);
          v31 = 10 * (v23 - v24) / v25;
          v26 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v25, 10 * (v23 - v24) % v25);
          v26[5] = v31;
          v26[3] = v24;
          v26[4] = v23;
          WdLogEvent5_WdPresentTokenEvent(v26);
          v27 = v24 <= v23;
          v4 = a2;
          if ( v27 && v31 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
          {
LABEL_36:
            *(_DWORD *)v15 |= 1u;
            *(_QWORD *)(v15 + 16) = v21;
            v28 = *(_QWORD *)(v34 + 1088);
            *(_QWORD *)(v15 + 24) = v28;
            if ( v4 )
              *v4 = v28;
          }
        }
      }
    }
    v13 = *(_DWORD *)v15 & 1;
    if ( v13 )
    {
LABEL_12:
      v3 = (KSPIN_LOCK *)(a1 + 1904);
      goto LABEL_13;
    }
LABEL_11:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 132) )
      goto LABEL_12;
  }
  if ( v4 )
    *v4 = *(_QWORD *)(v15 + 24);
  KeReleaseInStackQueuedSpinLock(&v29);
LABEL_41:
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
