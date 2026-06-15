/*
 * XREFs of ?UpdateServiceActionToRestart@CAudioHealthMonitor@@QEAAJXZ @ 0x1800801D0
 * Callers:
 *     ?ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x180080080 (-ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioHealthMonitor::UpdateServiceActionToRestart(CAudioHealthMonitor *this)
{
  signed int v1; // ebx
  SC_HANDLE v2; // rax
  SC_HANDLE v3; // r14
  signed int v4; // eax
  SC_HANDLE v5; // rbp
  signed int v6; // eax
  signed int v7; // eax
  BYTE *v8; // rdi
  signed int LastError; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  signed int v14; // eax
  DWORD cbBufSize; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]
  signed int Buffer; // [rsp+58h] [rbp+10h] BYREF

  v17 = HIDWORD(this);
  v1 = 0;
  cbBufSize = 0;
  Buffer = 0;
  v2 = OpenSCManagerW(0LL, 0LL, 1u);
  v3 = v2;
  if ( v2 )
  {
    v5 = OpenServiceW(v2, L"AudioSrv", 0xF01FFu);
    if ( v5 )
    {
      if ( QueryServiceConfig2W(v5, 2u, (LPBYTE)&Buffer, 4u, &cbBufSize)
        || (v7 = GetLastError(), Buffer = v7, v7 == 122)
        || (v7 > 0 ? (v1 = (unsigned __int16)v7 | 0x80070000) : (v1 = v7), v1 >= 0) )
      {
        v8 = (BYTE *)LocalAlloc(0, cbBufSize);
        if ( QueryServiceConfig2W(v5, 2u, v8, cbBufSize, &cbBufSize) )
          goto LABEL_17;
        LastError = GetLastError();
        v1 = LastError;
        if ( LastError > 0 )
          v1 = (unsigned __int16)LastError | 0x80070000;
        if ( v1 >= 0 )
        {
LABEL_17:
          v10 = 0;
          v11 = 0LL;
          if ( *((_DWORD *)v8 + 6) )
          {
            do
            {
              v12 = *((_QWORD *)v8 + 4);
              if ( !*(_DWORD *)(v12 + 8 * v11) )
              {
                *(_DWORD *)(v12 + 8 * v11) = 1;
                if ( (_DWORD)v11 )
                  v13 = *(_DWORD *)(*((_QWORD *)v8 + 4) + 8LL * (unsigned int)(v11 - 1) + 4) + 60000;
                else
                  v13 = 60000;
                *(_DWORD *)(*((_QWORD *)v8 + 4) + 8 * v11 + 4) = v13;
                v10 = 1;
              }
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < *((_DWORD *)v8 + 6) );
            if ( v10 )
            {
              if ( !ChangeServiceConfig2W(v5, 2u, v8) )
              {
                v14 = GetLastError();
                v1 = v14;
                if ( v14 > 0 )
                  v1 = (unsigned __int16)v14 | 0x80070000;
              }
            }
          }
        }
        if ( v8 )
          LocalFree(v8);
      }
    }
    else
    {
      v6 = GetLastError();
      v1 = v6;
      if ( v6 > 0 )
        v1 = (unsigned __int16)v6 | 0x80070000;
    }
    CloseServiceHandle(v3);
    if ( v5 )
      CloseServiceHandle(v5);
  }
  else
  {
    v4 = GetLastError();
    v1 = v4;
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  return (unsigned int)v1;
}
