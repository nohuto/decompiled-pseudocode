/*
 * XREFs of MagContextThreadCallout @ 0x1C01A8010
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C0126860 (MagContextDestroy.c)
 *     MagControl @ 0x1C01A8228 (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C006037C (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C024CA50 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024CAFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C024CC88 (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *ThreadContext; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( v7[3] == -1LL )
      {
        v11 = *(_QWORD *)(ThreadContext[2] + 432LL);
        if ( *(_QWORD **)(v11 + 232) == v7 )
        {
          v12 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v11 + 8));
          DwmAsyncMagnSetDesktopColorTransform(v12);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 432LL) + 232LL) = 0LL;
        }
        v13 = *(_QWORD *)(ThreadContext[2] + 432LL);
        if ( *(_QWORD **)(v13 + 224) == v7 )
        {
          v14 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v13 + 8));
          DwmAsyncMagnSetDesktopTransform(v14, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 432LL) + 224LL) = 0LL;
        }
      }
      else
      {
        if ( (v7[2] & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          *((_DWORD *)v7 + 4) &= ~0x40u;
        }
        if ( (v7[2] & 0x20) == 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(v9);
          DwmAsyncMagnDestroy(v10);
        }
        if ( v7[3] )
          HMAssignmentUnlock(v7 + 3);
      }
      v15 = v7[29];
      if ( v15 )
        Win32FreePool(v15, a2, a3);
      v16 = v7[32];
      if ( v16 )
        Win32FreePool(v16, a2, a3);
      Win32FreePool(v7, a2, a3);
    }
    v17 = *ThreadContext;
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext
      || (v18 = (_QWORD *)ThreadContext[1], (_QWORD *)*v18 != ThreadContext) )
    {
      __fastfail(3u);
    }
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    Win32FreePool(ThreadContext, a2, a3);
    *(_DWORD *)(a2 + 1184) &= ~8u;
  }
}
