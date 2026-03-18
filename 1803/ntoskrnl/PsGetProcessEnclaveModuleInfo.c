/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x140285918
 * Callers:
 *     DbgkpPostModuleMessages @ 0x14070EEF8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetEnclaveModuleList @ 0x140264A80 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402858BC (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  int EnclaveModuleList; // r12d
  unsigned int v4; // esi
  char *PoolWithTag; // r13
  int v6; // edi
  unsigned int *v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // r15
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // r10
  _QWORD *v14; // r11
  _QWORD *v15; // rcx
  _QWORD *i; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rbp
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  unsigned int v22; // [rsp+60h] [rbp+8h]

  EnclaveModuleList = 0;
  v22 = 0;
  v4 = 0;
  PoolWithTag = 0LL;
  v6 = 0;
  v7 = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 1840);
  ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
  v13 = *(_QWORD *)(a1 + 1824);
  if ( v13 )
  {
    v14 = *(_QWORD **)(v13 + 8);
    v11 = (_QWORD *)0x8000000000000002LL;
    v12 = v14;
    while ( 1 )
    {
      if ( !v12 )
        goto LABEL_8;
      v15 = (_QWORD *)*v12;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v15 = (_QWORD *)*v12;
      if ( ((unsigned __int8)v15 & 1) != 0 )
      {
LABEL_8:
        for ( i = v14 + 1; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v13 + 4) >> 5) )
          {
            v15 = 0LL;
            goto LABEL_13;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v12 = (_QWORD *)*i;
        v14 = i;
        v15 = (_QWORD *)*i;
LABEL_13:
        v11 = (_QWORD *)0x8000000000000002LL;
      }
      else
      {
        v12 = v15;
      }
      if ( !v15 )
        break;
      ++v4;
    }
    if ( v4 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x56455350u);
      if ( PoolWithTag )
      {
        v17 = *(_QWORD *)(a1 + 1824);
        v18 = *(_QWORD **)(v17 + 8);
        v19 = v18;
        do
        {
          if ( !v19 )
            goto LABEL_26;
          v20 = (_QWORD *)*v19;
          if ( (*v19 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            v20 = (_QWORD *)*v19;
          if ( ((unsigned __int8)v20 & 1) != 0 )
          {
LABEL_26:
            v11 = v18 + 1;
            v12 = (_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v17 + 4) >> 5));
            while ( 1 )
            {
              if ( v11 >= v12 )
              {
                v20 = 0LL;
                goto LABEL_31;
              }
              if ( (*v11 & 1) == 0 )
                break;
              ++v11;
            }
            v19 = (_QWORD *)*v11;
            v18 = v11;
            v20 = (_QWORD *)*v11;
          }
          else
          {
            v19 = v20;
          }
LABEL_31:
          if ( !v20 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(v20[4], &PoolWithTag[16 * v22], &PoolWithTag[16 * v22 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v22;
        }
        while ( v22 < v4 );
        v6 = v22;
        v7 = a3;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10, (__int64)v11, (__int64)v12, 0LL);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(PoolWithTag, v6);
  }
  else
  {
    *a2 = PoolWithTag;
    *v7 = v4;
  }
  return (unsigned int)EnclaveModuleList;
}
