/*
 * XREFs of ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801DF1EC
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801EBE80 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802146D8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180075288 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x1801E0248 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 */

void __fastcall CD3DDeviceLevel1::CopyTextureRect(
        CD3DDeviceLevel1 *this,
        struct CD3DTexture *a2,
        const struct tagRECT *a3,
        struct CD3DTexture *a4,
        const struct tagPOINT *a5)
{
  unsigned int v5; // edi
  int v7; // esi
  struct ID3D11Resource *D3D11ResourceNoRef; // rbx
  struct ID3D11Resource *v12; // rax

  v5 = *((_DWORD *)a4 + 43);
  v7 = *((_DWORD *)a2 + 43);
  D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(a4);
  v12 = CD3DTexture::GetD3D11ResourceNoRef(a2);
  CD3DDeviceLevel1::CopySubresourceRectInternal1(this, v12, v7, a3, D3D11ResourceNoRef, v5, a5, 1u);
  if ( g_LockAndReadCopyOfTexture )
  {
    DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 15), 0);
    DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 15), 0);
  }
}
