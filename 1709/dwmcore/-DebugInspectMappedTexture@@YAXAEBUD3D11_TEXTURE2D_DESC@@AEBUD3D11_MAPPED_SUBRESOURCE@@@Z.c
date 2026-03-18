/*
 * XREFs of ?DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18018E69C
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReadTexture@CColorKeyBitmap@@UEAAXXZ @ 0x1801D1B00 (-ReadTexture@CColorKeyBitmap@@UEAAXXZ.c)
 * Callees:
 *     IsSolidColorTexture @ 0x18018EA74 (IsSolidColorTexture.c)
 */

void __fastcall DebugInspectMappedTexture(
        const struct D3D11_TEXTURE2D_DESC *a1,
        const struct D3D11_MAPPED_SUBRESOURCE *a2)
{
  int *pData; // r8
  int v3; // edx
  int v4; // ecx

  if ( byte_18026E30C )
  {
    if ( !g_LockTilingTarget || g_LockAndReadTarget )
    {
      IsSolidColorTexture(a1);
      __debugbreak();
    }
    else
    {
      pData = (int *)a2->pData;
      v3 = *((_DWORD *)a2->pData + ((unsigned __int64)(a2->RowPitch * a1->Height) >> 2) - 1);
      v4 = *pData;
      if ( (_BYTE)v3 == 0xFF && __PAIR16__(BYTE1(v3), -1) == BYTE2(v3)
        || (_BYTE)v4 == 0xFF && __PAIR16__(BYTE1(v4), -1) == BYTE2(v4) )
      {
        __debugbreak();
      }
    }
  }
}
