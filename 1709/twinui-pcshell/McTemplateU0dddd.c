/*
 * XREFs of McTemplateU0dddd @ 0x180034C0C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___::Run @ 0x180034630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1___--Run.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1800D1A0C (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180025C48 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

ULONG McTemplateU0dddd(_DWORD a1, EVENT_DESCRIPTOR *a2, int a3, int a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-60h] BYREF
  int *v6; // [rsp+30h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-48h]
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  va_list v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  va_list v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+B0h] [rbp+30h]
  va_list va1; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v16 = va_arg(va1, _QWORD);
  v15 = a4;
  v14 = a3;
  v7 = 4LL;
  v6 = &v14;
  v9 = 4LL;
  v8 = &v15;
  v11 = 4LL;
  va_copy(v10, va);
  v13 = 4LL;
  va_copy(v12, va1);
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, a2, 5u, &v5);
}
