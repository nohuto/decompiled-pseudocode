/*
 * XREFs of ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0077B00
 * Callers:
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006CFDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006DD30 (NdisMIdleNotificationConfirm.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006E9E0 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006EC90 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C006FCA0 (ndisSetPowerResumeComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006FDD0 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingUnexpectedSelectiveSuspendError(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  unsigned __int16 v4; // r10
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const struct _TlgProvider_t *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v9 = 16LL;
      v8 = v1 + 63;
      v5 = v4;
      v10 = &v5;
      v12 = &v6;
      v11 = 4LL;
      v6 = (int)v3;
      v13 = 4LL;
      TlgWrite(v1, &unk_1C0080AAA, v2, v3, 5u, &pData);
    }
  }
}
