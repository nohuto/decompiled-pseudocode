/*
 * XREFs of PfpRpFileKeyUpdate @ 0x140456360
 * Callers:
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 * Callees:
 *     PfpRpIsRehashNeeded @ 0x140013040 (PfpRpIsRehashNeeded.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PfpRpRehashIfNeeded @ 0x1404561D0 (PfpRpRehashIfNeeded.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v4; // ebx
  int v5; // eax
  _QWORD *PoolWithTag; // r13
  PVOID v9; // r12
  _QWORD *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  WCHAR *i; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  int v17; // r9d
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // r9d
  _QWORD *v22; // rcx
  int v24; // r9d
  __int64 v25; // r11
  __int64 v26; // r10
  _QWORD *j; // rdx
  _QWORD *v28; // rcx
  void *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-68h]
  PVOID P; // [rsp+28h] [rbp-60h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp-58h]
  WCHAR v33; // [rsp+90h] [rbp+8h]
  unsigned int v34; // [rsp+98h] [rbp+10h] BYREF
  int v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v35 = a3;
  v3 = 0;
  v36 = *(_QWORD *)(a2 + 16);
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  v34 = 0;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !v4 )
  {
    v13 = 0LL;
    goto LABEL_10;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( PoolWithTag )
  {
    if ( (unsigned int)PfpRpIsRehashNeeded((_DWORD *)a1, (int *)&v34) )
    {
      P = ExAllocatePoolWithTag(PagedPool, 8LL * v34, 0x48466650u);
      v9 = P;
      if ( !P )
        v34 = 0;
    }
    v11 = *(WCHAR **)(a2 + 24);
    v12 = *(unsigned __int16 *)(a2 + 34);
    v13 = 314159LL;
    for ( i = &v11[v12]; v11 < i; v13 = HIBYTE(v33) + 37 * ((unsigned __int8)v33 + 37 * v13) )
      v33 = RtlUpcaseUnicodeChar(*v11++);
    if ( v13 )
    {
      v4 = v35;
LABEL_10:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
      v16 = v36;
      if ( v4 )
      {
        v17 = *(_DWORD *)(a1 + 4) >> 5;
        v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        v19 = v36 & v18;
        v36 &= v18;
        if ( v17 )
        {
          v20 = *(_QWORD *)(a1 + 8)
              + 8LL
              * ((37
                * (BYTE6(v36)
                 + 37
                 * (BYTE5(v36)
                  + 37
                  * (BYTE4(v36)
                   + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                + HIBYTE(v36)) & (unsigned int)(v17 - 1));
          while ( 1 )
          {
            v20 = *(_QWORD *)v20;
            if ( (v20 & 1) != 0 )
              break;
            if ( v19 == (v18 & *(_QWORD *)(v20 + 8)) )
            {
              *(_QWORD *)(v20 + 16) = v13;
              goto LABEL_18;
            }
          }
        }
        *PoolWithTag = 0LL;
        PoolWithTag[1] = v16;
        PoolWithTag[2] = v13;
        if ( (unsigned int)PfpRpRehashIfNeeded((_DWORD *)a1, &P) )
        {
          v21 = *(_DWORD *)(a1 + 4);
          v30 = PoolWithTag[1] & (-1LL << (v21 & 0x1F));
          v22 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v30)
                            + 37
                            * (BYTE5(v30)
                             + 37
                             * (BYTE4(v30)
                              + 37
                              * (BYTE3(v30)
                               + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                           + HIBYTE(v30)) & ((v21 >> 5) - 1)));
          *PoolWithTag = *v22;
          *v22 = PoolWithTag;
          PoolWithTag = 0LL;
          ++*(_DWORD *)a1;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else
      {
LABEL_27:
        if ( *(_DWORD *)a1 )
        {
          v24 = *(_DWORD *)(a1 + 4) >> 5;
          v25 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
          v26 = v16 & v25;
          v36 = v26;
          for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                             + 8LL
                             * ((37
                               * (BYTE6(v26)
                                + 37
                                * (BYTE5(v26)
                                 + 37
                                 * (BYTE4(v26)
                                  + 37
                                  * (BYTE3(v26)
                                   + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                               + HIBYTE(v26)) & (unsigned int)(v24 - 1))); ; j = (_QWORD *)*j )
          {
            v28 = (_QWORD *)*j;
            if ( (*j & 1) != 0 )
              break;
            if ( (v25 & v28[1]) == v26 )
            {
              *j = *v28;
              --*(_DWORD *)a1;
              *v28 |= 0x8000000000000002uLL;
              if ( *(_QWORD **)(a1 + 16) == v28 )
                *(_QWORD *)(a1 + 16) = a1 + 24;
              *v28 = v10;
              v10 = v28;
              goto LABEL_27;
            }
          }
        }
      }
LABEL_18:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
      KeAbPostRelease(a1 + 48);
      KeLeaveCriticalRegion();
      v9 = P;
      goto LABEL_21;
    }
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_21:
  ExReleaseRundownProtection_0(RunRef);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  while ( v10 )
  {
    v29 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v29, 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v3;
}
