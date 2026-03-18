/*
 * XREFs of ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180196120
 * Callers:
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180077960 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180196AFC (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
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

  v5 = *((_DWORD *)a4 + 45);
  v7 = *((_DWORD *)a2 + 45);
  D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(a4);
  v12 = CD3DTexture::GetD3D11ResourceNoRef(a2);
  CD3DDeviceLevel1::CopySubresourceRectInternal1(this, v12, v7, a3, D3D11ResourceNoRef, v5, a5, 0);
  if ( g_LockAndReadCopyOfTexture )
  {
    CD3DDeviceLevel1::ReadTexture(this, *((struct ID3D11Texture2D **)a2 + 16));
    CD3DDeviceLevel1::ReadTexture(this, *((struct ID3D11Texture2D **)a4 + 16));
  }
}
