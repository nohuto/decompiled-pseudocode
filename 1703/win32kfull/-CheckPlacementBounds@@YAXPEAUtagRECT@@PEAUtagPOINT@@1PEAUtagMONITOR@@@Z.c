/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0101490
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  LONG *v8; // rdx
  LONG top; // ebp
  int v10; // edi
  LONG v11; // r11d
  int v12; // r9d
  LONG bottom; // ecx
  int v14; // r10d
  LONG left; // r15d
  int v16; // esi
  LONG right; // r8d
  LONG x; // r8d
  LONG y; // eax
  LONG v20; // ecx
  int v21; // r10d
  int v22; // r9d
  int v23; // ecx
  int v24; // r9d
  LONG v25; // r11d
  int v26; // eax
  int v27; // ecx
  LONG v28; // ecx
  int v29; // r8d

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v8 = (LONG *)(*((_QWORD *)a4 + 5) + 92LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v8 = (LONG *)(*((_QWORD *)a4 + 5) + 108LL);
  }
  else
  {
    v8 = (LONG *)(*((_QWORD *)a4 + 5) + 76LL);
  }
  top = a1->top;
  v10 = -1;
  v11 = v8[1];
  if ( top < v11 )
    v12 = -1;
  else
    v12 = top > v8[3];
  bottom = a1->bottom;
  if ( bottom < v11 )
    v14 = -1;
  else
    v14 = bottom > v8[3];
  left = a1->left;
  if ( a1->left < *v8 )
    v16 = -1;
  else
    v16 = left > v8[2];
  right = a1->right;
  if ( right >= *v8 )
    v10 = right > v8[2];
  if ( v12 * v14 > 0 || v16 * v10 > 0 )
  {
    if ( v12 >= 0 )
    {
      if ( v14 > 0 )
      {
        v27 = bottom - top;
        if ( v8[3] - v27 > v11 )
          v11 = v8[3] - v27;
        a1->top = v11;
        a1->bottom = v11 + v27;
      }
    }
    else
    {
      a1->bottom = bottom - top;
      a1->top = v8[1];
    }
    if ( v16 >= 0 )
    {
      if ( v10 > 0 )
      {
        v28 = *v8;
        v29 = right - left;
        if ( v8[2] - v29 > *v8 )
          v28 = v8[2] - v29;
        a1->left = v28;
        a1->right = v28 + v29;
      }
    }
    else
    {
      a1->right = right - left;
      a1->left = *v8;
    }
  }
  x = a2->x;
  if ( a2->x != -1 )
  {
    y = a2->y;
    v20 = v8[1];
    v21 = y >= v20 ? y > v8[3] : -1;
    v22 = y + *(_DWORD *)(gpsi + 2072LL);
    v23 = v22 >= v20 ? v22 > v8[3] : -1;
    v24 = x >= *v8 ? x > v8[2] : -1;
    v25 = x + *(_DWORD *)(gpsi + 2068LL);
    v26 = v25 >= *v8 ? v25 > v8[2] : -1;
    if ( v21 * v23 > 0 || v24 * v26 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && (*v8 + a3->x >= v8[2] || v8[1] + a3->y >= v8[3]) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
