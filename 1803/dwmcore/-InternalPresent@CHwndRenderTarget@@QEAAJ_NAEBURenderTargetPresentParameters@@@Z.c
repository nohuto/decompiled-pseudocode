/*
 * XREFs of ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180061C44
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x180060C90 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CBE8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InternalPresent(
        CHwndRenderTarget *this,
        __int64 a2,
        const struct RenderTargetPresentParameters *a3)
{
  __int64 v4; // rcx
  const struct RenderTargetPresentParameters *v5; // r9
  char v6; // al
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  CHwFullScreenRenderTarget *v10; // rcx
  int (*v11)(CHwFullScreenRenderTarget *__hidden, bool, bool, const struct RenderTargetPresentParameters *); // rax
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx

  v4 = *((_QWORD *)this + 21);
  v5 = a3;
  v6 = a2;
  v7 = 0;
  if ( *(_BYTE *)(v4 + 324) )
  {
    if ( *(_BYTE *)(v4 + 325) )
    {
      v6 = a2;
      if ( !*((_BYTE *)this + 851) )
        v6 = 1;
    }
  }
  if ( (*((_BYTE *)this + 850) || v6 || *((_BYTE *)this + 849)) && !*((_BYTE *)this + 857) )
  {
    v8 = *((_QWORD *)this + 105);
    if ( !v8
      || (!*(_DWORD *)(v8 + 280) || !*(_BYTE *)(v8 + 1191))
      && ((v9 = *(_QWORD *)(v8 + 1056)) == 0 || !*(_BYTE *)(v9 + 78) || *(_BYTE *)(v9 + 76)) )
    {
      v10 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 22);
      *((_BYTE *)this + 850) = 0;
      if ( v10 )
      {
        LOBYTE(a3) = *((_BYTE *)this + 853);
        LOBYTE(a2) = *((_BYTE *)this + 849);
        v11 = *(int (**)(CHwFullScreenRenderTarget *__hidden, bool, bool, const struct RenderTargetPresentParameters *))(*(_QWORD *)v10 + 240LL);
        if ( v11 == CHwFullScreenRenderTarget::Present )
          v12 = CHwFullScreenRenderTarget::Present(v10, a2, (bool)a3, v5);
        else
          v12 = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, __int64, const struct RenderTargetPresentParameters *, const struct RenderTargetPresentParameters *))v11)(
                  v10,
                  a2,
                  a3,
                  v5);
        v7 = v12;
        v13 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x18Bu);
          goto LABEL_21;
        }
        if ( *((_BYTE *)this + 851) )
        {
          v16 = (unsigned int)(v12 - 142213121);
          if ( (unsigned int)v16 > 0x2E || (v17 = 0x400000000201LL, !_bittest64(&v17, v16)) )
            v13 = 142213129;
        }
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x18Du);
        v14 = *((_QWORD *)this + 105);
        if ( v14 )
          *(_BYTE *)(v14 + 1194) = 0;
      }
      *((_QWORD *)this + 66) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
    }
  }
  *((_BYTE *)this + 857) = 0;
LABEL_21:
  *((_BYTE *)this + 849) = 0;
  return CHwndRenderTarget::HandleWindowErrors(this, v7);
}
