/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140536C40
 * Callers:
 *     <none>
 * Callees:
 *     PspSendJobNotification @ 0x14008522C (PspSendJobNotification.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspSendReliableJobNotification @ 0x14052DF4C (PspSendReliableJobNotification.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 *     PspGetEffectiveNoWakeCharge @ 0x140537398 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x1405374AC (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405374FC (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140537558 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405375A8 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1405376F4 (PspRateControlLimitFlag.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14077BDA4 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(_QWORD *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rcx
  char *v17; // r9
  char *v18; // r10
  unsigned int *v19; // rdx
  unsigned int v20; // r8d
  volatile signed __int32 *v21; // rcx
  unsigned __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  _QWORD *v31; // r8
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // r10
  struct _KPROCESS *v37; // rcx
  int v38; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v43[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+60h] [rbp-A0h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  _OWORD v46[4]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared(Object, CurrentThread);
  v5 = Object[123];
  if ( v5 )
  {
    v27 = *(_OWORD *)(v5 + 24);
    v46[0] = *(_OWORD *)(v5 + 8);
    v28 = *(_OWORD *)(v5 + 40);
    v46[1] = v27;
    v29 = *(_OWORD *)(v5 + 56);
    v46[2] = v28;
    v46[3] = v29;
  }
  else
  {
    memset(v46, 0, sizeof(v46));
  }
  v6 = Object[64];
  v7 = Object[65];
  v8 = Object[20];
  v40 = Object[23];
  v9 = *((_DWORD *)Object + 113);
  v44 = *((_OWORD *)Object + 70);
  v38 = v9;
  v10 = *((_DWORD *)Object + 64);
  v45 = *((_OWORD *)Object + 74);
  if ( (v10 & 4) != 0 )
    v39 = Object[29];
  else
    v39 = 0LL;
  PspGetEffectiveNoWakeCharge(Object, &v42, &v41);
  PspUnlockJob(v11, CurrentThread);
  v12 = 0;
  if ( *(_QWORD *)&v46[0] && (unsigned __int64)(v6 + v45) > *(_QWORD *)&v46[0] )
    v12 = 0x10000;
  if ( *((_QWORD *)&v46[0] + 1) && (unsigned __int64)(v7 + *((_QWORD *)&v45 + 1)) > *((_QWORD *)&v46[0] + 1) )
    v12 |= 0x20000u;
  v13 = *(_QWORD *)&v46[1];
  if ( *(_QWORD *)&v46[1] && (unsigned __int64)(v8 + *((_QWORD *)&v44 + 1)) > *(_QWORD *)&v46[1] )
    v12 |= 4u;
  v14 = *(_QWORD *)&v46[2];
  if ( *(_QWORD *)&v46[2] || (v15 = *((_QWORD *)&v46[1] + 1)) != 0 )
  {
    PspLockJobMemoryLimitsShared(Object, CurrentThread);
    v12 |= PspGetJobMemoryUsageNotificationViolations(Object, Object[122], Object[122] + Object[165], 33280LL);
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
    v14 = *(_QWORD *)&v46[2];
    v15 = *((_QWORD *)&v46[1] + 1);
    v13 = *(_QWORD *)&v46[1];
  }
  v16 = 0LL;
  v17 = (char *)&v46[2] - a2 + 8;
  v18 = (char *)v46 - a2 + 8;
  v19 = (unsigned int *)(a2 + 44);
  do
  {
    v20 = *(unsigned int *)((char *)v19 + (_QWORD)v17 - 44);
    if ( v20 && *(v19 - 3) == *(unsigned int *)((char *)v19 + (_QWORD)v18) && *v19 >= v20 )
      v12 |= PspRateControlLimitFlag(v16);
    v16 = (unsigned int)(v16 + 1);
    ++v19;
  }
  while ( (int)v16 < 3 );
  if ( v12 )
  {
    PspLockJobExclusive(Object, CurrentThread);
    v30 = Object[123];
    if ( v30 )
    {
      *(_DWORD *)(v30 + 4) |= v12;
      v31 = (_QWORD *)(Object[123] + 72LL);
      if ( (v12 & 0x10000) != 0 )
        *v31 = *(_QWORD *)&v46[0];
      if ( (v12 & 0x20000) != 0 )
        v31[1] = *((_QWORD *)&v46[0] + 1);
      if ( (v12 & 4) != 0 )
        v31[2] = v13;
      if ( (v12 & 0x200) != 0 )
        v31[4] = v14;
      if ( (v12 & 0x8000) != 0 )
        v31[3] = v15;
      v32 = 0LL;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v32) & v12) != 0 )
        {
          *(v33 - 3) = *(_DWORD *)((char *)v33 + v36 - 52);
          *v33 = *(_DWORD *)((char *)v33 + v35);
        }
        v32 = (unsigned int)(v34 + 1);
      }
      while ( (int)v32 < 3 );
    }
    if ( Object[57] && (*((_DWORD *)Object + 219) & 0x800) != 0 && (Object[163] & 4) == 0 )
      PspSendReliableJobNotification(Object, 0xBu);
    PspUnlockJob(Object, CurrentThread);
  }
  v21 = *(volatile signed __int32 **)(a2 + 16);
  if ( v21 )
  {
    if ( (v21[192] & 1) == 0 )
    {
      _InterlockedAnd(v21 + 192, 0xFFFFFFDF);
      v37 = *(struct _KPROCESS **)(a2 + 16);
      v43[0] = *(_QWORD *)(a2 + 8);
      v43[1] = 2LL;
      v43[2] = v37[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v37, v43, 0xEu, 0xC0000044);
      v21 = *(volatile signed __int32 **)(a2 + 16);
    }
    ObfDereferenceObject((PVOID)v21);
  }
  if ( v39 && v40 + *((_QWORD *)&v44 + 1) > v39 )
  {
    if ( v38 )
    {
      if ( v38 != 1 )
        goto LABEL_16;
      PspLockJobShared(Object, CurrentThread);
      if ( !Object[57] || (*((_DWORD *)Object + 219) & 2) == 0 )
      {
        PspUnlockJob(Object, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Object);
        goto LABEL_16;
      }
      if ( (int)PspSendJobNotification((__int64)Object, 1LL, 0, 0) >= 0 )
      {
        *((_DWORD *)Object + 64) &= ~4u;
        Object[29] = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Object) )
        goto LABEL_16;
      PspLockJobExclusive(Object, CurrentThread);
      if ( !*((_DWORD *)Object + 54) && Object[57] && (*((_DWORD *)Object + 219) & 2) != 0 )
        PspSendJobNotification((__int64)Object, 1LL, 0, 0);
    }
    PspUnlockJob(Object, CurrentThread);
  }
LABEL_16:
  v22 = *(_QWORD *)(a2 + 24) + v41;
  v23 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v22;
  if ( v23 )
  {
    if ( v22 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v42 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Object);
    }
  }
  v24 = Object[134];
  if ( v24 )
  {
    PspLockJobExclusive(v24, CurrentThread);
    PspLockJobExclusive(Object, CurrentThread);
    PspAddAccountingValues(Object[134] + 1120LL, Object + 140);
    memset(Object + 140, 0, 0x58uLL);
    PspUnlockJob(Object, CurrentThread);
    v25 = (_QWORD *)Object[134];
  }
  else
  {
    PspLockJobExclusive(Object, CurrentThread);
    memset(Object + 140, 0, 0x58uLL);
    v25 = Object;
  }
  PspUnlockJob(v25, CurrentThread);
  return 0LL;
}
