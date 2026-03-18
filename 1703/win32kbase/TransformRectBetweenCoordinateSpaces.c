/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C0072150
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C007290C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00DE394 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v8; // esi
  struct tagRECT v9; // xmm0
  unsigned int v10; // ebx
  __int64 v12; // r15
  LONG right; // r13d
  LONG top; // r12d
  int v15; // eax
  LONG v16; // r15d
  LONG v17; // edi
  __int64 v18; // rax
  LONG v19; // eax
  LONG bottom; // eax
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  int v25; // eax
  LONG v26; // r13d
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct tagMONITOR *v30; // rax
  int v31; // [rsp+30h] [rbp-89h]
  LONG left; // [rsp+40h] [rbp-79h]
  __int128 v34; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v37; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v39; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 368);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 368);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  v9 = *a2;
  v31 = 0;
  *(_QWORD *)&v39.left = 0LL;
  *(_QWORD *)&v39.right = 0LL;
  v10 = 0;
  *(_QWORD *)&v37.left = 0LL;
  *(_QWORD *)&v37.right = 0LL;
  v38 = v9;
  if ( (((unsigned __int8)CurrentThreadDpiAwarenessContext ^ (unsigned __int8)v8) & 0xF) == 0
    || (a2->left >= a2->right || a2->top >= a2->bottom) && !a2->left && !a2->top )
  {
    *a1 = v9;
    return 0LL;
  }
  v12 = *((_QWORD *)gpDispInfo + 12);
  if ( !v12 )
    goto LABEL_54;
  right = v37.right;
  top = v37.top;
  left = v37.left;
  do
  {
    v34 = (__int128)*ExpandedMonitorRect(&v35, (struct tagMONITOR *)v12, v8);
    if ( (unsigned int)IntersectRect(&v36.left, (int *)&v34, &a2->left) )
    {
      if ( v31 )
      {
        v19 = left;
        if ( left >= v36.left )
          v19 = v36.left;
        left = v19;
        if ( top >= v36.top )
          top = v36.top;
        v37.left = v19;
        bottom = v37.bottom;
        if ( right <= v36.right )
          right = v36.right;
        v37.top = top;
        if ( v37.bottom <= v36.bottom )
          bottom = v36.bottom;
        v37.bottom = bottom;
        v37.right = right;
      }
      else
      {
        v37 = v36;
        right = v36.right;
        top = v36.top;
        left = v36.left;
      }
      v10 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               &v36,
               &v36,
               CurrentThreadDpiAwarenessContext,
               v8,
               (struct tagMONITOR *)v12);
      if ( !v31 )
      {
        v15 = 1;
        v39 = v36;
        v31 = 1;
        goto LABEL_19;
      }
      v21 = v39.left;
      if ( v39.left >= v36.left )
        v21 = v36.left;
      v39.left = v21;
      v22 = v39.top;
      if ( v39.top >= v36.top )
        v22 = v36.top;
      v39.top = v22;
      v23 = v39.right;
      if ( v39.right <= v36.right )
        v23 = v36.right;
      v39.right = v23;
      v24 = v39.bottom;
      if ( v39.bottom <= v36.bottom )
        v24 = v36.bottom;
      v39.bottom = v24;
    }
    v15 = v31;
LABEL_19:
    v12 = *(_QWORD *)(v12 + 56);
  }
  while ( v12 );
  if ( v15 )
  {
    v16 = v38.left;
    v17 = v38.right;
    v18 = *(_QWORD *)&v37.left - *(_QWORD *)&v38.left;
    if ( *(_QWORD *)&v37.left == *(_QWORD *)&v38.left )
      v18 = *(_QWORD *)&v37.right - *(_QWORD *)&v38.right;
    if ( v18 )
    {
      if ( left > v38.left )
      {
        v36.top = v38.top;
        v36.right = left;
        v36.bottom = v38.bottom;
        v36.left = v38.left;
        v25 = TransformOffscreenAdjacentRect(&v37, &v39, &v36, CurrentThreadDpiAwarenessContext, v8);
        right = v37.right;
        v10 |= v25;
        top = v37.top;
      }
      if ( right >= v17 )
      {
        v26 = v38.bottom;
      }
      else
      {
        v36.left = right;
        v26 = v38.bottom;
        v36.bottom = v38.bottom;
        v36.top = v38.top;
        v36.right = v17;
        v27 = TransformOffscreenAdjacentRect(&v37, &v39, &v36, CurrentThreadDpiAwarenessContext, v8);
        top = v37.top;
        v10 |= v27;
      }
      if ( top > v38.top )
      {
        v38.left = v16;
        v38.right = v17;
        v38.bottom = top;
        v10 |= TransformOffscreenAdjacentRect(&v37, &v39, &v38, CurrentThreadDpiAwarenessContext, v8);
      }
      if ( v37.bottom < v26 )
      {
        v38.left = v16;
        v38.top = v37.bottom;
        v38.right = v17;
        v38.bottom = v26;
        v28 = TransformOffscreenAdjacentRect(&v37, &v39, &v38, CurrentThreadDpiAwarenessContext, v8);
        goto LABEL_56;
      }
    }
    goto LABEL_24;
  }
LABEL_54:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    v29 = MonitorFlagsFromDpiAwarenessContext(v8);
    v30 = (struct tagMONITOR *)_MonitorFromRect(a2, v29 | 2u);
    v28 = TransformRectBetweenCoordinateSpacesPerMonitor(&v39, a2, CurrentThreadDpiAwarenessContext, v8, v30);
LABEL_56:
    v10 |= v28;
  }
LABEL_24:
  *a1 = v39;
  return v10;
}
