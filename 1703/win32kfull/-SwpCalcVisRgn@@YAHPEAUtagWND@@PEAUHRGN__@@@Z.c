/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0025E60
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00682F4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetLayeredOrRedirectedParent @ 0x1C0025F20 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C0025FD0 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v3; // rdi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent();
  v3 = (struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(LayeredOrRedirectedParent + 64) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
