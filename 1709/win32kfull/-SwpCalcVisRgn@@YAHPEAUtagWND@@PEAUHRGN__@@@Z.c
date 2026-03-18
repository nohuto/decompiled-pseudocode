/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0067FFC (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C0090250 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C0090300 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  char v2; // al
  int v4; // ebx
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v6; // rdi
  unsigned int v7; // r9d
  __int64 RedirectionBitmap; // rax
  BOOL v9; // r8d
  int v10; // r9d
  HRGN v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v2 = *((_BYTE *)a1 + 71);
  if ( (v2 & 0x10) != 0 )
  {
    v4 = (4 * (v2 & 4)) | 1;
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent();
    v6 = LayeredOrRedirectedParent;
    v7 = v4;
    if ( !LayeredOrRedirectedParent || (*(_DWORD *)(LayeredOrRedirectedParent + 64) & 0x20000000) == 0 )
      return CalcVisRgn(&v12, (__int64)a1, a1, v7);
    RedirectionBitmap = GetRedirectionBitmap(LayeredOrRedirectedParent);
    v9 = RedirectionBitmap != 0;
    if ( RedirectionBitmap )
    {
      if ( (unsigned int)IsMinimizedSausageWindow((struct tagWND *const)v6) )
      {
        v7 = v4;
        return CalcVisRgn(&v12, (__int64)a1, a1, v7);
      }
      if ( (*(_DWORD *)(v6 + 304) & 0x20) != 0 && *(_WORD *)(v6 + 324) < 0xA00u
        || (unsigned int)IsShellProcess(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 400LL)) )
      {
        v10 = 1;
      }
      if ( v10 )
        v9 = 0;
    }
    v7 = v4;
    if ( v9 )
      v7 = v4 | 0x4000;
    return CalcVisRgn(&v12, (__int64)a1, a1, v7);
  }
  return 0LL;
}
