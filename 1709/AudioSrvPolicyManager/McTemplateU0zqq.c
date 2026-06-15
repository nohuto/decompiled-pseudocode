/*
 * XREFs of McTemplateU0zqq @ 0x18001EA80
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18000B3A4 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqq(__int64 a1, EVENT_DESCRIPTOR *a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  const wchar_t *v7; // rax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+20h] [rbp-50h] BYREF
  const wchar_t *v10; // [rsp+30h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  int *v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  char *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v11 = v6;
  v12 = 0;
  v7 = L"NULL";
  if ( a3 )
    v7 = a3;
  v10 = v7;
  v13 = &v17;
  v15 = &a5;
  v14 = 4LL;
  v16 = 4LL;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, a2, 4u, &v9);
}
