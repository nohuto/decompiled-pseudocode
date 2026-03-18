/*
 * XREFs of ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180016320
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@WDA@EBA?AUPixelFormatInfo@@XZ @ 0x1800C5ED0 (-GetPixelFormatInfo@CDesktopRenderTarget@@WDA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CHwndRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180019CC0 (-GetPixelFormatInfo@CHwndRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 PixelFormatInfo; // rax
  unsigned int v5; // esi
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 80) )
  {
    PixelFormatInfo = CHwndRenderTarget::GetPixelFormatInfo(**(_QWORD **)(a1 + 56) + 64LL, v7);
    v5 = 1;
    *(_QWORD *)a2 = *(_QWORD *)PixelFormatInfo;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(PixelFormatInfo + 8);
    if ( *(_DWORD *)(a1 + 80) > 1u )
    {
      while ( 1 )
      {
        CHwndRenderTarget::GetPixelFormatInfo(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v5) + 64LL, v7);
        if ( LODWORD(v7[0]) != 87 && LODWORD(v7[0]) != 28 )
          break;
        if ( ++v5 >= *(_DWORD *)(a1 + 80) )
          return a2;
      }
      *(_DWORD *)a2 = 10;
    }
  }
  else
  {
    v7[0] = 87LL;
    *(_QWORD *)a2 = 87LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
