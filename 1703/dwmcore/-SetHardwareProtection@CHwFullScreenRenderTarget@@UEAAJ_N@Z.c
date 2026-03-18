/*
 * XREFs of ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801A1100
 * Callers:
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z @ 0x1800D6520 (-SetHardwareProtection@CHwFullScreenRenderTarget@@WLA@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetHardwareProtection(CHwFullScreenRenderTarget *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *((_QWORD *)this + 27);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    v7 = -2003292404;
    goto LABEL_6;
  }
  LOBYTE(v5) = a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 27) + 200LL))(*((_QWORD *)this + 27), v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 43);
    return v7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4E7u);
  return v7;
}
