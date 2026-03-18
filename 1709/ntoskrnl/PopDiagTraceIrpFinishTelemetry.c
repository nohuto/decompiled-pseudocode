/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x1401232F0
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140123260 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PopComputeWatchdogTimeout @ 0x1400B38A4 (PopComputeWatchdogTimeout.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     IoFindDeviceThatFailedIrp @ 0x14012E918 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x140244E00 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  const WCHAR *v1; // rsi
  char v2; // r14
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r8
  int DriverName; // eax
  unsigned __int64 v7; // rdi
  __int64 DeviceThatFailedIrp; // rax
  const size_t *v9; // rcx
  int v10; // r10d
  UINT32 cData; // r11d
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  __int64 *v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  __int64 *v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  int *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  _BYTE v35[128]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = (const WCHAR *)&pwsz;
  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  v5 = *(_QWORD *)(v4 + 48);
  LOBYTE(DriverName) = 75 * (MEMORY[0xFFFFF78000000008] - v5);
  v7 = (MEMORY[0xFFFFF78000000008] - v5) / 0x2710uLL;
  if ( v5 && (unsigned int)v7 >= 0x1388 && *(_BYTE *)(v4 + 196) )
  {
    if ( *(int *)(a1 + 48) < 0 && !*(_DWORD *)(v4 + 188) )
    {
      v2 = 1;
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
      DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v35);
      v9 = (const size_t *)v35;
      if ( DriverName < 0 )
        v9 = &pwsz;
      v1 = (const WCHAR *)v9;
    }
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DriverName) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DriverName )
      {
        v16 = *(_QWORD *)(v4 + 48);
        v14 = v7;
        v17 = v3;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        LODWORD(v15) = PopComputeWatchdogTimeout(v4);
        v19 = &v14;
        v22 = &v16;
        LOBYTE(v13) = v2;
        v25 = &v17;
        v20 = 4;
        v23 = 8;
        v26 = 8;
        TlgCreateWsz(&pDesc, v1);
        v31 = 0;
        v34 = 0;
        v32 = &v13;
        v29 = &v15;
        v30 = v10;
        v33 = 1;
        LOBYTE(DriverName) = TlgWrite(&pCallbackContext, &unk_1402D2B97, 0LL, 0LL, cData, &pData);
      }
    }
  }
  return DriverName;
}
