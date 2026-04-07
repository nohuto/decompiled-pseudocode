/*
 * XREFs of EtwppTemplate_q @ 0x18007D15C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B780 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180096B08 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 __fastcall EtwppTemplate_q(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *a1;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 **))EtwEventWrite)(v3, a2, 1LL, &v5);
}
