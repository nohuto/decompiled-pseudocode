/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801FBBB8
 * Callers:
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x1801FB900 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTER.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(CHolographicInteropTexture *this, struct CVisual *a2)
{
  struct CVisualTree *v2; // rbx
  int VisualTree; // eax
  unsigned int v5; // edi
  int v6; // eax
  CMILRefCountBase *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v8);
    v5 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0xE3u);
      v2 = v8;
      goto LABEL_7;
    }
    v2 = v8;
  }
  v6 = CHolographicInteropTexture::SetVisualTree(this, v2);
  v5 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xE6u);
LABEL_7:
  if ( v2 )
    CMILRefCountBase::Release(v2);
  return v5;
}
