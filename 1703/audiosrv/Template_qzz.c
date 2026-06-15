/*
 * XREFs of Template_qzz @ 0x1800B5128
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800B4A2C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qzz(__int64 a1, __int64 a2, int a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // edx
  const wchar_t *v9; // rcx
  bool v10; // zf
  _QWORD v12[3]; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  const wchar_t *v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = a3;
  v12[1] = 4LL;
  v12[0] = &v18;
  v5 = -1LL;
  v6 = 10;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v9 = a5;
  v13 = v8;
  v14 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v12[2] = a4;
  v10 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v6 = 2 * v5 + 2;
    v10 = a5 == 0LL;
  }
  if ( v10 )
    v9 = L"NULL";
  v16 = v6;
  v15 = v9;
  v17 = 0;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, &EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT, 3LL, v12);
}
