/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140479260
 * Callers:
 *     <none>
 * Callees:
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspSendReliableJobNotification @ 0x14044A380 (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspGetEffectiveNoWakeCharge @ 0x14047969C (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x14047979C (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404797EC (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140479848 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspRateControlLimitFlag @ 0x140479E44 (PspRateControlLimitFlag.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406E19D4 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // rcx
  char *v14; // r9
  char *v15; // r10
  _DWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  char *v22; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  char *v28; // r8
  __int64 v29; // rcx
  char *v30; // r9
  _DWORD *v31; // rdx
  _DWORD *v32; // rdx
  int v33; // ecx
  __int64 v34; // r10
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // rcx
  int v37; // [rsp+24h] [rbp-DCh]
  unsigned __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h]
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v42[5]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  _OWORD v45[4]; // [rsp+D0h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v5 = *((_QWORD *)Object + 123);
  if ( v5 )
  {
    v24 = *(_OWORD *)(v5 + 24);
    v45[0] = *(_OWORD *)(v5 + 8);
    v25 = *(_OWORD *)(v5 + 40);
    v45[1] = v24;
    v26 = *(_OWORD *)(v5 + 56);
    v45[2] = v25;
    v45[3] = v26;
  }
  else
  {
    memset(v45, 0, sizeof(v45));
  }
  v6 = *((_QWORD *)Object + 64);
  v7 = *((_QWORD *)Object + 65);
  v39 = *((_QWORD *)Object + 20);
  v40 = *((_QWORD *)Object + 23);
  v8 = *((_DWORD *)Object + 113);
  v43 = *((_OWORD *)Object + 70);
  v37 = v8;
  v9 = *((_DWORD *)Object + 64);
  v44 = *((_OWORD *)Object + 74);
  if ( (v9 & 4) != 0 )
    v38 = *((_QWORD *)Object + 29);
  else
    v38 = 0LL;
  PspGetEffectiveNoWakeCharge(Object, v42, &v41);
  PspUnlockJob(v10, CurrentThread);
  if ( *(_QWORD *)&v45[0] )
  {
    v35 = v6 + v44;
    v11 = 0;
    if ( v35 > *(_QWORD *)&v45[0] )
      v11 = 0x10000;
  }
  else
  {
    v11 = 0;
  }
  if ( *((_QWORD *)&v45[0] + 1) && (unsigned __int64)(v7 + *((_QWORD *)&v44 + 1)) > *((_QWORD *)&v45[0] + 1) )
    v11 |= 0x20000u;
  if ( *(_QWORD *)&v45[1] && (unsigned __int64)(*((_QWORD *)&v43 + 1) + v39) > *(_QWORD *)&v45[1] )
    v11 |= 4u;
  if ( *(_QWORD *)&v45[2] || (v12 = *((_QWORD *)&v45[1] + 1)) != 0 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 1032), 0LL);
    v11 |= PspGetJobMemoryUsageNotificationViolations(
             Object,
             *((_QWORD *)Object + 122),
             *((_QWORD *)Object + 122) + *((_QWORD *)Object + 165),
             33280LL);
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
    v12 = *((_QWORD *)&v45[1] + 1);
  }
  v13 = 0LL;
  v14 = (char *)&v45[2] - a2 + 8;
  v15 = (char *)v45 - a2 + 8;
  v16 = (_DWORD *)(a2 + 44);
  do
  {
    v17 = *(unsigned int *)((char *)v16 + (_QWORD)v14 - 44);
    if ( (_DWORD)v17 && *(v16 - 3) == *(_DWORD *)((char *)v16 + (_QWORD)v15) && *v16 >= (unsigned int)v17 )
      v11 |= PspRateControlLimitFlag(v13, v16, v17, v14);
    v13 = (unsigned int)(v13 + 1);
    ++v16;
  }
  while ( (int)v13 < 3 );
  if ( v11 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    v27 = *((_QWORD *)Object + 123);
    if ( v27 )
    {
      *(_DWORD *)(v27 + 4) |= v11;
      v28 = (char *)(*((_QWORD *)Object + 123) + 72LL);
      if ( (v11 & 0x10000) != 0 )
        *(_QWORD *)v28 = *(_QWORD *)&v45[0];
      if ( (v11 & 0x20000) != 0 )
        *((_QWORD *)v28 + 1) = *((_QWORD *)&v45[0] + 1);
      if ( (v11 & 4) != 0 )
        *((_QWORD *)v28 + 2) = *(_QWORD *)&v45[1];
      if ( (v11 & 0x200) != 0 )
        *((_QWORD *)v28 + 4) = *(_QWORD *)&v45[2];
      if ( (v11 & 0x8000) != 0 )
        *((_QWORD *)v28 + 3) = v12;
      v29 = 0LL;
      v30 = (char *)((char *)v45 - v28);
      v31 = v28 + 52;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v29, v31, v28, v30) & v11) != 0 )
        {
          *(v32 - 3) = *(_DWORD *)((char *)v32 + v34 - 52);
          *v32 = *(_DWORD *)((char *)v32 + (_QWORD)v30);
        }
        v29 = (unsigned int)(v33 + 1);
        v31 = v32 + 1;
      }
      while ( (int)v29 < 3 );
    }
    if ( *((_QWORD *)Object + 57) && (*((_DWORD *)Object + 219) & 0x800) != 0 && (*((_DWORD *)Object + 326) & 4) == 0 )
      PspSendReliableJobNotification(Object, 0xBu);
    PspUnlockJob(Object, CurrentThread);
  }
  v18 = *(_QWORD *)(a2 + 16);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 768) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v18 + 768), 0xFFFFFFDF);
      v36 = *(_QWORD *)(a2 + 16);
      v42[1] = *(_QWORD *)(a2 + 8);
      v42[2] = 2LL;
      v42[3] = *(_QWORD *)(v36 + 736);
      PspRemoveProcessFromJobChain(v36);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v38 && v40 + *((_QWORD *)&v43 + 1) > v38 )
  {
    if ( v37 )
    {
      if ( v37 != 1 )
        goto LABEL_19;
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      if ( !*((_QWORD *)Object + 57) || (*((_DWORD *)Object + 219) & 2) == 0 )
      {
        PspUnlockJob(Object, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Object);
        goto LABEL_19;
      }
      if ( (int)PspSendJobNotification((__int64)Object, 1LL, 0, 0) >= 0 )
      {
        *((_DWORD *)Object + 64) &= ~4u;
        *((_QWORD *)Object + 29) = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Object) )
        goto LABEL_19;
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
      if ( !*((_DWORD *)Object + 54) && *((_QWORD *)Object + 57) && (*((_DWORD *)Object + 219) & 2) != 0 )
        PspSendJobNotification((__int64)Object, 1LL, 0, 0);
    }
    PspUnlockJob(Object, CurrentThread);
  }
LABEL_19:
  v19 = *(_QWORD *)(a2 + 24) + v41;
  v20 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v19;
  if ( v20 )
  {
    if ( v19 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v42[0] >= (unsigned __int64)(unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Object);
    }
  }
  v21 = *((_QWORD *)Object + 134);
  if ( v21 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 56), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    PspAddAccountingValues(*((_QWORD *)Object + 134) + 1120LL, Object + 1120);
    memset(Object + 1120, 0, 0x58uLL);
    PspUnlockJob(Object, CurrentThread);
    v22 = (char *)*((_QWORD *)Object + 134);
  }
  else
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    memset(Object + 1120, 0, 0x58uLL);
    v22 = Object;
  }
  PspUnlockJob(v22, CurrentThread);
  return 0LL;
}
