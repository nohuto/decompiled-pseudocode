/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C013E914
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C013E7F4 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0140210 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1C013EA40 (DwmAsyncDxBindSwapChain.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  unsigned int v3; // ebx
  CompositionObject *v4; // rcx
  void *v5; // rax
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v4 = (CompositionObject *)*((_QWORD *)this + 2);
    v7 = 0LL;
    if ( !v4 || (int)CompositionObject::OpenDwmHandle(v4, &v7) >= 0 )
    {
      v5 = (void *)ReferenceDwmApiPort(v4);
      LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v5) >= 0;
    }
  }
  return v3;
}
