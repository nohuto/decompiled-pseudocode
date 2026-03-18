/*
 * XREFs of PopExecutePowerAction @ 0x1405EB7B4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x1405EB5AC (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     PopCriticalShutdown @ 0x140762C20 (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x140764E30 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14076C1C0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x14027D738 (PopDiagTraceShutdownAction.c)
 *     PopPromoteActionFlag @ 0x1405EBB18 (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1405EBB68 (PopCompareActions.c)
 *     PopCompleteAction @ 0x1405EBB9C (PopCompleteAction.c)
 *     PopVerifyPowerActionPolicy @ 0x14061019C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1406110A4 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x1406143CC (PopResetActionDefaults.c)
 */

__int64 __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v7; // eax
  int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // eax
  char v13; // r13
  int v14; // r11d
  int v15; // r15d
  int v16; // r9d
  int v17; // edx
  int v18; // r14d
  int v19; // r9d
  int v20; // r9d
  char v21; // dl
  int v22; // r11d
  int v23; // r9d
  int v24; // r9d
  int v25; // edx
  int v26; // r9d
  int v27; // edx
  int v28; // r9d
  unsigned int v29; // r9d
  int v30; // r11d
  unsigned int v31; // r11d
  unsigned int v32; // r9d
  char v33; // r8
  char v34; // r8
  int v35; // ecx
  __int64 result; // rax
  __int64 *v37; // rdx
  __int64 v38; // rdx
  int v39; // r8d
  char v40; // [rsp+30h] [rbp-41h] BYREF
  int v41; // [rsp+38h] [rbp-39h] BYREF
  __int64 v42; // [rsp+40h] [rbp-31h] BYREF
  int v43; // [rsp+48h] [rbp-29h]
  __int64 v44; // [rsp+50h] [rbp-21h] BYREF
  int v45; // [rsp+58h] [rbp-19h]
  int v46; // [rsp+5Ch] [rbp-15h]
  _QWORD v47[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = *a3;
  v7 = *((_DWORD *)a3 + 2);
  v41 = a4;
  v9 = 0;
  v42 = v5;
  v43 = v7;
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    v45 = v42;
    v46 = a4;
    v47[0] = &v44;
    v44 = a1;
    v47[1] = 16LL;
    EtwTraceKernelEvent((int)v47, 1, 0x80008000, 4642, 4200450);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
LABEL_49:
    v38 = 0LL;
    return PopCompleteAction(a1, v38);
  }
  PopVerifySystemPowerState(&v41, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v42) )
  {
    v38 = 3221225659LL;
    return PopCompleteAction(a1, v38);
  }
  v10 = v42;
  v11 = HIDWORD(v42);
  if ( (unsigned int)(v42 - 2) <= 1 )
  {
    v11 = HIDWORD(v42) | 0x80000000;
    HIDWORD(v42) |= 0x80000000;
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0;
  if ( (v12 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v12 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      v39 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 2 )
      {
        LODWORD(v42) = 0;
        v10 = 0;
        v9 = (v11 & 0x10) != 0 ? 16 : 32;
      }
      else if ( v39 )
      {
        if ( v39 == 15 )
        {
          v9 = 16;
          v39 = 15;
          if ( (v11 & 0x2000000) == 0 )
            v9 = 32;
        }
      }
      else
      {
        v10 = 0;
        LODWORD(v42) = 0;
        v9 = byte_1403AAA64 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        v39 = *(_DWORD *)a1;
      }
      PopDiagTraceShutdownAction(6, v9, v39);
    }
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v9, *(_DWORD *)a1);
    if ( !byte_1403AA061 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v14 = v41;
      v40 = 0;
      v15 = v11 | 0x10000000;
      if ( v10 != 7 )
        v15 = v11;
      if ( v10 == 3 )
        v14 = 5;
      if ( v10 == 4 )
        v14 = 6;
      v41 = v14;
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1403AA064) < 0 )
      {
        v18 = 2;
      }
      else
      {
        PopPromoteActionFlag((unsigned int)&v40, 1, v15, 0, 1);
        v18 = v17 + 1;
        PopPromoteActionFlag((unsigned int)&v40, v17, v15, v19, v17 + 1);
        PopPromoteActionFlag((unsigned int)&v40, v20 + 4, v15, v20, 0x10000000);
        if ( v10 == v18 )
        {
          if ( v22 < *((_DWORD *)PopPolicy + 17) )
            v22 = *((_DWORD *)PopPolicy + 17);
          v41 = v22;
        }
        if ( v22 > SHIDWORD(qword_1403AA064) )
        {
          v40 |= v21;
          HIDWORD(qword_1403AA064) = v22;
        }
      }
      LOBYTE(v16) = 1;
      PopPromoteActionFlag((unsigned int)&v40, 1, v15, v16, 4);
      PopPromoteActionFlag((unsigned int)&v40, 5, v15, v23, 0x80000000);
      PopPromoteActionFlag((unsigned int)&v40, 0, v15, v24, 0x40000000);
      PopPromoteActionFlag((unsigned int)&v40, v25, v15, v26, v25 + 8);
      PopPromoteActionFlag((unsigned int)&v40, v27, v15, v28, 32);
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1403AA064) <= 0 )
      {
        v34 = v40;
      }
      else
      {
        PopCompareActions(v10, (unsigned int)(v30 - 5));
        if ( !(unsigned int)PopCompareActions(v32, v31) )
          v33 |= v18;
        LODWORD(qword_1403AA064) = v10;
        v34 = v33 | 5;
        v29 = v10;
        dword_1403AA074 = *(_DWORD *)a1;
        dword_1403AA078 = 0;
        v40 = v34;
        if ( !*(_DWORD *)a1 )
          dword_1403AA078 = *(_DWORD *)(a1 + 16);
      }
      if ( v29 == 3 )
        LODWORD(qword_1403AA064) = v18;
      if ( v34 )
      {
        v13 = 1;
        if ( (unsigned __int8)byte_1403AA061 < (unsigned __int8)v18 )
        {
          PopSetPowerActionState(1);
          v35 = v18;
          dword_1403AA070 = 0;
        }
        else
        {
          PopAction |= v34;
          v35 = 1;
        }
        PopGetPolicyWorker(v35);
      }
    }
  }
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = result | 1;
    if ( v9 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v9 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
    result = *(unsigned int *)(a1 + 4);
  }
  if ( (result & 0x20) != 0 )
  {
    if ( v13 )
    {
      v37 = (__int64 *)qword_1403AA8F8;
      result = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_1403AA8F8 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)result = &PopActionWaiters;
      *(_QWORD *)(result + 8) = v37;
      *v37 = result;
      qword_1403AA8F8 = result;
      return result;
    }
    goto LABEL_49;
  }
  return result;
}
