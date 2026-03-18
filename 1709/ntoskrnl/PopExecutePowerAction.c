/*
 * XREFs of PopExecutePowerAction @ 0x1406FCCB4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopCriticalShutdown @ 0x1406FCAD8 (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x1406FF4B0 (PdcPoSetPowerAction.c)
 *     NtInitiatePowerAction @ 0x140700C9C (NtInitiatePowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14070A2F0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopDiagTraceShutdownAction @ 0x140246F98 (PopDiagTraceShutdownAction.c)
 *     PopVerifyPowerActionPolicy @ 0x1405B977C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1405B987C (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x1405F24AC (PopResetActionDefaults.c)
 *     PopCompareActions @ 0x1406FCA74 (PopCompareActions.c)
 *     PopCompleteAction @ 0x1406FCAA8 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x1406FD6D4 (PopPromoteActionFlag.c)
 */

int __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, int a5)
{
  __int64 v5; // xmm0_8
  int v6; // esi
  int v8; // eax
  LONG v10; // edx
  int v11; // edi
  unsigned int v12; // r14d
  int v13; // eax
  char v14; // r12
  int v15; // r11d
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  int v19; // r8d
  char v20; // dl
  int v21; // r11d
  char v22; // dl
  int v23; // r9d
  int v24; // r8d
  int v25; // r9d
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // edx
  int v32; // r8d
  int v33; // r11d
  int v34; // r11d
  char v35; // r8
  char v36; // r8
  int v37; // eax
  bool v38; // zf
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rax
  __int64 *v42; // rdx
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
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    v53 = 0;
    v49 = v46;
    v50 = a4;
    v48 = a1;
    v51 = &v48;
    v52 = 16;
    EtwTraceKernelEvent((__int64)&v51, 1u, 0x80008000, 0x1222u, 0x401802u);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
    goto LABEL_60;
  PopVerifySystemPowerState(&v45, a5);
  if ( PopVerifyPowerActionPolicy((int *)&v46) )
  {
    v10 = -1073741637;
LABEL_61:
    LODWORD(v41) = PopCompleteAction(a1, v10);
    return v41;
  }
  v11 = v46;
  v12 = HIDWORD(v46);
  if ( (unsigned int)(v46 - 2) <= 1 )
  {
    v12 = HIDWORD(v46) | 0x80000000;
    HIDWORD(v46) |= 0x80000000;
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = 0;
  if ( (v13 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v13 | 2;
    if ( v11 == 6 && PsWin32CalloutsEstablished )
    {
      if ( *(_DWORD *)a1 == 2 )
      {
        v11 = 0;
        LODWORD(v46) = 0;
        v6 = (v12 & 0x10) != 0 ? 16 : 32;
      }
      else if ( !*(_DWORD *)a1 )
      {
        v11 = 0;
        LODWORD(v46) = 0;
        v6 = byte_1403661E4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      PopDiagTraceShutdownAction(6, v6, *(_DWORD *)a1);
    }
    if ( (unsigned int)(v11 - 4) <= 2 )
      PopDiagTraceShutdownAction(v11, v6, *(_DWORD *)a1);
    if ( !byte_1403657E1 )
      PopResetActionDefaults();
    if ( v11 )
    {
      v44 = 0;
      if ( v11 == 7 )
        v12 |= 0x10000000u;
      v15 = v45;
      if ( v11 == 3 )
        v15 = 5;
      if ( v11 == 4 )
        v15 = 6;
      v45 = v15;
      if ( (int)PopCompareActions(v11, qword_1403657E4) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v44, 1, v12, 0, 1);
        PopPromoteActionFlag((unsigned int)&v44, v17, v18, 0, 2);
        PopPromoteActionFlag((unsigned int)&v44, 4, v19, 0, 0x10000000);
        if ( v11 == 2 )
        {
          if ( v21 < *((_DWORD *)PopPolicy + 17) )
            v21 = *((_DWORD *)PopPolicy + 17);
          v45 = v21;
        }
        if ( v21 > SHIDWORD(qword_1403657E4) )
        {
          v44 |= v20;
          HIDWORD(qword_1403657E4) = v21;
        }
      }
      LOBYTE(v16) = 1;
      PopPromoteActionFlag((unsigned int)&v44, 1, v12, v16, 4);
      LOBYTE(v23) = v22;
      PopPromoteActionFlag((unsigned int)&v44, 5, v24, v23, 0x80000000);
      LOBYTE(v25) = 1;
      PopPromoteActionFlag((unsigned int)&v44, 0, v26, v25, 0x40000000);
      LOBYTE(v27) = 1;
      PopPromoteActionFlag((unsigned int)&v44, v28, v29, v27, 8);
      LOBYTE(v30) = 1;
      PopPromoteActionFlag((unsigned int)&v44, v31, v32, v30, 32);
      if ( (int)PopCompareActions(v11, qword_1403657E4) <= 0 )
      {
        v36 = v44;
      }
      else
      {
        PopCompareActions(v11, 3);
        if ( !(unsigned int)PopCompareActions(v34, 8) )
          v35 |= 2u;
        LODWORD(qword_1403657E4) = v11;
        v36 = v35 | 5;
        v37 = *(_DWORD *)a1;
        v33 = v11;
        dword_1403657F8 = 0;
        dword_1403657F4 = v37;
        v38 = *(_DWORD *)a1 == 0;
        v44 = v36;
        if ( v38 )
          dword_1403657F8 = *(_DWORD *)(a1 + 16);
      }
      if ( v33 == 3 )
        LODWORD(qword_1403657E4) = 2;
      if ( v36 )
      {
        v14 = 1;
        if ( (unsigned __int8)byte_1403657E1 < 2u )
        {
          PopSetPowerActionState(1);
          dword_1403657F0 = 0;
          v39 = 2;
        }
        else
        {
          PopAction |= v36;
          v39 = 1;
        }
        PopGetPolicyWorker(v39);
      }
    }
  }
  v40 = *(_DWORD *)(a1 + 4);
  if ( (v40 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v40 | 1;
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
  LODWORD(v41) = *(_DWORD *)(a1 + 4);
  if ( (v41 & 0x20) != 0 )
  {
    if ( v14 )
    {
      v42 = (__int64 *)qword_1403660A8;
      v41 = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_1403660A8 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)v41 = &PopActionWaiters;
      *(_QWORD *)(v41 + 8) = v42;
      *v42 = v41;
      qword_1403660A8 = v41;
      return v41;
    }
LABEL_60:
    v10 = 0;
    goto LABEL_61;
  }
  return v41;
}
