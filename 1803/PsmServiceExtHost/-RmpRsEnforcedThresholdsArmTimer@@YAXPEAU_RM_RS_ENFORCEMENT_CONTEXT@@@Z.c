/*
 * XREFs of ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053438
 * Callers:
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180053880 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpRsEnforcedThresholdsArmTimer(struct _RM_RS_ENFORCEMENT_CONTEXT *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  char *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  __int64 *v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  v1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 152LL) = a1;
  RtlQueryUnbiasedInterruptTime(&v9);
  if ( v9 <= *((_QWORD *)a1 + 6) )
    v3 = v9 - *((_QWORD *)a1 + 6);
  else
    v3 = 0LL;
  v4 = *((_QWORD *)a1 + 5);
  v8 = v3;
  TpSetTimer(v4, &v8, 0LL, 1000LL);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v6 = *(_QWORD *)(v1 + 32);
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v10 = v6;
      v13 = &v10;
      v16 = (char *)a1 + 24;
      v7 = *(_QWORD *)(v1 + 48) + 1520LL;
      v14 = 8;
      v19 = v7;
      v17 = 8;
      v24 = 0;
      v11 = -(__int64)v8;
      v22 = &v11;
      v20 = 8;
      v23 = 8;
      TlgWrite(v5, &unk_18007D7C7, 0LL, 0LL, 6u, &pData);
    }
  }
}
