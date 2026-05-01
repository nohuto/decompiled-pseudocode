/*
 * XREFs of Pdcv2ActivationClientUnregister @ 0x18006B394
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E120 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180035CCC (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180035CE8 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18003604C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1800360BC (PdcCreateWatchdogAroundClientCall.c)
 *     PdcPortClose @ 0x18006B9C8 (PdcPortClose.c)
 *     PdcRwLockUninitialize2 @ 0x18006BEBC (PdcRwLockUninitialize2.c)
 *     McGenEventUnregister @ 0x18006BEE8 (McGenEventUnregister.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x18006C638 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 */

__int64 __fastcall Pdcv2ActivationClientUnregister(_DWORD *P, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  void **v5; // rsi
  void ***v6; // r8
  void **v7; // rax
  void **v8; // rcx
  PTP_TIMER v10[7]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( P && *P == 843138128 )
  {
    PdcCreateWatchdogAroundClientCall(v10, a2, P[6], (struct _TP_TIMER *)"Pdcv2ActivationClientUnregister");
    PdcAcquireRwLockExclusive2((__int64)(P + 2), &v11);
    v4 = *((_QWORD *)P + 4);
    *((_BYTE *)P + 64) = 0;
    PdcPortClose(v4);
    v5 = (void **)(P + 18);
    while ( 1 )
    {
      v6 = (void ***)*v5;
      if ( *v5 == v5 )
        break;
      if ( v6[1] != v5 || (v7 = *v6, (*v6)[1] != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
      v8 = v6[3];
      --*((_DWORD *)v8 + *((int *)v6 + 12) + 57);
      --*((_DWORD *)v8 + 56);
      *((_DWORD *)v6 + 4) = 0;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    *((_QWORD *)P + 4) = 0LL;
    *P = 0;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(P, 0LL);
    PdcReleaseRwLockExclusive2((__int64)(P + 2), &v11);
    PdcRwLockUninitialize2(P + 2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( _InterlockedExchangeAdd(&g_RegistrationCount, 0xFFFFFFFF) == 1 )
    {
      EventUnregister(qword_180092190);
      qword_180092190 = 0LL;
      dword_180092170 = 0;
      McGenEventUnregister();
    }
  }
  else
  {
    v2 = -1073741585;
    Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(0LL, 3221225711LL);
  }
  PdcCancelWatchdogAroundClientCall(v10);
  return v2;
}
