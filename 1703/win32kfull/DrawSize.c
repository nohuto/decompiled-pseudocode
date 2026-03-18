/*
 * XREFs of DrawSize @ 0x1C020ED64
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C0239024 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  int v8; // edx
  int v9; // edx
  int v10; // edi
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  _DWORD v15[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 65) & 0x40) == 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v8 = *(_DWORD *)(gpsi + 1888LL);
    else
      v8 = *(_DWORD *)(gpsi + 2276LL);
    a3 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - v8 - a3;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v9 = *(_DWORD *)(gpsi + 1892LL);
  else
    v9 = *(_DWORD *)(gpsi + 2280LL);
  v10 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132) - v9 - a4;
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29A )
    v11 = (*(_BYTE *)(a1 + 68) & 0x10) == 0;
  else
    v11 = SizeBoxHwnd(a1) == 0;
  if ( !v11 )
    return BitBltSysBmp(a2, a3, v10, (*(_BYTE *)(a1 + 65) & 0x40) != 0 ? 91 : 45);
  v15[0] = a3;
  v15[1] = v10;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v12 = *(_DWORD *)(gpsi + 1888LL);
  else
    v12 = *(_DWORD *)(gpsi + 2276LL);
  v15[2] = v12;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v13 = *(_DWORD *)(gpsi + 1892LL);
  else
    v13 = *(_DWORD *)(gpsi + 2280LL);
  v15[3] = v13;
  v16 = *(_QWORD *)(gpsi + 5208LL);
  return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v15, 1u);
}
