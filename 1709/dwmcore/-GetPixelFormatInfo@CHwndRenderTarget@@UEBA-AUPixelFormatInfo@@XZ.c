/*
 * XREFs of ?GetPixelFormatInfo@CHwndRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180019CC0
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180016320 (-GetPixelFormatInfo@CDesktopRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CHwndRenderTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v5; // eax

  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 - 64) + 304LL))(a1 - 64) < 0 )
  {
    v5 = *(_DWORD *)(a1 + 380);
    a2[1] = 0;
    *a2 = v5;
    a2[2] = *(_DWORD *)(a1 + 384);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56), a2);
  }
  return a2;
}
