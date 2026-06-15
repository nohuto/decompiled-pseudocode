/*
 * XREFs of McTemplateU0zqq @ 0x180027FB8
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180028110 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800101BC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zqq(__int64 a1, EVENT_DESCRIPTOR *a2, const wchar_t *a3, int a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
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
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v12 = 0;
  v7 = L"NULL";
  v11 = v6;
  if ( a3 )
    v7 = a3;
  v10 = v7;
  v14 = 4LL;
  v13 = &v17;
  v15 = &a5;
  v16 = 4LL;
  return McGenEventWriteUM(v6, a2, 4u, &v9);
}
