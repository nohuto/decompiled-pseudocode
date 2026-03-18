/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C021342C
 * Callers:
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 */

__int64 __fastcall TryRect(
        int a1,
        int right,
        int bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  unsigned int v12; // ebp
  int *v13; // rcx
  int v14; // ebx
  int v15; // ebx
  bool v16; // cc
  bool v18; // cc
  int v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v13 = (int *)(*((_QWORD *)a8 + 5) + 92LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v13 = (int *)(*((_QWORD *)a8 + 5) + 108LL);
  }
  else
  {
    v13 = (int *)(*((_QWORD *)a8 + 5) + 76LL);
  }
  if ( !a1 )
  {
    right = a6->left - a4;
    v18 = right < *v13;
LABEL_20:
    if ( v18 )
      return 0LL;
    goto LABEL_21;
  }
  v14 = a1 - 1;
  if ( !v14 )
  {
    bottom = a6->top - a5;
    v18 = bottom < v13[1];
    goto LABEL_20;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_21;
    bottom = a6->bottom;
    v16 = bottom + a5 <= v13[3];
  }
  else
  {
    right = a6->right;
    v16 = right + a4 <= v13[2];
  }
  if ( !v16 )
    return 0LL;
LABEL_21:
  v19[2] = right + a4;
  v19[3] = bottom + a5;
  v19[0] = right;
  a7->x = right;
  a7->y = bottom;
  v19[1] = bottom;
  LOBYTE(v12) = (unsigned int)IntersectRect(v19, v19, &a6->left) == 0;
  return v12;
}
