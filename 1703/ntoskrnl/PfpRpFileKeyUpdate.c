/*
 * XREFs of PfpRpFileKeyUpdate @ 0x140502050
 * Callers:
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 * Callees:
 *     PfpRpIsRehashNeeded @ 0x1400233F0 (PfpRpIsRehashNeeded.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfpRpRehashIfNeeded @ 0x14043F7C0 (PfpRpRehashIfNeeded.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v5; // eax
  PVOID v8; // r12
  _QWORD *v9; // rdi
  WCHAR *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  WCHAR *j; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v15; // zf
  __int64 v16; // r13
  unsigned int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rsi
  unsigned int v22; // r9d
  _QWORD *v23; // rcx
  int v25; // r9d
  __int64 v26; // r11
  __int64 v27; // r10
  _QWORD *i; // rdx
  _QWORD *v29; // rcx
  void *v30; // rcx
  _QWORD *P; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  PVOID PoolWithTag; // [rsp+30h] [rbp-48h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+38h] [rbp-40h]
  WCHAR v35; // [rsp+80h] [rbp+8h]
  unsigned int v36; // [rsp+88h] [rbp+10h] BYREF
  __int64 v37; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v37 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v36 = 0;
  v9 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !a3 )
  {
    v12 = 0LL;
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
    v15 = a3 == 0;
    v16 = v37;
    if ( v15 )
    {
LABEL_27:
      if ( *(_DWORD *)a1 )
      {
        v25 = *(_DWORD *)(a1 + 4) >> 5;
        v26 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
        v27 = v16 & v26;
        v37 = v27;
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           * ((37
                             * (BYTE6(v27)
                              + 37
                              * (BYTE5(v27)
                               + 37
                               * (BYTE4(v27)
                                + 37
                                * (BYTE3(v27)
                                 + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                             + HIBYTE(v27)) & (unsigned int)(v25 - 1))); ; i = (_QWORD *)*i )
        {
          v29 = (_QWORD *)*i;
          if ( (*i & 1) != 0 )
            break;
          if ( (v26 & v29[1]) == v27 )
          {
            *i = *v29;
            --*(_DWORD *)a1;
            *v29 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v29 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v29 = v9;
            v9 = v29;
            goto LABEL_27;
          }
        }
      }
LABEL_15:
      v21 = P;
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 4);
      v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      v19 = v37 & v18;
      v37 &= v18;
      if ( v17 >= 0x20 )
      {
        v20 = *(_QWORD *)(a1 + 8)
            + 8LL
            * ((37
              * (BYTE6(v37)
               + 37
               * (BYTE5(v37)
                + 37
                * (BYTE4(v37)
                 + 37 * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v19 + 11623883)))))))
              + HIBYTE(v37)) & ((v17 >> 5) - 1));
        while ( 1 )
        {
          v20 = *(_QWORD *)v20;
          if ( (v20 & 1) != 0 )
            break;
          if ( v19 == (v18 & *(_QWORD *)(v20 + 8)) )
          {
            *(_QWORD *)(v20 + 16) = v12;
            goto LABEL_15;
          }
        }
      }
      *P = 0LL;
      P[1] = v16;
      P[2] = v12;
      if ( (unsigned int)PfpRpRehashIfNeeded((_DWORD *)a1, &PoolWithTag) )
      {
        v22 = *(_DWORD *)(a1 + 4);
        v21 = 0LL;
        v32 = P[1] & (-1LL << (v22 & 0x1F));
        v23 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v32)
                          + 37
                          * (BYTE5(v32)
                           + 37
                           * (BYTE4(v32)
                            + 37
                            * (BYTE3(v32)
                             + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                         + HIBYTE(v32)) & ((v22 >> 5) - 1)));
        *P = *v23;
        *v23 = P;
        ++*(_DWORD *)a1;
      }
      else
      {
        v3 = -1073741670;
        v21 = P;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    KeLeaveCriticalRegion();
    v8 = PoolWithTag;
    goto LABEL_21;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( P )
  {
    if ( (unsigned int)PfpRpIsRehashNeeded((_DWORD *)a1, &v36) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v36, 0x48466650u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        v36 = 0;
    }
    v10 = *(WCHAR **)(a2 + 24);
    v11 = *(unsigned __int16 *)(a2 + 34);
    v12 = 314159LL;
    for ( j = &v10[v11]; v10 < j; v12 = HIBYTE(v35) + 37 * ((unsigned __int8)v35 + 37 * v12) )
      v35 = RtlUpcaseUnicodeChar(*v10++);
    if ( v12 )
      goto LABEL_9;
    v21 = P;
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
    v21 = 0LL;
  }
LABEL_21:
  ExReleaseRundownProtection(RunRef);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  while ( v9 )
  {
    v30 = v9;
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v30, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v3;
}
