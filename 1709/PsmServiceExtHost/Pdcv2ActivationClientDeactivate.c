/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x18004A1DC
 * Callers:
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180040824 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180024A38 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180024A54 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180024E4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180024EBC (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     PdcPortSendMessageSynchronously @ 0x18004A9A8 (PdcPortSendMessageSynchronously.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x18004B858 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P, __int64 a2)
{
  int *v2; // rbp
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  PTP_TIMER pv[6]; // [rsp+20h] [rbp-338h] BYREF
  _BYTE v11[40]; // [rsp+50h] [rbp-308h] BYREF
  int v12; // [rsp+78h] [rbp-2E0h]
  int v13; // [rsp+80h] [rbp-2D8h]
  __int64 v14; // [rsp+88h] [rbp-2D0h]
  char v15; // [rsp+360h] [rbp+8h] BYREF

  v2 = 0LL;
  v15 = 0;
  v3 = 0LL;
  if ( !P )
  {
    v5 = -1073741585;
    goto LABEL_3;
  }
  v2 = P;
  if ( P[4] != 1094927440 )
  {
    v5 = -1073741585;
LABEL_10:
    v2 = 0LL;
    goto LABEL_3;
  }
  v3 = *((_QWORD *)P + 3);
  if ( *(_DWORD *)v3 == 843138128 )
  {
    PdcCreateWatchdogAroundClientCall(
      pv,
      a2,
      *(_DWORD *)(v3 + 24),
      (struct _TP_TIMER *)"Pdcv2ActivationClientDeactivate");
    PdcAcquireRwLockExclusive2(v3 + 8, &v15);
    if ( *(_DWORD *)(v3 + 4LL * P[12] + 228) )
    {
      memset_0(v11, 0, 0x300uLL);
      v14 = *((_QWORD *)P + 74);
      v12 = 13;
      v5 = PdcPortSendMessageSynchronously(*(_QWORD *)(v3 + 32), v11);
      if ( v5 >= 0 )
      {
        v5 = v13;
        if ( v13 >= 0 )
        {
          v7 = *((_QWORD *)P + 3);
          --*(_DWORD *)(v7 + 4LL * P[12] + 228);
          --*(_DWORD *)(v7 + 224);
          P[4] = 0;
          Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(P, v3, 0LL);
          v8 = *(_QWORD **)P;
          if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v9 = (PVOID *)*((_QWORD *)P + 1), *v9 != P) )
            __fastfail(3u);
          *v9 = v8;
          v8[1] = v9;
          P[4] = 0;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
          goto LABEL_10;
        }
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v2 = 0LL;
    v5 = -1073741585;
    v3 = 0LL;
  }
LABEL_3:
  if ( v5 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v2, v3, (unsigned int)v5);
  if ( v15 )
    PdcReleaseRwLockExclusive2(v3 + 8, &v15);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v5;
}
