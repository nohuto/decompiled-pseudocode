/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x180060C90
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18005F57C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180061C44 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, bool a2, int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  _BYTE v9[36]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+54h] [rbp-24h]

  v3 = 0;
  if ( *(int *)(*((_QWORD *)this - 6) + 1184LL) < 4 )
  {
    memset_0(v9, 0, 0x28uLL);
    v10 = a3;
    v7 = CHwndRenderTarget::InternalPresent(
           (CHwndRenderTarget *)((char *)this - 64),
           a2,
           (const struct RenderTargetPresentParameters *)v9);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5E0u);
  }
  return v3;
}
