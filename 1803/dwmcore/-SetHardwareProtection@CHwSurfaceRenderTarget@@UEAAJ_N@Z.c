/*
 * XREFs of ?SetHardwareProtection@CHwSurfaceRenderTarget@@UEAAJ_N@Z @ 0x1801E4B80
 * Callers:
 *     ?SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z @ 0x1801E6B10 (-SetHardwareProtection@CHwTextureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::SetHardwareProtection(CHwSurfaceRenderTarget *this, char a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 != (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 160LL))(this) )
  {
    v2 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0x4Au);
  }
  return v2;
}
