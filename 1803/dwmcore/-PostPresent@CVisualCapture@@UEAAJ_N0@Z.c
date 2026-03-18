/*
 * XREFs of ?PostPresent@CVisualCapture@@UEAAJ_N0@Z @ 0x18000CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18000CBC4 (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::PostPresent(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 64));
  if ( !*((_BYTE *)this + 385) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 552LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this - 6) + 552LL),
      0LL,
      1024LL);
  return 0LL;
}
