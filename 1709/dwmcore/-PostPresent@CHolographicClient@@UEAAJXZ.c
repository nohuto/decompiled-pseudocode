/*
 * XREFs of ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1801C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1801BDDD8 (-UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall CHolographicClient::PostPresent(CHolographicClient *this)
{
  __int64 v1; // rax
  DXGI_FRAME_STATISTICS v4; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 17);
  if ( v1 && !*(_BYTE *)(v1 + 75) )
  {
    (*(void (__fastcall **)(_QWORD, DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 1) + 160LL))(
      *((_QWORD *)this + 1),
      &v4);
    CHolographicExclusiveView::UpdateFrameStatistics(*((CHolographicExclusiveView **)this + 17), &v4);
  }
  NtTokenManagerConfirmOutstandingAnalogToken();
  return 0LL;
}
