/*
 * XREFs of McTemplateU0qq @ 0x180034C9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___::Run @ 0x180034820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___--Run.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qq(__int64 a1, EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-48h] BYREF
  int *v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 4;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, a2, 3u, &v5);
}
