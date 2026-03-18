/*
 * XREFs of ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180034F10
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18005BAA0 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CResource::DetachFromChannel(CResource *this, struct CChannelContext *a2)
{
  if ( a2 == *((struct CChannelContext **)this + 6) )
    *((_QWORD *)this + 6) = 0LL;
}
