/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *this)
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
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  __int64 *v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  __int64 *v19; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  char *v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h]
  char *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  char *v25; // [rsp+D8h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  char *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]

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
          v27 = (char *)this + 64;
          v16 = 16LL;
          v18 = 8LL;
          v20 = 8LL;
          v22 = 4LL;
          v24 = 4LL;
          v26 = 4LL;
          v28 = 8LL;
          TlgWrite(v5, &unk_14006F9B2, v6, v7, 9u, &pData);
        }
      }
    }
    else
    {
      if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000000uLL) )
      {
        v15 = *((_QWORD *)this + 5);
        v17 = &v11;
        v19 = &v12;
        v21 = (char *)this + 48;
        v23 = (char *)this + 52;
        v25 = (char *)this + 56;
        v27 = (char *)this + 64;
        v16 = 16LL;
        v18 = 8LL;
        v20 = 8LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 8LL;
        TlgWrite(v8, &unk_14006FAF6, v9, v10, 9u, &pData);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
