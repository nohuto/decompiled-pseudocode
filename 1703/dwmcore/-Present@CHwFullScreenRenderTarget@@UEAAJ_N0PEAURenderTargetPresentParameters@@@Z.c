/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180070180
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18003A090 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1800705D0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        char a2,
        char a3,
        struct RenderTargetPresentParameters *a4)
{
  CHwDisplayRenderTarget *v6; // rcx
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rdx
  int ShouldPresent; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CHwFullScreenRenderTarget *__hidden); // rax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  bool v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = (CHwFullScreenRenderTarget *)((char *)this - 176);
  v10 = CHwDisplayRenderTarget::ShouldPresent;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(*(_QWORD *)v6 + 232LL);
  LOBYTE(v10) = a2;
  if ( v9 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v6, a2, &v19, &v18);
  else
    ShouldPresent = v9(v6, (char)v10, &v19, &v18);
  if ( ShouldPresent >= 0 && v19 && (v18 & 2) == 0 )
  {
    v13 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 200LL);
    v14 = v13 == CHwFullScreenRenderTarget::CopyFrontToBackBuffer
        ? CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this)
        : v13(this);
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDFu);
  }
  LOBYTE(v12) = a2;
  v15 = CHwDisplayRenderTarget::Present(this, v12, a3, a4);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF7u);
  return v16;
}
