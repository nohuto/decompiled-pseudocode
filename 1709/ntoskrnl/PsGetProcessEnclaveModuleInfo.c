/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x14024FE58
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1406AA788 (DbgkpPostModuleMessages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmGetEnclaveModuleList @ 0x140229BA0 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x14024FDFC (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  __int64 v11; // r10
  _DWORD *v12; // r11
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  _DWORD *i; // rdx
  __int64 v16; // r14
  _DWORD *v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _DWORD *j; // rdx
  unsigned int v23; // [rsp+60h] [rbp+8h]

  EnclaveModuleList = 0;
  v23 = 0;
  v4 = 0;
  PoolWithTag = 0LL;
  v6 = 0;
  v7 = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 1840);
  ExAcquirePushLockExclusiveEx(a1 + 1840, 0LL);
  v11 = *(_QWORD *)(a1 + 1824);
  if ( v11 )
  {
    v12 = *(_DWORD **)(v11 + 8);
    v13 = v12;
    while ( 1 )
    {
      if ( !v13 || (v14 = (_QWORD *)*v13, (*v13 & 1) != 0) )
      {
        for ( i = v12 + 2; ; i += 2 )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 4) >> 5) )
          {
            v14 = 0LL;
            goto LABEL_11;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v13 = *(_QWORD **)i;
        v12 = i;
        v14 = *(_QWORD **)i;
      }
      else
      {
        v13 = (_QWORD *)*v13;
      }
LABEL_11:
      if ( !v14 )
        break;
      ++v4;
    }
    if ( v4 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x56455350u);
      if ( PoolWithTag )
      {
        v16 = *(_QWORD *)(a1 + 1824);
        v17 = *(_DWORD **)(v16 + 8);
        v18 = v17;
        do
        {
          if ( !v18 || (v19 = (_QWORD *)*v18, (*v18 & 1) != 0) )
          {
            for ( j = v17 + 2; ; j += 2 )
            {
              if ( (unsigned __int64)j >= *(_QWORD *)(v16 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v16 + 4) >> 5) )
              {
                v20 = 0LL;
                goto LABEL_26;
              }
              if ( (*j & 1) == 0 )
                break;
            }
            v18 = *(_QWORD **)j;
            v17 = j;
            v20 = *(_QWORD **)j;
          }
          else
          {
            v18 = (_QWORD *)*v18;
            v20 = v19;
          }
LABEL_26:
          if ( !v20 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(
                                v20[4],
                                &PoolWithTag[16 * v23],
                                (unsigned int *)&PoolWithTag[16 * v23 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v23;
        }
        while ( v23 < v4 );
        v6 = v23;
        v7 = a3;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
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
