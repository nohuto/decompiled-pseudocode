/*
 * XREFs of ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x18012DC90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x180165A88 (-SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD5u);
  return v4;
}
