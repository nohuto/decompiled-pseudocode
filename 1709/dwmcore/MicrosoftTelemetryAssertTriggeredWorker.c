/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1801CE648
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1801CE634 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     _TlgCreateSz @ 0x180001F50 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx @ 0x18018F270 (TraceLoggingRegisterEx.c)
 *     GetImageTuple @ 0x1801CE58C (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  struct MicrosoftTelemetryAssertTriggeredNode *v2; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v3; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v5; // rcx
  __int64 v6; // r8
  void (__stdcall *v7)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  int ImageTuple; // esi
  void *v9; // r8
  const CHAR *v10; // rdx
  int v11; // ecx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  UINT32 cData; // r10d
  void (__stdcall *v15)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v16; // r8
  bool v17; // zf
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  unsigned int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  CHAR v38[272]; // [rsp+E8h] [rbp-20h] BYREF

  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v2 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v2 == a1 )
      break;
    v2 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v2 + 3);
  }
  while ( v2 );
  if ( !v2 )
  {
LABEL_5:
    v3 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v2 = v3;
    if ( !v3 )
      goto LABEL_23;
    *(_QWORD *)v3 = a1;
    TickCount = GetTickCount();
    v5 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v2 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v2 + 12) = 0LL;
    *((_QWORD *)v2 + 3) = v5;
    g_MicrosoftTelemetryAssertsTriggeredList = v2;
  }
  ++*((_DWORD *)v2 + 3);
  ++*((_DWORD *)v2 + 4);
  if ( GetTickCount() - *((_DWORD *)v2 + 2) > 0xEA60 )
  {
    *((_DWORD *)v2 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(&_ImageBase, v38, v6, &v19, &v18);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v7 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))((char *)&_ImageBase + v18),
          (struct HINSTANCE__ *)v7 > &_ImageBase)
      && a1 <= (unsigned __int64)v7 )
    {
      v20 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v20 = 0;
    }
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18026DCB0, v7, v9);
    if ( dword_18026DCB0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026DCB0, 0x400000000000uLL) )
    {
      v26 = 4LL;
      v25 = &v21;
      v10 = v38;
      v28 = 4LL;
      v27 = &v20;
      v21 = 9;
      v30 = 4LL;
      v32 = 4LL;
      v29 = &v19;
      v19 = ImageTuple != 0 ? v19 : 0;
      v31 = &v18;
      v18 &= -(ImageTuple != 0);
      if ( !ImageTuple )
        v10 = "<unknown>";
      TlgCreateSz(&pDesc, v10);
      v11 = *((_DWORD *)v2 + 3);
      v34 = &v22;
      v23 = *((_DWORD *)v2 + 4);
      v36 = &v23;
      v22 = v11;
      v35 = 4LL;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18026DCB0, &unk_180216879, v12, v13, cData, &pData);
    }
    EventUnregister(qword_18026DCD0);
    qword_18026DCD0 = 0LL;
    dword_18026DCB0 = 0;
    v17 = *((_DWORD *)v2 + 4) == 1;
    *((_DWORD *)v2 + 3) = 0;
    if ( v17 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18026DC70, v15, v16);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18026DC70, 0, 0LL) )
        Sleep(0x3E8u);
      EventUnregister(qword_18026DC90);
      qword_18026DC90 = 0LL;
      dword_18026DC70 = 0;
    }
  }
LABEL_23:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
