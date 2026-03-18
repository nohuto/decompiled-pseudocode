/*
 * XREFs of ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x180159560
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008DC1C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::PerformDelayedSnapshot(CCachedVisualImage *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-24h] BYREF
  struct tagRECT v7; // [rsp+38h] [rbp-20h] BYREF

  CCachedVisualImage::GetCurrentSize(this, &v5, &v6);
  v7.left = 0;
  v7.top = 0;
  v7.right = v5;
  v7.bottom = v6;
  v2 = CCachedVisualImage::Snapshot(this, &v7);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x5CAu);
  return v3;
}
