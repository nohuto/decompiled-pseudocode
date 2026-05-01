/*
 * XREFs of ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1800E7B54
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1800E9D6C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@PenWorkspaceBrokerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800E797C (-Provider@PenWorkspaceBrokerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded_(PenWorkspaceBrokerTelemetry *this, WCHAR *a2)
{
  const struct _TlgProvider_t *v3; // rdi
  LPWSTR FileNameW; // rax
  const WCHAR *v5; // rdx
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v3 = PenWorkspaceBrokerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    FileNameW = 0LL;
    if ( a2 )
    {
      if ( PathIsFileSpecW(a2) )
        FileNameW = a2;
      else
        FileNameW = PathFindFileNameW(a2);
    }
    v5 = &word_18021F3A8;
    LODWORD(v6) = 0;
    if ( FileNameW )
    {
      v5 = FileNameW;
      v6 = -1LL;
      do
        ++v6;
      while ( FileNameW[v6] );
    }
    v8 = v5;
    v9 = 2 * v6 + 2;
    v10 = 0;
    TlgWrite(v3, &unk_18025EC7D, 0LL, 0LL, 3u, &pData);
  }
}
