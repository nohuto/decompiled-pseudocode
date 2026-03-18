/*
 * XREFs of ?GetPixelFormat@CHwndRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180145E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPixelFormat(CHwndRenderTarget *this, enum DXGI_FORMAT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *a2 = DXGI_FORMAT_UNKNOWN;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 288LL))((char *)this - 64);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x64u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(**((_QWORD **)this + 7) + 24LL))(
           *((_QWORD *)this + 7),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x67u);
  }
  return v5;
}
