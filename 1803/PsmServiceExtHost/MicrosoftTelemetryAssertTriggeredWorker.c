/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18006C95C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     TraceLoggingRegisterEx @ 0x1800376E4 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18006C84C (_TlgCreateSz.c)
 *     GetImageTuple @ 0x18006C8A8 (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  struct MicrosoftTelemetryAssertTriggeredNode *v2; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v3; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v5; // rcx
  __int64 v6; // r8
  int ImageTuple; // esi
  char *v8; // rdx
  int v9; // edi
  const CHAR *v10; // rdx
  int v11; // ecx
  bool v12; // zf
  UCHAR v13; // dl
  unsigned int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  unsigned int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  CHAR v34[272]; // [rsp+E8h] [rbp-20h] BYREF

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
    ImageTuple = GetImageTuple((HMODULE)&_ImageBase, v34, v6, &v15, &v14);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v8 = (char *)&_ImageBase + v14, v8 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v8 )
    {
      v9 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v9 = 0;
    }
    v17 = v9;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180092240, 0LL, 0LL);
    if ( dword_180092240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180092240, 0x400000000000uLL) )
    {
      v16 = 10;
      v21 = &v16;
      v10 = v34;
      v22 = 4LL;
      v23 = &v17;
      v24 = 4LL;
      v26 = 4LL;
      v25 = &v15;
      v15 = ImageTuple != 0 ? v15 : 0;
      v28 = 4LL;
      v27 = &v14;
      v14 &= -(ImageTuple != 0);
      if ( !ImageTuple )
        v10 = "<unknown>";
      TlgCreateSz(&pDesc, v10);
      v11 = *((_DWORD *)v2 + 3);
      v30 = &v18;
      v19 = *((_DWORD *)v2 + 4);
      v32 = &v19;
      v18 = v11;
      v31 = 4LL;
      v33 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180092240, &unk_18008497E, 0LL, 0LL, 9u, &pData);
    }
    EventUnregister(qword_180092260);
    qword_180092260 = 0LL;
    dword_180092240 = 0;
    v12 = *((_DWORD *)v2 + 4) == 1;
    *((_DWORD *)v2 + 3) = 0;
    if ( v12 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180092200, 0LL, 0LL);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_180092200, v13, 0LL) )
        Sleep(0x3E8u);
      EventUnregister(qword_180092220);
      qword_180092220 = 0LL;
      dword_180092200 = 0;
    }
  }
LABEL_23:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
