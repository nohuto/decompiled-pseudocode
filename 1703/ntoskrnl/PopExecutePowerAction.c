/*
 * XREFs of PopExecutePowerAction @ 0x140577024
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     PopCriticalShutdown @ 0x1406C9FF0 (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x1406CB4E0 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1406D4A60 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140138370 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x140232170 (PopDiagTraceShutdownAction.c)
 *     PopCompleteAction @ 0x140576FF4 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x140577374 (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1405773C4 (PopCompareActions.c)
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x140586418 (PopResetActionDefaults.c)
 */

int __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v6; // esi
  int v8; // eax
  unsigned int v10; // edi
  unsigned int v11; // r14d
  int v12; // eax
  char v13; // r12
  int v14; // r11d
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  int v18; // r8d
  char v19; // dl
  int v20; // r11d
  char v21; // dl
  int v22; // r9d
  int v23; // r8d
  int v24; // r9d
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // edx
  int v31; // r8d
  unsigned int v32; // r11d
  unsigned int v33; // r11d
  char v34; // r8
  char v35; // r8
  int v36; // eax
  bool v37; // zf
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rax
  __int64 *v41; // rdx
  LONG v42; // edx
  char v44; // [rsp+30h] [rbp-50h] BYREF
  int v45; // [rsp+38h] [rbp-48h] BYREF
  __int64 v46; // [rsp+40h] [rbp-40h] BYREF
  int v47; // [rsp+48h] [rbp-38h]
  __int64 v48; // [rsp+50h] [rbp-30h] BYREF
  int v49; // [rsp+58h] [rbp-28h]
  int v50; // [rsp+5Ch] [rbp-24h]
  __int64 *v51; // [rsp+60h] [rbp-20h] BYREF
  int v52; // [rsp+68h] [rbp-18h]
  int v53; // [rsp+6Ch] [rbp-14h]

  v5 = *a3;
  v6 = 0;
  v8 = *((_DWORD *)a3 + 2);
  v45 = a4;
  v46 = v5;
  v47 = v8;
  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    v53 = 0;
    v49 = v46;
    v50 = a4;
    v51 = &v48;
    v48 = a1;
    v52 = 16;
    EtwTraceKernelEvent((int)&v51, 1, 0x80008000, 4642, 4200450);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
LABEL_49:
    v42 = 0;
LABEL_51:
    LODWORD(v40) = PopCompleteAction(a1, v42);
    return v40;
  }
  PopVerifySystemPowerState(&v45, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v46) )
  {
    v42 = -1073741637;
    goto LABEL_51;
  }
  v10 = v46;
  v11 = HIDWORD(v46);
  if ( (unsigned int)(v46 - 2) <= 1 )
  {
    v11 = HIDWORD(v46) | 0x80000000;
    HIDWORD(v46) |= 0x80000000;
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0;
  if ( (v12 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v12 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      if ( *(_DWORD *)a1 == 2 )
      {
        v10 = 0;
        LODWORD(v46) = 0;
        v6 = (v11 & 0x10) != 0 ? 16 : 32;
      }
      else if ( !*(_DWORD *)a1 )
      {
        v10 = 0;
        LODWORD(v46) = 0;
        v6 = byte_14034BB64 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      PopDiagTraceShutdownAction(6, v6, *(_DWORD *)a1);
    }
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v6, *(_DWORD *)a1);
    if ( !byte_14034B181 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v44 = 0;
      if ( v10 == 7 )
        v11 |= 0x10000000u;
      v14 = v45;
      if ( v10 == 3 )
        v14 = 5;
      if ( v10 == 4 )
        v14 = 6;
      v45 = v14;
      if ( (int)PopCompareActions(v10, (unsigned int)qword_14034B184) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v44, 1, v11, 0, 1);
        PopPromoteActionFlag((unsigned int)&v44, v16, v17, 0, 2);
        PopPromoteActionFlag((unsigned int)&v44, 4, v18, 0, 0x10000000);
        if ( v10 == 2 )
        {
          if ( v20 < *((_DWORD *)PopPolicy + 17) )
            v20 = *((_DWORD *)PopPolicy + 17);
          v45 = v20;
        }
        if ( v20 > SHIDWORD(qword_14034B184) )
        {
          v44 |= v19;
          HIDWORD(qword_14034B184) = v20;
        }
      }
      LOBYTE(v15) = 1;
      PopPromoteActionFlag((unsigned int)&v44, 1, v11, v15, 4);
      LOBYTE(v22) = v21;
      PopPromoteActionFlag((unsigned int)&v44, 5, v23, v22, 0x80000000);
      LOBYTE(v24) = 1;
      PopPromoteActionFlag((unsigned int)&v44, 0, v25, v24, 0x40000000);
      LOBYTE(v26) = 1;
      PopPromoteActionFlag((unsigned int)&v44, v27, v28, v26, 8);
      LOBYTE(v29) = 1;
      PopPromoteActionFlag((unsigned int)&v44, v30, v31, v29, 32);
      if ( (int)PopCompareActions(v10, (unsigned int)qword_14034B184) <= 0 )
      {
        v35 = v44;
      }
      else
      {
        PopCompareActions(v10, 3LL);
        if ( !(unsigned int)PopCompareActions(v33, 8LL) )
          v34 |= 2u;
        LODWORD(qword_14034B184) = v10;
        v35 = v34 | 5;
        v36 = *(_DWORD *)a1;
        v32 = v10;
        dword_14034B198 = 0;
        dword_14034B194 = v36;
        v37 = *(_DWORD *)a1 == 0;
        v44 = v35;
        if ( v37 )
          dword_14034B198 = *(_DWORD *)(a1 + 16);
      }
      if ( v32 == 3 )
        LODWORD(qword_14034B184) = 2;
      if ( v35 )
      {
        v13 = 1;
        if ( (unsigned __int8)byte_14034B181 < 2u )
        {
          PopSetPowerActionState(1);
          dword_14034B190 = 0;
          v38 = 2;
        }
        else
        {
          PopAction |= v35;
          v38 = 1;
        }
        PopGetPolicyWorker(v38);
      }
    }
  }
  v39 = *(_DWORD *)(a1 + 4);
  if ( (v39 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v39 | 1;
    if ( v6 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v6 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
  }
  LODWORD(v40) = *(_DWORD *)(a1 + 4);
  if ( (v40 & 0x20) != 0 )
  {
    if ( v13 )
    {
      v41 = (__int64 *)qword_14034BA28;
      v40 = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_14034BA28 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)v40 = &PopActionWaiters;
      *(_QWORD *)(v40 + 8) = v41;
      *v41 = v40;
      qword_14034BA28 = v40;
      return v40;
    }
    goto LABEL_49;
  }
  return v40;
}
