/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x180047F80
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180048D00 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180047D98 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(PVOID **P)
{
  __int64 v2; // r15
  PVOID *v3; // rbx
  int v4; // esi
  DWORD v5; // eax
  PVOID v6; // r14
  __int64 v7; // rcx
  int v8; // esi
  PVOID *v9; // rcx
  PVOID *v10; // rcx
  PVOID *v11; // rax
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *v14; // rax
  PTP_TIMER pv; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h]
  const char *v17; // [rsp+50h] [rbp-B0h]
  DWORD CurrentProcessId; // [rsp+58h] [rbp-A8h]
  DWORD v19; // [rsp+5Ch] [rbp-A4h]
  int v20; // [rsp+60h] [rbp-A0h]
  _QWORD v21[5]; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  PVOID *v24; // [rsp+A8h] [rbp-58h]
  char v25; // [rsp+3D0h] [rbp+2D0h]
  struct _FILETIME pftDueTime; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v27; // [rsp+3E0h] [rbp+2E0h] BYREF

  v25 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( !P )
  {
    v8 = -1073741585;
    goto LABEL_29;
  }
  v2 = (__int64)P;
  if ( *((_DWORD *)P + 4) != 1094927440 )
  {
    v8 = -1073741585;
    v2 = 0LL;
    goto LABEL_29;
  }
  v3 = P[3];
  if ( *(_DWORD *)v3 != 843138128 )
  {
    v8 = -1073741585;
    v2 = 0LL;
    v3 = 0LL;
    goto LABEL_29;
  }
  v4 = *((_DWORD *)v3 + 6);
  if ( ClientCallWatchdogEnabled )
  {
    memset_0(&pv, 0, 0x28uLL);
    v16 = v4;
    CurrentProcessId = GetCurrentProcessId();
    CurrentThreadId = GetCurrentThreadId();
    v20 = 1200000;
    v19 = CurrentThreadId;
    v17 = "Pdcv2ActivationClientDeactivate";
    v14 = CreateThreadpoolTimer(PdcpFireClientCallWatchdog, &pv, 0LL);
    pv = v14;
    if ( v14 )
    {
      pftDueTime.dwHighDateTime = -3;
      pftDueTime.dwLowDateTime = 884901888;
      SetThreadpoolTimer(v14, &pftDueTime, 0, 0x3E8u);
    }
    else
    {
      GetLastError();
    }
  }
  while ( 1 )
  {
    v5 = WaitForSingleObjectEx(v3[1], 0xEA60u, 0);
    if ( !v5 )
      break;
    if ( v5 == 128 )
      __fastfail(0x24u);
    if ( v5 != 258 )
      __fastfail(5u);
  }
  v25 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)v3 + 5) == 1 )
    *((_DWORD *)v3 + 4) = GetCurrentThreadId();
  if ( *((_DWORD *)v3 + 4) != GetCurrentThreadId() )
    __fastfail(5u);
  if ( !*((_DWORD *)v3 + *((int *)P + 12) + 57) )
  {
    v8 = -1073741823;
    goto LABEL_29;
  }
  memset_0(v21, 0, 0x318uLL);
  v24 = P[74];
  v22 = 13;
  v6 = v3[4];
  AcquireSRWLockShared((PSRWLOCK)v6 + 2);
  if ( *((_QWORD *)v6 + 1) )
  {
    memset(&v21[1], 0, 32);
    v21[0] = 51905264LL;
    v7 = *((_QWORD *)v6 + 1);
    v27 = 792LL;
    v8 = ZwAlpcSendWaitReceivePort(v7, 0x20000LL, v21, 0LL, v21, &v27, 0LL, 0LL);
    if ( v8 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)v6 + 31);
  }
  else
  {
    v8 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)v6 + 2);
  if ( v8 < 0 )
    goto LABEL_29;
  v8 = v23;
  if ( v23 < 0 )
    goto LABEL_29;
  v9 = P[3];
  --*((_DWORD *)v9 + *((int *)P + 12) + 57);
  --*((_DWORD *)v9 + 56);
  *((_DWORD *)P + 4) = 0;
  Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE((__int64)P, v3, 0);
  v10 = *P;
  if ( (*P)[1] != P || (v11 = P[1], *v11 != P) )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = v11;
  *((_DWORD *)P + 4) = 0;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  v2 = 0LL;
  if ( v8 < 0 )
  {
LABEL_29:
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v2, v3, v8);
    if ( !v25 )
      goto LABEL_24;
  }
  if ( !v3[1] || *((_DWORD *)v3 + 4) != GetCurrentThreadId() || *((int *)v3 + 5) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 5, 0xFFFFFFFF) == 1 )
    *((_DWORD *)v3 + 4) = 0;
  if ( !ReleaseMutex(v3[1]) )
  {
    GetLastError();
    __fastfail(0x24u);
  }
LABEL_24:
  if ( ClientCallWatchdogEnabled )
  {
    SetThreadpoolTimer(pv, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv, 0);
    CloseThreadpoolTimer(pv);
  }
  return (unsigned int)v8;
}
