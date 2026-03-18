/*
 * XREFs of Template_dddd @ 0x1801A0890
 * Callers:
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801A01C0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_dddd(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  int *v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  char *v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  char *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  UserData.Ptr = (ULONGLONG)&v14;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &v15;
  v9 = 4LL;
  v10 = &a5;
  v11 = 4LL;
  v12 = &a6;
  v13 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT, 4u, &UserData);
}
