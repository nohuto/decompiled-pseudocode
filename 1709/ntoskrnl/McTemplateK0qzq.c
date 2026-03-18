/*
 * XREFs of McTemplateK0qzq @ 0x1401FD578
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     McGenEventWriteKM @ 0x140133874 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qzq(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, char a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-50h] BYREF
  int *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  const wchar_t *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  char *v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+A8h] [rbp+28h] BYREF

  v18 = a4;
  v6 = a5;
  v11 = &v18;
  v12 = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v17 = 4LL;
  v13 = v6;
  v16 = &a6;
  return McGenEventWriteKM(MS_KernelPnP_Provider_Context, &KMPnPEvt_DriverOverride_SetOverride, 0LL, 4u, &v10);
}
