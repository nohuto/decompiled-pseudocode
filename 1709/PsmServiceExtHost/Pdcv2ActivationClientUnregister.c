/*
 * XREFs of Pdcv2ActivationClientUnregister @ 0x18004A560
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180024A38 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180024A54 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180024E4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180024EBC (PdcCreateWatchdogAroundClientCall.c)
 *     PdcPortClose @ 0x18004A8A4 (PdcPortClose.c)
 *     McGenEventUnregister @ 0x18004ADAC (McGenEventUnregister.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x18004BC00 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
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
      EtwEventUnregister(qword_180067120);
      qword_180067120 = 0LL;
      dword_180067100 = 0;
      McGenEventUnregister();
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
