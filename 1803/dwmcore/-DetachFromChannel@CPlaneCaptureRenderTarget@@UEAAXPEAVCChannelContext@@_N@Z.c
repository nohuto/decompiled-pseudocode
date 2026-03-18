/*
 * XREFs of ?DetachFromChannel@CPlaneCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18016EF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPlaneCaptureRenderTarget::DetachFromChannel(
        CPlaneCaptureRenderTarget *this,
        struct CChannelContext *a2)
{
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *))(**((_QWORD **)this + 7) + 128LL))(
    *((_QWORD *)this + 7),
    a2);
}
