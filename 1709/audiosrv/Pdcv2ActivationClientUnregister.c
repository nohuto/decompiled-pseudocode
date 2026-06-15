/*
 * XREFs of Pdcv2ActivationClientUnregister @ 0x1800DE4F4
 * Callers:
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x18009C91C (--1CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x18002BC90 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18002BD50 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18002C1D0 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18002C2E0 (PdcCreateWatchdogAroundClientCall.c)
 *     McGenEventUnregister @ 0x1800ACF58 (McGenEventUnregister.c)
 *     PdcPortClose @ 0x1800DE834 (PdcPortClose.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x1800DFC0C (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 */

__int64 __fastcall Pdcv2ActivationClientUnregister(_DWORD *P, __int64 a2)
{
  unsigned int v2; // ebx
  HANDLE *v4; // r14
  __int64 v5; // rcx
  char *v6; // rsi
  int *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  PTP_TIMER v11[7]; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( P && *P == 843138128 )
  {
    PdcCreateWatchdogAroundClientCall(v11, a2, P[6], (struct _TP_TIMER *)"Pdcv2ActivationClientUnregister");
    v4 = (HANDLE *)(P + 2);
    PdcAcquireRwLockExclusive2((__int64)(P + 2), &v12);
    v5 = *((_QWORD *)P + 4);
    *((_BYTE *)P + 64) = 0;
    PdcPortClose(v5);
    v6 = (char *)(P + 18);
    while ( *(char **)v6 != v6 )
    {
      v7 = *(int **)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD *)v7, *(int **)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *(_QWORD *)v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v9 = *((_QWORD *)v7 + 3);
      --*(_DWORD *)(v9 + 4LL * v7[12] + 228);
      --*(_DWORD *)(v9 + 224);
      v7[4] = 0;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    *((_QWORD *)P + 4) = 0LL;
    *P = 0;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(P, 0LL);
    PdcReleaseRwLockExclusive2((__int64)(P + 2), &v12);
    if ( CloseHandle(*v4) )
      *v4 = 0LL;
    else
      GetLastError();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( _InterlockedExchangeAdd(&g_RegistrationCount, 0xFFFFFFFF) == 1 )
    {
      EtwEventUnregister(qword_18014A450);
      qword_18014A450 = 0LL;
      dword_18014A430 = 0;
      McGenEventUnregister(PDC_EVENT_PROVIDER_Context);
    }
  }
  else
  {
    v2 = -1073741585;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(0LL, 3221225711LL);
  }
  PdcCancelWatchdogAroundClientCall(v11);
  return v2;
}
