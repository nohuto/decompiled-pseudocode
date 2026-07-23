/*
 * XREFs of KiInterruptDispatchCommon @ 0x14020AE24
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401FE9E0 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x140206DF0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400FDF40 (KeGetCurrentProcessorNumberEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IoProcessPassiveInterrupts @ 0x1401FE738 (IoProcessPassiveInterrupts.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140206E6C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessDisconnectList @ 0x14020B3E8 (KiProcessDisconnectList.c)
 *     KiProcessPendingDisconnect @ 0x14020B440 (KiProcessPendingDisconnect.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, char *a4, unsigned int *a5)
{
  _PROCESSOR_NUMBER *v5; // rdi
  unsigned int v6; // r15d
  unsigned int v8; // r12d
  char *v9; // rbx
  char v10; // r13
  unsigned __int8 v11; // si
  __int64 v12; // rbx
  __int64 v13; // rdx
  _PROCESSOR_NUMBER *v14; // rbx
  __int64 v15; // rbx
  char v16; // r15
  KSPIN_LOCK *v17; // r14
  unsigned int v18; // eax
  unsigned __int8 v19; // cl
  char *v20; // r8
  __int64 v21; // r14
  unsigned __int8 v23; // [rsp+20h] [rbp-51h] BYREF
  char v24; // [rsp+21h] [rbp-50h]
  unsigned int v25; // [rsp+24h] [rbp-4Dh]
  int v26; // [rsp+28h] [rbp-49h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+2Ch] [rbp-45h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-41h]
  _PROCESSOR_NUMBER v29; // [rsp+34h] [rbp-3Dh]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-39h]
  char *v31; // [rsp+40h] [rbp-31h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-29h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-21h] BYREF
  unsigned int *v34; // [rsp+60h] [rbp-11h]
  char v35; // [rsp+68h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+7h] BYREF

  v5 = 0LL;
  v25 = a1;
  v6 = a1;
  v28 = a2;
  v34 = a5;
  v8 = 0;
  v26 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = &v35;
  v24 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v10 = 0;
  if ( a4 )
    v9 = a4;
  v29 = 0;
  v31 = v9;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  if ( a1 )
  {
    v12 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(KiGlobalSecondaryIDT + 48 * v12);
    KiAcquireSecondaryInterruptConnectLock(SpinLock, &v23);
    if ( (unsigned int)v12 < 0x100 )
    {
      _mm_lfence();
      v5 = *(_PROCESSOR_NUMBER **)(KiGlobalSecondaryIDT + 48 * v12 + 40);
    }
    v9 = v31;
    v6 = v25;
  }
  else
  {
    SpinLock = 0LL;
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    *(_QWORD *)&Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v11 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    v23 = v11;
    if ( v28 > 0xFF )
      goto LABEL_10;
    _mm_lfence();
    v5 = (_PROCESSOR_NUMBER *)KeGetCurrentPrcb()->InterruptObject[v28];
  }
  v11 = v23;
LABEL_10:
  if ( v5 )
  {
    v13 = 1LL;
    v14 = v5;
    ++*(_WORD *)&v5[25].Number;
    if ( (a3 & 1) != 0 )
    {
      while ( HIBYTE(v14[23].Group) )
      {
        v15 = *(_QWORD *)&v14[2].Group;
        if ( !v15 )
        {
          v14 = 0LL;
          break;
        }
        v14 = (_PROCESSOR_NUMBER *)(v15 - 8);
        if ( v14 == v5 )
        {
          if ( HIBYTE(v14[23].Group) )
            v14 = 0LL;
          break;
        }
      }
    }
    if ( v14 )
    {
      ProcNumber = v5[27];
LABEL_21:
      v16 = 0;
      while ( (unsigned __int8)CurrentIrql <= 2u || HIBYTE(v14[23].Group) )
      {
        if ( (*(_DWORD *)&v14[26] & 1) != 0 )
        {
          v21 = *(_QWORD *)&v14[2].Group;
        }
        else
        {
          ++*(_WORD *)&v14[25].Number;
          ++v8;
          v17 = SpinLock;
          if ( v25 )
            KxReleaseSpinLock(SpinLock);
          __writecr8(v11);
          LOBYTE(v13) = v11;
          v10 = KiInvokeInterruptServiceRoutine(v14, v13, v28);
          v26 = 2;
          v18 = v25;
          if ( v25 )
          {
            KiAcquireSecondaryInterruptConnectLock(v17, &v23);
            v18 = v25;
            v11 = v23;
          }
          else
          {
            v19 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            v11 = v19;
            v23 = v19;
          }
          v20 = v31;
          --*(_WORD *)&v14[25].Number;
          v21 = *(_QWORD *)&v14[2].Group;
          KiProcessPendingDisconnect(v18, v14, v20);
          v13 = 1LL;
        }
        v14 = (_PROCESSOR_NUMBER *)(v21 - 8);
        if ( ProcNumber )
        {
          if ( v10 )
            v16 = 1;
          if ( v14 == v5 )
          {
            if ( v16 && v8 > 1 )
            {
              v8 = 0;
              v10 = 0;
              goto LABEL_21;
            }
            v10 = 1;
LABEL_46:
            v8 = v26;
            goto LABEL_47;
          }
        }
        else if ( v10 || v14 == v5 )
        {
          goto LABEL_46;
        }
      }
      v8 = v26;
      v24 = 1;
      if ( v26 != 2 )
        v8 = 1;
      v29 = v14[22];
LABEL_47:
      v6 = v25;
    }
    --*(_WORD *)&v5[25].Number;
    v9 = v31;
    KiProcessPendingDisconnect(v6, v5, v31);
  }
  if ( v6 )
  {
    KxReleaseSpinLock(SpinLock);
    __writecr8(v11);
  }
  else
  {
    __writecr8(v11);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v24 )
    IoProcessPassiveInterrupts();
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v9);
  if ( v34 )
    *v34 = v8;
  return v10;
}
