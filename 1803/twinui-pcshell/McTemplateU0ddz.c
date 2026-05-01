/*
 * XREFs of McTemplateU0ddz @ 0x1802F75F8
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F6D70 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ddz(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-50h] BYREF
  int *v6; // [rsp+30h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  int *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const wchar_t *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+90h] [rbp+20h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = 14LL;
  v7 = 4LL;
  v6 = &v12;
  v9 = 4LL;
  v8 = &v13;
  v10 = L"Gutter";
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, &ImmersiveShell_UI_Drag_Info, 4u, &v5);
}
