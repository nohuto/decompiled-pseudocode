/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18004BEF0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18004BEDC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     TraceLoggingRegisterEx @ 0x180021110 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18003B640 (_TlgCreateSz.c)
 *     GetImageTuple @ 0x18004BE34 (GetImageTuple.c)
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
  const CHAR *v9; // rdx
  int v10; // ecx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  UINT32 cData; // r10d
  bool v14; // zf
  UCHAR v15; // dl
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
    ImageTuple = GetImageTuple(&_ImageBase, v36, v6, &v17, &v16);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v8 = (char *)&_ImageBase + v16, v8 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v8 )
    {
      v18 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v18 = 0;
    }
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1800671D0, 0LL, 0LL);
    if ( dword_1800671D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800671D0, 0x400000000000uLL) )
    {
      v24 = 4LL;
      v23 = &v19;
      v9 = v36;
      v26 = 4LL;
      v25 = &v18;
      v19 = 9;
      v28 = 4LL;
      v30 = 4LL;
      v27 = &v17;
      v17 = ImageTuple != 0 ? v17 : 0;
      v29 = &v16;
      v16 &= -(ImageTuple != 0);
      if ( !ImageTuple )
        v9 = "<unknown>";
      TlgCreateSz(&pDesc, v9);
      v10 = *((_DWORD *)v2 + 3);
      v32 = &v20;
      v21 = *((_DWORD *)v2 + 4);
      v34 = &v21;
      v20 = v10;
      v33 = 4LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800671D0, &unk_18005C07D, v11, v12, cData, &pData);
    }
    EtwEventUnregister(qword_1800671F0);
    qword_1800671F0 = 0LL;
    dword_1800671D0 = 0;
    v14 = *((_DWORD *)v2 + 4) == 1;
    *((_DWORD *)v2 + 3) = 0;
    if ( v14 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180067190, 0LL, 0LL);
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_180067190, v15, 0LL) )
        Sleep(0x3E8u);
      EtwEventUnregister(qword_1800671B0);
      qword_1800671B0 = 0LL;
      dword_180067190 = 0;
    }
  }
LABEL_23:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
