/*
 * XREFs of ?DetachFromChannel@CPlaneCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180146EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPlaneCaptureRenderTarget::DetachFromChannel(
        CPlaneCaptureRenderTarget *this,
        struct CChannelContext *a2)
{
  (*(void (__fastcall **)(char *, struct CChannelContext *))(*((_QWORD *)this + 7) + 128LL))((char *)this + 56, a2);
}
