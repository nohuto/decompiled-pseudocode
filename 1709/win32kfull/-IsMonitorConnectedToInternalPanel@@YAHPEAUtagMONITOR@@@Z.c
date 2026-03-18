/*
 * XREFs of ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01AC340
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1C0042E30 (NtUserSetActiveProcessForMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall IsMonitorConnectedToInternalPanel(struct tagMONITOR *a1)
{
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-E8h] BYREF
  int v5; // [rsp+24h] [rbp-E4h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-D8h] BYREF
  int v8; // [rsp+40h] [rbp-C8h]
  int v9; // [rsp+44h] [rbp-C4h]
  int v10; // [rsp+48h] [rbp-C0h]

  v2 = 1;
  v4 = 1;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v4, v7, 0LL) < 0
    || !(unsigned int)DrvGetWDDMAdapterInfo(*((_QWORD *)a1 + 29), 0LL, v6, &v5) )
  {
    return 0LL;
  }
  if ( v6[0] != v8 || v6[1] != v9 || v5 != v10 )
    return 0;
  return v2;
}
