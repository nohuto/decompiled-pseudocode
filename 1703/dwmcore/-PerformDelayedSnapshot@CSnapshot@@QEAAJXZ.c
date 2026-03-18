/*
 * XREFs of ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180165104
 * Callers:
 *     ?PerformQueuedSnapshots@CComposition@@QEAAJXZ @ 0x18005BC84 (-PerformQueuedSnapshots@CComposition@@QEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CSnapshot::PerformDelayedSnapshot(CSnapshot *this)
{
  unsigned int v2; // edi
  CCachedVisualImage *v3; // rcx
  LONG v4; // eax
  int v5; // eax
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CCachedVisualImage *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 14);
    v7.left = 0;
    v7.top = 0;
    v7.right = v4;
    v7.bottom = *((_DWORD *)this + 15);
    *((_BYTE *)this + 80) = 1;
    v5 = CCachedVisualImage::Snapshot(v3, &v7);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x87u);
    *((_BYTE *)this + 80) = 0;
  }
  return v2;
}
