/*
 * XREFs of Pdcv2ActivationClientRenewActivation @ 0x1800DE320
 * Callers:
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18009CB9C (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x18002BC90 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18002BD50 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18002C1D0 (PdcAcquireRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x18002C240 (PdcPortSendMessageSynchronously.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18002C2E0 (PdcCreateWatchdogAroundClientCall.c)
 *     PdcpResizeDiagnosticContext @ 0x18002C324 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x18002C35C (Pdcv2pValidateActivationParameters.c)
 *     memset @ 0x180033A5A (memset.c)
 *     RtlStringCchCopyW @ 0x1800DE7BC (RtlStringCchCopyW.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1800DFAB8 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 */

__int64 __fastcall Pdcv2ActivationClientRenewActivation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rcx
  int v13; // eax
  _WORD *v14; // r8
  PTP_TIMER pv[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v17[96]; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+398h] [rbp+290h] BYREF

  v18 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 1;
    if ( a1 )
    {
      v6 = a1;
      if ( *(_DWORD *)(a1 + 16) == 1094927440 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)v7 == 843138128 )
        {
          if ( Pdcv2pValidateActivationParameters(a2) )
          {
            PdcCreateWatchdogAroundClientCall(
              pv,
              v10,
              *(_DWORD *)(v7 + 24),
              (struct _TP_TIMER *)"Pdcv2ActivationClientRenewActivation");
            PdcAcquireRwLockExclusive2(v7 + 8, &v18);
            memset(v17, 0, sizeof(v17));
            v11 = *(_QWORD *)(a2 + 16);
            v17[7] = *(_QWORD *)(a2 + 8);
            v17[8] = *(_QWORD *)(a1 + 592);
            LODWORD(v17[9]) = *(_DWORD *)(a2 + 4);
            LODWORD(v17[5]) = 11;
            if ( v11 )
              RtlStringCchCopyW((char *)&v17[9] + 4, 128LL);
            v12 = *(char **)(a2 + 24);
            if ( v12 )
              PdcpResizeDiagnosticContext(v12, (unsigned int *)&v17[42]);
            v8 = PdcPortSendMessageSynchronously(*(_QWORD *)(v7 + 32), v17);
            if ( v8 >= 0 )
            {
              v13 = HIDWORD(v17[6]);
              ++*(_DWORD *)(a1 + 64);
              v14 = *(_WORD **)(a2 + 16);
              v8 = v17[6];
              *a3 = v13;
              *(_DWORD *)(a1 + 56) = v13;
              *(_BYTE *)(a1 + 60) = 0;
              if ( v14 )
              {
                if ( *v14 )
                  RtlStringCchCopyW(a1 + 328, 128LL);
              }
            }
          }
          else
          {
            v8 = -1073741584;
          }
        }
        else
        {
          v8 = -1073741585;
          v7 = 0LL;
        }
      }
      else
      {
        v8 = -1073741585;
        v6 = 0LL;
      }
    }
    else
    {
      v8 = -1073741585;
    }
    v9 = (unsigned int)*a3;
  }
  else
  {
    v8 = -1073741583;
    v9 = 0xFFFFFFFFLL;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(v6, v7, v9, (unsigned int)v8);
  if ( v18 )
    PdcReleaseRwLockExclusive2(v7 + 8, &v18);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v8;
}
