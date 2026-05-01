/*
 * XREFs of ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000F150
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::LogTimedOutRevocationRequests(ExecutionModel::ResourceManager *this)
{
  _QWORD *v1; // rsi
  DWORD TickCount; // eax
  _QWORD *v3; // rbx
  DWORD v4; // ebp
  __int64 v5; // rdi
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // [rsp+30h] [rbp-98h] BYREF
  int v9; // [rsp+34h] [rbp-94h] BYREF
  int v10; // [rsp+38h] [rbp-90h] BYREF
  __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-58h]
  __int64 v14; // [rsp+78h] [rbp-50h]
  int *v15; // [rsp+80h] [rbp-48h]
  __int64 v16; // [rsp+88h] [rbp-40h]
  int *v17; // [rsp+90h] [rbp-38h]
  __int64 v18; // [rsp+98h] [rbp-30h]
  int *v19; // [rsp+A0h] [rbp-28h]
  __int64 v20; // [rsp+A8h] [rbp-20h]

  v1 = (_QWORD *)(*((_QWORD *)this + 13) + 160LL);
  TickCount = GetTickCount();
  v3 = (_QWORD *)*v1;
  v4 = TickCount;
  while ( v3 != v1 )
  {
    v5 = v3[2];
    if ( (*(_BYTE *)(v5 + 1404) & 1) != 0
      && *(_DWORD *)(v5 + 1400)
      && (*(_BYTE *)(v5 + 1452) & 8) == 0
      && v4 - *(_DWORD *)(v5 + 1916) >= 0x2710 )
    {
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
        {
          v11 = *(_QWORD *)(v5 + 1896);
          v13 = &v11;
          v8 = *(_DWORD *)(v5 + 1456);
          v15 = &v8;
          v9 = *(_DWORD *)(v5 + 1472);
          v17 = &v9;
          v10 = *(_DWORD *)(v5 + 136);
          v19 = &v10;
          v14 = 8LL;
          v16 = 4LL;
          v18 = 4LL;
          v20 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055EFC, v6, v7, 6u, &pData);
        }
      }
      *(_DWORD *)(v5 + 1452) |= 8u;
    }
    v3 = (_QWORD *)*v3;
  }
}
