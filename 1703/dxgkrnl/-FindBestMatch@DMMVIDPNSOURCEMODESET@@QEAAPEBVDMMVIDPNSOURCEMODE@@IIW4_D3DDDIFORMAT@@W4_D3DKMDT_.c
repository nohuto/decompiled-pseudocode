/*
 * XREFs of ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0009C50
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E3C94 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0008600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::FindBestMatch(
        DMMVIDPNSOURCEMODESET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a5)
{
  int v5; // r14d
  DMMVIDPNSOURCEMODESET *v6; // rbx
  int v7; // r15d
  int v8; // ebp
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  UINT cy; // edx

  v5 = a4;
  v6 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
  v7 = a3;
  v8 = a2;
  if ( v6 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v6 - 8);
  if ( !NextMode )
    return 0LL;
  while ( 1 )
  {
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode, a2, a3, a4);
    if ( *((_DWORD *)NextMode + 18) == a5 && GraphicsInfo->PrimSurfSize.cx == v8 )
    {
      cy = GraphicsInfo->PrimSurfSize.cy;
      if ( cy == v7
        && GraphicsInfo->PixelFormat == v5
        && GraphicsInfo->VisibleRegionSize.cx == GraphicsInfo->PrimSurfSize.cx
        && GraphicsInfo->VisibleRegionSize.cy == cy )
      {
        break;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode, v12, v13);
    if ( !NextMode )
      return 0LL;
  }
  return NextMode;
}
