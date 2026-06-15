/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005D410
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1400012EC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // [rsp+48h] [rbp-59h] BYREF
  __int64 v12; // [rsp+50h] [rbp-51h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  __int64 v15; // [rsp+88h] [rbp-19h]
  __int64 v16; // [rsp+90h] [rbp-11h]
  __int64 *v17; // [rsp+98h] [rbp-9h]
  __int64 v18; // [rsp+A0h] [rbp-1h]
  __int64 *v19; // [rsp+A8h] [rbp+7h]
  __int64 v20; // [rsp+B0h] [rbp+Fh]
  char *v21; // [rsp+B8h] [rbp+17h]
  __int64 v22; // [rsp+C0h] [rbp+1Fh]
  char *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  char *v25; // [rsp+D8h] [rbp+37h]
  __int64 v26; // [rsp+E0h] [rbp+3Fh]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = 10000 * (**((_QWORD **)this + 3) - TickCount64);
    v11 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v12 = v3 + *(_QWORD *)&SystemTimeAsFileTime;
    v4 = (const struct _TlgProvider_t *)**((_QWORD **)this + 4);
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v4 > 3u )
      {
        if ( TlgKeywordOn(v4, 0x200000000000uLL) )
        {
          v15 = *((_QWORD *)this + 5);
          v17 = &v11;
          v19 = &v12;
          v21 = (char *)this + 48;
          v23 = (char *)this + 52;
          v25 = (char *)this + 56;
          v16 = 16LL;
          v18 = 8LL;
          v20 = 8LL;
          v22 = 4LL;
          v24 = 4LL;
          v26 = 4LL;
          TlgWrite(v5, &unk_140072C50, v6, v7, 8u, &pData);
        }
      }
    }
    else if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v15 = *((_QWORD *)this + 5);
      v17 = &v11;
      v19 = &v12;
      v21 = (char *)this + 48;
      v23 = (char *)this + 52;
      v25 = (char *)this + 56;
      v16 = 16LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      TlgWrite(v8, &unk_140072CED, v9, v10, 8u, &pData);
    }
  }
}
