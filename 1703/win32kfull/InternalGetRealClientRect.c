/*
 * XREFs of InternalGetRealClientRect @ 0x1C00EF82C
 * Callers:
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     SetTiledRect @ 0x1C00EF694 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 */

char __fastcall InternalGetRealClientRect(__int64 a1, int *a2, char a3, __int64 a4, int a5)
{
  __int64 v8; // rdi
  signed int v9; // eax
  __int128 v10; // xmm0
  char CurrentThreadDpiAwarenessContext; // al

  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
  {
    if ( a4 )
      v8 = *(_QWORD *)(a4 + 40);
    else
      v8 = *(_QWORD *)(*(_QWORD *)(GetDispInfo() + 88) + 40LL);
    if ( a5 || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
    {
      LOBYTE(v9) = -(a3 & 4);
      v10 = *(_OWORD *)((-(__int64)((a3 & 4) != 0) & 0xFFFFFFFFFFFFFFD0uLL) + v8 + 76);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
    {
      LOBYTE(v9) = -(a3 & 4);
      v10 = *(_OWORD *)((-(__int64)((a3 & 4) != 0) & 0xFFFFFFFFFFFFFFD0uLL) + v8 + 108);
    }
    else
    {
      LOBYTE(v9) = -(a3 & 4);
      v10 = *(_OWORD *)((-(__int64)((a3 & 4) != 0) & 0xFFFFFFFFFFFFFFD0uLL) + v8 + 92);
    }
    *(_OWORD *)a2 = v10;
  }
  else
  {
    LOBYTE(v9) = GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v9 = *(_DWORD *)(gpsi + 1892LL);
        else
          v9 = *(_DWORD *)(gpsi + 2280LL);
        a2[3] += v9;
      }
      if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
          v9 = *(_DWORD *)(gpsi + 1888LL);
        else
          v9 = *(_DWORD *)(gpsi + 2276LL);
        a2[2] += v9;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2104LL) >= 0 )
    {
      if ( v9 <= 1 )
      {
        v9 = *(_DWORD *)(gpsi + 2072LL);
        a2[3] -= v9;
        return v9;
      }
      if ( v9 <= 3 )
      {
        v9 = *(_DWORD *)(gpsi + 2072LL);
        a2[1] += v9;
        return v9;
      }
      if ( v9 != 4 )
      {
        if ( v9 == 5 )
        {
LABEL_34:
          v9 = *(_DWORD *)(gpsi + 2068LL);
          a2[2] -= v9;
          return v9;
        }
        if ( v9 != 6 )
        {
          if ( v9 != 7 )
            return v9;
          goto LABEL_34;
        }
      }
      v9 = *(_DWORD *)(gpsi + 2068LL);
      *a2 += v9;
    }
  }
  return v9;
}
