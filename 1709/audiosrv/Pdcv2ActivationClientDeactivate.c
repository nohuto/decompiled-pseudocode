/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x18002BB08
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18002A6F8 (--1CPdcTimerActivation@@QEAA@XZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x18002BC90 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18002BD50 (PdcReleaseRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x18002BF24 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18002C1D0 (PdcAcquireRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x18002C240 (PdcPortSendMessageSynchronously.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18002C2E0 (PdcCreateWatchdogAroundClientCall.c)
 *     memset @ 0x180033A5A (memset.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  int *v1; // rbp
  __int64 v2; // rsi
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int **v7; // rax
  _BYTE pv[48]; // [rsp+20h] [rbp-338h] BYREF
  _QWORD v10[96]; // [rsp+50h] [rbp-308h] BYREF
  char v11; // [rsp+360h] [rbp+8h] BYREF

  v1 = 0LL;
  v11 = 0;
  v2 = 0LL;
  if ( P )
  {
    v1 = P;
    if ( P[4] != 1094927440 )
    {
      v4 = -1073741585;
LABEL_10:
      v1 = 0LL;
      goto LABEL_11;
    }
    v2 = *((_QWORD *)P + 3);
    if ( *(_DWORD *)v2 == 843138128 )
    {
      PdcCreateWatchdogAroundClientCall(pv);
      PdcAcquireRwLockExclusive2(v2 + 8, &v11);
      if ( *(_DWORD *)(v2 + 4LL * v1[12] + 228) )
      {
        memset(v10, 0, sizeof(v10));
        v10[7] = *((_QWORD *)v1 + 74);
        LODWORD(v10[5]) = 13;
        v4 = PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 32), v10, v3);
        if ( v4 >= 0 )
        {
          v4 = v10[6];
          if ( SLODWORD(v10[6]) >= 0 )
          {
            v5 = *((_QWORD *)v1 + 3);
            --*(_DWORD *)(v5 + 4LL * v1[12] + 228);
            --*(_DWORD *)(v5 + 224);
            v1[4] = 0;
            Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v1, v2, 0LL);
            v6 = *(_QWORD *)v1;
            if ( *(int **)(*(_QWORD *)v1 + 8LL) != v1 || (v7 = (int **)*((_QWORD *)v1 + 1), *v7 != v1) )
              __fastfail(3u);
            *v7 = (int *)v6;
            *(_QWORD *)(v6 + 8) = v7;
            v1[4] = 0;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
            goto LABEL_10;
          }
        }
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else
    {
      v1 = 0LL;
      v4 = -1073741585;
      v2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741585;
  }
LABEL_11:
  if ( v4 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v1, v2, (unsigned int)v4);
  if ( v11 )
    PdcReleaseRwLockExclusive2(v2 + 8, &v11);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v4;
}
