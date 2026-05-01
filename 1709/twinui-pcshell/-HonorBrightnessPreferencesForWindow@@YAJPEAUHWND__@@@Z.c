/*
 * XREFs of ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x1801BF4BC
 * Callers:
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18003AB00 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003ACDC (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 * Callees:
 *     WPP_SF_D @ 0x1801BF47C (WPP_SF_D.c)
 */

__int64 __fastcall HonorBrightnessPreferencesForWindow(HWND a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  HWND v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v1 = -1073741823;
  if ( a1 )
  {
    v1 = RtlPublishWnfStateData(WNF_BRI_ACTIVE_WINDOW, 0LL, &v5, 8LL, 0LL);
    if ( (v1 & 0xC0000000) == 0xC0000000
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v2, v3, v1);
    }
  }
  return v1;
}
