/*
 * XREFs of ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x1801A3ED0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x180182900 (-SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessSetTransformMatrix(
        CCachedVisualImage **this,
        const struct CResourceTable *a2,
        const struct MILCMD_SNAPSHOT_SETTRANSFORMMATRIX *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CCachedVisualImage::SetRenderTransform(this[9], (const struct _D3DMATRIX *)((char *)a3 + 8));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC2u);
  return v4;
}
