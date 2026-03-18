/*
 * XREFs of ?GetPixelFormatInfo@CHwndRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800629B0
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800444B0 (-GetPixelFormatInfo@CDesktopRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 112));
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 40);
  }
  return a2;
}
