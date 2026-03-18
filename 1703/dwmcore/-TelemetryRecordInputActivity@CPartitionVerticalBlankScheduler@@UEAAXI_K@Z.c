/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x180004B30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        int a2,
        const GUID *a3)
{
  const GUID *v3; // r9
  int v4; // r10d
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+58h] [rbp+7h]
  __int64 v10; // [rsp+60h] [rbp+Fh]
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  const GUID **v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+C0h] [rbp+6Fh] BYREF
  const GUID *v16; // [rsp+C8h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = a3;
  v4 = a2;
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v9 = *((_QWORD *)this + 2685);
    v11 = &v15;
    v13 = &v16;
    v10 = 8LL;
    v12 = 4LL;
    v14 = 8LL;
    TlgWrite(v6, &unk_1801F5929, v7, v3, 5u, &pData);
    v3 = v16;
    v4 = v15;
  }
  *((_QWORD *)this + 3089) = **((_QWORD **)this + 2685);
  *((_DWORD *)this + 6176) = v4;
  *((_QWORD *)this + 3090) = v3;
}
