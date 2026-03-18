/*
 * XREFs of SetTiledRect @ 0x1C00EF694
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     InternalGetRealClientRect @ 0x1C00EF82C (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // r10d
  int v14; // r9d
  int v15; // r11d
  int v16; // r8d
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  __int64 result; // rax
  int v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+34h] [rbp-24h]
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+3Ch] [rbp-1Ch]

  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v21, 2, v6, 0);
  ++*(_WORD *)(a3 + 114);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v7 = *(_DWORD *)(gpsi + 2008LL);
  else
    v7 = *(_DWORD *)(gpsi + 2396LL);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v8 = *(_DWORD *)(gpsi + 2000LL);
  else
    v8 = *(_DWORD *)(gpsi + 2388LL);
  v9 = v8 + v7;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v10 = *(_DWORD *)(gpsi + 2012LL);
  else
    v10 = *(_DWORD *)(gpsi + 2400LL);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v11 = *(_DWORD *)(gpsi + 2004LL);
  else
    v11 = *(_DWORD *)(gpsi + 2392LL);
  v12 = v11 + v10;
  v13 = v23 - v21;
  v14 = v24;
  v15 = v22;
  v16 = v9 * *(__int16 *)(a3 + 114);
  v17 = v12 * *(__int16 *)(a3 + 114);
  if ( v16 > (v23 - v21) / 4 || v17 > (v24 - v22) / 4 )
  {
    *(_WORD *)(a3 + 114) = 0;
    v16 = v9;
    v17 = v12;
  }
  v18 = v21 + v16;
  *a2 = v18;
  v19 = v15 + v17;
  a2[2] = v18 + (v13 + 2 * (v13 + 1)) / 4;
  a2[1] = v19;
  result = (unsigned int)(v19 + (v14 - v15 + 2 * (v14 - v15 + 1)) / 4);
  a2[3] = result;
  return result;
}
