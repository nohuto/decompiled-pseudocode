/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800162B0
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDesktopRenderTarget::HasPrimary(CDesktopRenderTarget *this)
{
  char v1; // bl
  unsigned int v3; // edi
  CHwndRenderTarget *v4; // rcx
  bool (__fastcall *v5)(CHwndRenderTarget *__hidden); // rax
  char v6; // al

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v4 = *(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v3);
      v5 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v4 + 224LL);
      v6 = v5 == CHwndRenderTarget::IsPrimaryMonitor
         ? CHwndRenderTarget::IsPrimaryMonitor(v4)
         : ((__int64 (*)(void))v5)();
      if ( v6 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 8) )
        return v1;
    }
    return 1;
  }
  return v1;
}
