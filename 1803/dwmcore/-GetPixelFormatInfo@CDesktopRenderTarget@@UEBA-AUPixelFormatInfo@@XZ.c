/*
 * XREFs of ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800444B0
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@WGI@EBA?AUPixelFormatInfo@@XZ @ 0x1800DD4E0 (-GetPixelFormatInfo@CDesktopRenderTarget@@WGI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?GetPixelFormatInfo@CHwndRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800629B0 (-GetPixelFormatInfo@CHwndRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  struct CHwndRenderTarget *Primary; // rax

  Primary = CDesktopRenderTarget::GetPrimary((CDesktopRenderTarget *)(a1 - 64));
  if ( Primary )
  {
    CHwndRenderTarget::GetPixelFormatInfo((char *)Primary + 64, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 40);
  }
  return a2;
}
