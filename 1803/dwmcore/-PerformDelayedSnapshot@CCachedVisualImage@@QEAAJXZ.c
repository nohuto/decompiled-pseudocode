/*
 * XREFs of ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801826F0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::PerformDelayedSnapshot(CCachedVisualImage *this)
{
  int v2; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x5C5u);
  return v3;
}
