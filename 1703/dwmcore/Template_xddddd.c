/*
 * XREFs of Template_xddddd @ 0x1801523D4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B57F0 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B58EC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xddddd(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-49h] BYREF
  int *v10; // [rsp+30h] [rbp-39h]
  __int64 v11; // [rsp+38h] [rbp-31h]
  char *v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  char *v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  char *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  char *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+C0h] [rbp+57h] BYREF
  int v21; // [rsp+C8h] [rbp+5Fh] BYREF

  v21 = a4;
  v20 = a3;
  UserData.Ptr = (ULONGLONG)&v20;
  *(_QWORD *)&UserData.Size = 8LL;
  v10 = &v21;
  v11 = 4LL;
  v12 = &a5;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 6u, &UserData);
}
