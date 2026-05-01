/*
 * XREFs of McTemplateU0q @ 0x1800610F8
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     _lambda_9d6c54c6eac66a68e681dddf193e983c_::operator() @ 0x18009117C (_lambda_9d6c54c6eac66a68e681dddf193e983c_--operator().c)
 *     _lambda_7aef9f6174acb3d73b407d8c046faaf1_::operator() @ 0x18011724C (_lambda_7aef9f6174acb3d73b407d8c046faaf1_--operator().c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180184508 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0q(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3)
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
