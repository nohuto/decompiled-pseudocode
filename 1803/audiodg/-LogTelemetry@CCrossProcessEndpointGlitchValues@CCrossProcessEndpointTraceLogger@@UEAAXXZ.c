/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140054D90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r8
  const struct _TlgProvider_t **v4; // rax
  const struct _TlgProvider_t *v5; // r9
  const struct _TlgProvider_t *v6; // r9
  const struct _TlgProvider_t *v7; // r9
  __int64 v8; // [rsp+38h] [rbp-D0h]
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+88h] [rbp-80h]
  __int64 v14; // [rsp+90h] [rbp-78h]
  __int64 *v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  __int64 *v17; // [rsp+A8h] [rbp-60h]
  __int64 v18; // [rsp+B0h] [rbp-58h]
  char *v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  char *v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  char *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  char *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  char *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  char *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  char *v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+120h] [rbp+18h]
  char *v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v8 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v3 = 10000 * (**((_QWORD **)this + 3) - TickCount64);
    LODWORD(v9) = 0;
    v10 = (unsigned int)(v3 + SystemTimeAsFileTime.dwLowDateTime);
    v4 = (const struct _TlgProvider_t **)*((_QWORD *)this + 4);
    v9 = v8;
    HIDWORD(v10) = (unsigned __int64)(v3 + *(_QWORD *)&SystemTimeAsFileTime) >> 32;
    v5 = *v4;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v5 > 3u )
      {
        if ( TlgKeywordOn(v5, 2uLL) )
        {
          v13 = *((_QWORD *)this + 5);
          v15 = &v9;
          v19 = (char *)this + 48;
          v21 = (char *)this + 52;
          v23 = (char *)this + 56;
          v25 = (char *)this + 60;
          v27 = (char *)this + 64;
          v29 = (char *)this + 68;
          v31 = (char *)this + 72;
          v33 = (char *)this + 76;
          v14 = 16LL;
          v16 = 8LL;
          v17 = &v10;
          v18 = 8LL;
          v20 = 4LL;
          v22 = 4LL;
          v24 = 4LL;
          v26 = 4LL;
          v28 = 4LL;
          v30 = 4LL;
          v32 = 4LL;
          v34 = 4LL;
          TlgWrite(v6, &unk_1400702A2, 0LL, (LPCGUID)v6, 0xDu, &pData);
        }
      }
    }
    else if ( *(_DWORD *)v5 > 3u && TlgKeywordOn(v5, 0x400000000002uLL) )
    {
      v13 = *((_QWORD *)this + 5);
      v15 = &v9;
      v19 = (char *)this + 48;
      v21 = (char *)this + 52;
      v23 = (char *)this + 56;
      v25 = (char *)this + 60;
      v27 = (char *)this + 64;
      v29 = (char *)this + 68;
      v31 = (char *)this + 72;
      v33 = (char *)this + 76;
      v14 = 16LL;
      v16 = 8LL;
      v17 = &v10;
      v18 = 8LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      TlgWrite(v7, &unk_14007011E, 0LL, (LPCGUID)v7, 0xDu, &pData);
    }
  }
}
