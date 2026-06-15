/*
 * XREFs of McTemplateU0zq @ 0x18001022C
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180011370 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800101BC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zq(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]
  int *v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = (unsigned int)(2 * v4 + 2);
  }
  else
  {
    v5 = 10LL;
  }
  v11 = 0;
  v6 = L"NULL";
  v10 = v5;
  if ( a3 )
    v6 = a3;
  v13 = 4LL;
  v9 = v6;
  v12 = &v14;
  return McGenEventWriteUM(v5, &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, 3u, &v8);
}
