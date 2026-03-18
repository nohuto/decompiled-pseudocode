/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C005D840
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005DA28 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C005DEF0 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C005DF44 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00E4F4C (TransformOffscreenAdjacentRect.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v8; // edi
  struct tagRECT v9; // xmm0
  unsigned int v10; // ebx
  __int64 v11; // r15
  int right; // r13d
  int top; // r12d
  int v14; // eax
  int v15; // esi
  LONG v16; // r15d
  __int64 v17; // rax
  int v19; // eax
  unsigned int bottom; // eax
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  int v25; // eax
  int v26; // r13d
  int v27; // eax
  int v28; // eax
  char v29; // al
  int v30; // [rsp+30h] [rbp-89h]
  int left; // [rsp+40h] [rbp-79h]
  __int128 v33; // [rsp+58h] [rbp-61h] BYREF
  tagRECT v34; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v35; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v36; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v38; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 368);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 368);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  v9 = *a2;
  v30 = 0;
  v38 = (struct tagRECT)0LL;
  v10 = 0;
  v36 = (struct tagRECT)0LL;
  v37 = v9;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) == 0
    || (unsigned int)IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v9;
    return 0LL;
  }
  v11 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v11 )
    goto LABEL_53;
  right = v36.right;
  top = v36.top;
  left = v36.left;
  do
  {
    v33 = (__int128)*ExpandedMonitorRect(&v34, (struct tagMONITOR *)v11, v8);
    if ( (unsigned int)IntersectRect(&v35, (int *)&v33, &a2->left) )
    {
      if ( v30 )
      {
        v19 = left;
        if ( left >= v35.left )
          v19 = v35.left;
        left = v19;
        if ( top >= v35.top )
          top = v35.top;
        v36.left = v19;
        bottom = v36.bottom;
        if ( right <= v35.right )
          right = v35.right;
        v36.top = top;
        if ( v36.bottom <= v35.bottom )
          bottom = v35.bottom;
        *(_QWORD *)&v36.right = __PAIR64__(bottom, right);
      }
      else
      {
        v36 = v35;
        right = v35.right;
        top = v35.top;
        left = v35.left;
      }
      v10 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v35,
               (unsigned int)&v35,
               CurrentThreadDpiAwarenessContext,
               v8,
               v11);
      if ( !v30 )
      {
        v14 = 1;
        v38 = v35;
        v30 = 1;
        goto LABEL_14;
      }
      v21 = v38.left;
      if ( v38.left >= v35.left )
        v21 = v35.left;
      v38.left = v21;
      v22 = v38.top;
      if ( v38.top >= v35.top )
        v22 = v35.top;
      v38.top = v22;
      v23 = v38.right;
      if ( v38.right <= v35.right )
        v23 = v35.right;
      v38.right = v23;
      v24 = v38.bottom;
      if ( v38.bottom <= v35.bottom )
        v24 = v35.bottom;
      v38.bottom = v24;
    }
    v14 = v30;
LABEL_14:
    v11 = *(_QWORD *)(v11 + 56);
  }
  while ( v11 );
  if ( v14 )
  {
    v15 = v37.right;
    v16 = v37.left;
    v17 = *(_QWORD *)&v36.left - *(_QWORD *)&v37.left;
    if ( *(_QWORD *)&v36.left == *(_QWORD *)&v37.left )
      v17 = *(_QWORD *)&v36.right - *(_QWORD *)&v37.right;
    if ( v17 )
    {
      if ( left > v37.left )
      {
        *(_QWORD *)&v35.right = __PAIR64__(v37.bottom, left);
        *(_QWORD *)&v35.left = *(_QWORD *)&v37.left;
        v25 = TransformOffscreenAdjacentRect(&v36, &v38, &v35, CurrentThreadDpiAwarenessContext, v8);
        right = v36.right;
        v10 |= v25;
        top = v36.top;
      }
      if ( right >= v15 )
      {
        v26 = v37.bottom;
      }
      else
      {
        *(_QWORD *)&v35.left = __PAIR64__(v37.top, right);
        v26 = v37.bottom;
        *(_QWORD *)&v35.right = __PAIR64__(v37.bottom, v15);
        v27 = TransformOffscreenAdjacentRect(&v36, &v38, &v35, CurrentThreadDpiAwarenessContext, v8);
        top = v36.top;
        v10 |= v27;
      }
      if ( top > v37.top )
      {
        v37.left = v16;
        *(_QWORD *)&v37.right = __PAIR64__(top, v15);
        v10 |= TransformOffscreenAdjacentRect(&v36, &v38, &v37, CurrentThreadDpiAwarenessContext, v8);
      }
      if ( v36.bottom < v26 )
      {
        *(_QWORD *)&v37.left = __PAIR64__(v36.bottom, v16);
        *(_QWORD *)&v37.right = __PAIR64__(v26, v15);
        v28 = TransformOffscreenAdjacentRect(&v36, &v38, &v37, CurrentThreadDpiAwarenessContext, v8);
        goto LABEL_55;
      }
    }
    goto LABEL_19;
  }
LABEL_53:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    v29 = _MonitorFromRect(a2, 2LL, v8);
    v28 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v38,
            (_DWORD)a2,
            CurrentThreadDpiAwarenessContext,
            v8,
            v29);
LABEL_55:
    v10 |= v28;
  }
LABEL_19:
  *a1 = v38;
  return v10;
}
