/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18020EFCC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18020EFB8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800C7630 (TraceLoggingProviderEnabled.c)
 *     TraceLoggingRegisterEx @ 0x1800C8388 (TraceLoggingRegisterEx.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800D4258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     GetImageTuple @ 0x18020EF18 (GetImageTuple.c)
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
  int v10; // edi
  const CHAR *v11; // rdx
  int v12; // ecx
  void (__stdcall *v13)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v14; // r8
  bool v15; // zf
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  unsigned int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  CHAR v36[272]; // [rsp+E8h] [rbp-20h] BYREF

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
    ImageTuple = GetImageTuple((HMODULE)_ImageBase, v36, v6, &v17, &v16);
    if ( ImageTuple
      && a1 >= (unsigned __int64)_ImageBase
      && (v7 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))((char *)_ImageBase + v16),
          (__int16 *)v7 > _ImageBase)
      && a1 <= (unsigned __int64)v7 )
    {
      v10 = a1 - (unsigned int)_ImageBase;
    }
    else
    {
      v10 = 0;
    }
    v19 = v10;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1802D4060, v7, v9);
    if ( dword_1802D4060 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D4060, 0x400000000000uLL) )
    {
      v18 = 10;
      v23 = &v18;
      v11 = v36;
      v24 = 4LL;
      v25 = &v19;
      v26 = 4LL;
      v28 = 4LL;
      v27 = &v17;
      v17 = ImageTuple != 0 ? v17 : 0;
      v30 = 4LL;
      v29 = &v16;
      v16 &= -(ImageTuple != 0);
      if ( !ImageTuple )
        v11 = "<unknown>";
      TlgCreateSz(&pDesc, v11);
      v12 = *((_DWORD *)v2 + 3);
      v32 = &v20;
      v21 = *((_DWORD *)v2 + 4);
      v34 = &v21;
      v20 = v12;
      v33 = 4LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D4060, &unk_1802ABC97, 0LL, 0LL, 9u, &pData);
    }
    EventUnregister(qword_1802D4080);
    qword_1802D4080 = 0LL;
    dword_1802D4060 = 0;
    v15 = *((_DWORD *)v2 + 4) == 1;
    *((_DWORD *)v2 + 3) = 0;
    if ( v15 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1802D4020, v13, v14);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1802D4020, 0, 0LL) )
        Sleep(0x3E8u);
      EventUnregister(qword_1802D4040);
      qword_1802D4040 = 0LL;
      dword_1802D4020 = 0;
    }
  }
LABEL_23:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
