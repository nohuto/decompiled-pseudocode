/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x180011470
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z @ 0x18000257C (-Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // r11d
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int *v12; // rax
  unsigned int v13; // [rsp+38h] [rbp-29h] BYREF
  const GUID *v14; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  unsigned int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  unsigned __int64 *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  unsigned __int64 *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]
  unsigned int v26; // [rsp+D0h] [rbp+6Fh] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp+77h] BYREF

  v27 = a3;
  v26 = a2;
  v3 = a3;
  v4 = a2;
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v12 = (unsigned int *)*((_QWORD *)this + 2625);
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = v12;
    v20 = (unsigned __int64 *)&v26;
    v23 = &v27;
    v18 = 8;
    v21 = 4;
    v24 = 8;
    TlgWrite(v9, &unk_180211982, v10, v11, 5u, &pData);
    v3 = v27;
    v4 = v26;
  }
  v6 = (const GUID *)**((_QWORD **)this + 2625);
  v14 = v6;
  v15 = v3;
  v13 = v4;
  if ( dword_18026D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7F0, 2uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v13;
    v20 = &v15;
    v23 = (unsigned __int64 *)&v14;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    TlgWrite(v7, &unk_180211FCF, v8, v6, 5u, &pData);
    v6 = v14;
    v3 = v15;
    v4 = v13;
  }
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::Update(
    (CPartitionVerticalBlankScheduler *)((char *)this + 24144),
    v4,
    v3,
    (__int64)v6);
}
