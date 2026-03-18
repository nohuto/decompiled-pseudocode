/*
 * XREFs of ?PostPresent@CHolographicClient@@UEAAJXZ @ 0x1801A7FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1801A4D5C (-UpdateFrameStatistics@CHolographicExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall CHolographicClient::PostPresent(CHolographicClient *this)
{
  struct DXGI_FRAME_STATISTICS v3; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_QWORD *)this + 17) )
  {
    (*(void (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 1) + 112LL))(
      *((_QWORD *)this + 1),
      &v3);
    CHolographicExclusiveView::UpdateFrameStatistics(*((CHolographicExclusiveView **)this + 17), &v3);
  }
  NtTokenManagerConfirmOutstandingAnalogToken();
  return 0LL;
}
