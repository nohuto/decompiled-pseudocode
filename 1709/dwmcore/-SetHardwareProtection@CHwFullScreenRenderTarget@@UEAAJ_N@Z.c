/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801B8B80
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WMA@EAAJ_N@Z @ 0x1800C6D40 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WMA@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x1801BA470 (-SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rdx
  signed int v5; // eax
  unsigned int v6; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
  {
    LOBYTE(v4) = a2;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 29) + 216LL))(*((_QWORD *)this + 29), v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x2CFu);
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v6;
}
