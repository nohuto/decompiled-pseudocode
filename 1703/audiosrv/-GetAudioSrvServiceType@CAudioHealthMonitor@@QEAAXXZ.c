/*
 * XREFs of ?GetAudioSrvServiceType@CAudioHealthMonitor@@QEAAXXZ @ 0x180034480
 * Callers:
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800343C8 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioHealthMonitor::GetAudioSrvServiceType(CAudioHealthMonitor *this)
{
  SC_HANDLE v2; // rax
  SC_HANDLE v3; // rsi
  SC_HANDLE v4; // rax
  SC_HANDLE v5; // rbx
  signed int LastError; // eax
  struct _QUERY_SERVICE_CONFIGW *v7; // rax
  struct _QUERY_SERVICE_CONFIGW *v8; // rdi
  bool v9; // sf
  signed int v10; // eax
  bool v11; // sf
  DWORD pcbBytesNeeded; // [rsp+38h] [rbp+10h] BYREF

  pcbBytesNeeded = 0;
  v2 = OpenSCManagerW(0LL, 0LL, 1u);
  v3 = v2;
  if ( v2 )
  {
    v4 = OpenServiceW(v2, L"AudioSrv", 0xF01FFu);
    v5 = v4;
    if ( v4 )
    {
      if ( QueryServiceConfigW(v4, 0LL, 0, &pcbBytesNeeded) )
        goto LABEL_5;
      LastError = GetLastError();
      if ( LastError == 122 )
        goto LABEL_5;
      v9 = LastError < 0;
      if ( LastError > 0 )
        v9 = 1;
      if ( !v9 )
      {
LABEL_5:
        v7 = (struct _QUERY_SERVICE_CONFIGW *)LocalAlloc(0, pcbBytesNeeded);
        v8 = v7;
        if ( v7 )
        {
          if ( QueryServiceConfigW(v5, v7, pcbBytesNeeded, &pcbBytesNeeded) )
            goto LABEL_7;
          v10 = GetLastError();
          v11 = v10 < 0;
          if ( v10 > 0 )
            v11 = 1;
          if ( !v11 )
LABEL_7:
            *((_DWORD *)this + 4) = v8->dwServiceType;
          LocalFree(v8);
        }
      }
    }
    else
    {
      GetLastError();
    }
    CloseServiceHandle(v3);
    if ( v5 )
      CloseServiceHandle(v5);
  }
  else
  {
    GetLastError();
  }
}
