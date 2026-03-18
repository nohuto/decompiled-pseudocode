/*
 * XREFs of ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x18006CDF0
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18003A360 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwndRenderTarget::AdvanceFrame(CHwndRenderTarget *this, __int64 a2, char a3)
{
  CHwDisplayRenderTarget *v3; // rcx
  void (*v4)(void); // rax

  if ( !*((_BYTE *)this + 725) )
  {
    v3 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 7);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 192LL);
      if ( (char *)v4 == (char *)CHwDisplayRenderTarget::AdvanceFrame )
        CHwDisplayRenderTarget::AdvanceFrame(v3, a2, a3);
      else
        v4();
    }
  }
}
