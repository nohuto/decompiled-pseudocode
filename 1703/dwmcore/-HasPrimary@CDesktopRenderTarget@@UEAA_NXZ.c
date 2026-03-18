/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180069ED0
 * Callers:
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18006BEE0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
      v5 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v4 + 208LL);
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
