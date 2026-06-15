/*
 * XREFs of Pdcv2ActivationClientDeactivate @ 0x180027E28
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x1800274A0 (--1CPdcTimerActivation@@QEAA@XZ.c)
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180028014 (PdcReleaseRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180028080 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180028268 (PdcAcquireRwLockExclusive2.c)
 *     memset @ 0x180049B8A (memset.c)
 */

__int64 __fastcall Pdcv2ActivationClientDeactivate(int *P)
{
  int *v1; // r14
  __int64 v2; // rsi
  __int64 v4; // r15
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  _QWORD v11[96]; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+370h] [rbp+270h] BYREF
  __int64 v13; // [rsp+378h] [rbp+278h] BYREF

  v1 = 0LL;
  v12 = 0;
  v2 = 0LL;
  if ( P )
  {
    v1 = P;
    if ( P[4] != 1094927440 )
    {
      v6 = -1073741585;
LABEL_13:
      v1 = 0LL;
      goto LABEL_14;
    }
    v2 = *((_QWORD *)P + 3);
    if ( *(_DWORD *)v2 == 843138128 )
    {
      PdcAcquireRwLockExclusive2(v2 + 8, &v12);
      if ( *(_DWORD *)(v2 + 4LL * v1[12] + 228) )
      {
        memset(v11, 0, sizeof(v11));
        v11[7] = *((_QWORD *)v1 + 74);
        LODWORD(v11[5]) = 13;
        v4 = *(_QWORD *)(v2 + 32);
        AcquireSRWLockShared((PSRWLOCK)(v4 + 16));
        if ( *(_QWORD *)(v4 + 8) )
        {
          memset(v11, 0, 0x28uLL);
          LODWORD(v11[0]) = 50332376;
          v5 = *(_QWORD *)(v4 + 8);
          v13 = 768LL;
          v6 = ZwAlpcSendWaitReceivePort(v5, 0x20000LL, v11, 0LL, v11, &v13, 0LL, 0LL);
          if ( v6 >= 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v4 + 124));
        }
        else
        {
          v6 = -1073741816;
        }
        ReleaseSRWLockShared((PSRWLOCK)(v4 + 16));
        if ( v6 >= 0 )
        {
          v6 = v11[6];
          if ( SLODWORD(v11[6]) >= 0 )
          {
            v7 = *((_QWORD *)P + 3);
            --*(_DWORD *)(v7 + 4LL * P[12] + 228);
            --*(_DWORD *)(v7 + 224);
            P[4] = 0;
            Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(P, v2, 0LL);
            v8 = *(_QWORD **)P;
            v9 = (PVOID *)*((_QWORD *)P + 1);
            if ( *(int **)(*(_QWORD *)P + 8LL) != P || *v9 != P )
              __fastfail(3u);
            *v9 = v8;
            v8[1] = v9;
            P[4] = 0;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
            goto LABEL_13;
          }
        }
      }
      else
      {
        v6 = -1073741823;
      }
    }
    else
    {
      v1 = 0LL;
      v6 = -1073741585;
      v2 = 0LL;
    }
  }
  else
  {
    v6 = -1073741585;
  }
LABEL_14:
  if ( v6 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(v1, v2, (unsigned int)v6);
  if ( v12 )
    PdcReleaseRwLockExclusive2(v2 + 8, &v12);
  return (unsigned int)v6;
}
