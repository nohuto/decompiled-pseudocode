/*
 * XREFs of McTemplateU0qzz @ 0x1800E1EB0
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800E17B4 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qzz(__int64 a1, __int64 a2, int a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // edx
  const wchar_t *v9; // rcx
  bool v10; // zf
  _BYTE v12[16]; // [rsp+20h] [rbp-50h] BYREF
  int *v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  const wchar_t *v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  const wchar_t *v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+90h] [rbp+20h] BYREF

  v21 = a3;
  v14 = 4LL;
  v13 = &v21;
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
  v16 = v8;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
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
  v19 = v6;
  v18 = v9;
  v20 = 0;
  return McGenEventWriteUM(
           AUDIO_EVENT_PROVIDER_Context,
           &EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT,
           4LL,
           (__int64)v12);
}
