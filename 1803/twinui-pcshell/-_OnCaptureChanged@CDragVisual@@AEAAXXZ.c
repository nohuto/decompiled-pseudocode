/*
 * XREFs of ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1802F2F38
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4300 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x1802F2EBC (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnCaptureChanged(CDragVisual *this)
{
  HWND Capture; // rax
  HWND v3; // rdi
  __int64 v4; // rax
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  Capture = GetCapture();
  v3 = Capture;
  if ( *((_BYTE *)this + 324) && Capture != *((HWND *)this + 19) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
           &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
           &ppvOut) < 0
      || (v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 96LL))(ppvOut)) == 0
      || v3 != (HWND)v4 )
    {
      *((_BYTE *)this + 324) = 0;
      CDragVisual::_OnCancelDrag(this);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
}
