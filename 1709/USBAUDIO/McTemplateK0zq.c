/*
 * XREFs of McTemplateK0zq @ 0x1C0001994
 * Callers:
 *     DeviceStart @ 0x1C0013270 (DeviceStart.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000185C (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zq(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+4Ch] [rbp-2Ch]
  char *v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v12 = 0;
  v7 = L"NULL";
  v11 = v6;
  if ( a4 )
    v7 = a4;
  v14 = 4LL;
  v10 = v7;
  v13 = &a5;
  return McGenEventWriteKM(v6, &EXBUS_DEVICE_START_EXIT, a3, 3u, &v9);
}
