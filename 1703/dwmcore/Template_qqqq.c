/*
 * XREFs of Template_qqqq @ 0x18013BCF4
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180006ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800442F0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065C28 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E70C (-UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157C00 (-ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, char a5, char a6)
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
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 4u, &UserData);
}
