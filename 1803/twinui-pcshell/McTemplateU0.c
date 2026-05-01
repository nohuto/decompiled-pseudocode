/*
 * XREFs of McTemplateU0 @ 0x18000ABDC
 * Callers:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1802EEF00 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x1802EF080 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1802F06E0 (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1802F1010 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1802F1F60 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1802F21D0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?Show@CDragVisual@@UEAAXXZ @ 0x1802F2480 (-Show@CDragVisual@@UEAAXXZ.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1802F3A1C (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1, __int64 a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return McGenEventWriteUM(&MICROSOFT_TWINUI_PUBLISHER_Context, a2, 1LL, v3);
}
