/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18003E0F8
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E240 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x18004C51C (MemUtilQueryGpuUtilization.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  unsigned __int8 v2; // dl
  BOOL v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int8 v12; // [rsp+38h] [rbp-29h] BYREF
  bool v13; // [rsp+39h] [rbp-28h] BYREF
  int v14; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  unsigned __int8 *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  bool *v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  v14 = MemUtilQueryGpuUtilization(&v16);
  if ( v14 < 0 )
    goto LABEL_2;
  RtlQueryUnbiasedInterruptTime(&v15);
  v4 = v15 - *((_QWORD *)a1 + 3);
  if ( v15 == *((_QWORD *)a1 + 3) )
  {
    v14 = -1071513567;
LABEL_2:
    v2 = 100;
    v3 = 1;
    goto LABEL_8;
  }
  v5 = v16;
  *((_QWORD *)a1 + 3) = v15;
  v6 = v5 - *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = v5;
  v7 = 100 * v6 / v4;
  v2 = 100;
  if ( v7 < 0x64 )
    v2 = v7;
  v3 = v2 > *((_BYTE *)a1 + 48);
  v14 = 0;
LABEL_8:
  v12 = v2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v14;
    v19 = 4;
    v21 = &v12;
    v13 = v3;
    v26 = 0;
    v24 = &v13;
    v22 = 1;
    v25 = 1;
    TlgWrite(v8, &unk_18005985B, v9, v10, 5u, &pData);
  }
  return v3;
}
