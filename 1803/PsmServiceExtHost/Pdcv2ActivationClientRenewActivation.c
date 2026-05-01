/*
 * XREFs of Pdcv2ActivationClientRenewActivation @ 0x18006B1C0
 * Callers:
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180060484 (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180035AC8 (RtlStringCchCopyW.c)
 *     PdcCancelWatchdogAroundClientCall @ 0x180035CCC (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180035CE8 (PdcReleaseRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x180035FAC (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18003604C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1800360BC (PdcCreateWatchdogAroundClientCall.c)
 *     Pdcv2pValidateActivationParameters @ 0x1800361F0 (Pdcv2pValidateActivationParameters.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     PdcpResizeDiagnosticContext @ 0x18006B188 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x18006C4E4 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
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
  _DWORD v17[13]; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+8Ch] [rbp-7Ch]
  __int64 v19; // [rsp+90h] [rbp-78h]
  __int64 v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  _WORD v22[130]; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v23[116]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v24; // [rsp+3B8h] [rbp+2B0h] BYREF

  v24 = 0;
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
            PdcAcquireRwLockExclusive2(v7 + 8, &v24);
            memset_0(v17, 0, 0x318uLL);
            v11 = *(_QWORD *)(a2 + 16);
            v19 = *(_QWORD *)(a2 + 8);
            v20 = *(_QWORD *)(a1 + 592);
            v21 = *(_DWORD *)(a2 + 4);
            v17[10] = 11;
            if ( v11 )
              RtlStringCchCopyW(v22, 128LL, v11);
            v12 = *(char **)(a2 + 24);
            if ( v12 )
              PdcpResizeDiagnosticContext(v12, v23);
            v8 = PdcPortSendMessageSynchronously(*(_QWORD *)(v7 + 32), v17);
            if ( v8 >= 0 )
            {
              v13 = v18;
              v14 = *(_WORD **)(a2 + 16);
              v8 = v17[12];
              *a3 = v18;
              ++*(_DWORD *)(a1 + 64);
              *(_DWORD *)(a1 + 56) = v13;
              *(_BYTE *)(a1 + 60) = 0;
              if ( v14 )
              {
                if ( *v14 )
                  RtlStringCchCopyW((_WORD *)(a1 + 328), 128LL, (__int64)v14);
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
  if ( v24 )
    PdcReleaseRwLockExclusive2(v7 + 8, &v24);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v8;
}
