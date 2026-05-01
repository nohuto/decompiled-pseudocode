/*
 * XREFs of McTemplateU0q @ 0x180034D08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___::Run @ 0x180034630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___::Run @ 0x180034820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d6c54c6eac66a68e681dddf193e983c___--Run.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1800D1A0C (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0q(__int64 a1, EVENT_DESCRIPTOR *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-38h] BYREF
  int *v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, a2, 2u, &v4);
}
