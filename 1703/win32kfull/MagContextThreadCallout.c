/*
 * XREFs of MagContextThreadCallout @ 0x1C01EBC20
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C011CB80 (MagContextDestroy.c)
 *     MagControl @ 0x1C01EBE38 (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C005D1E4 (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C024B1F0 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024B29C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C024B378 (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *ThreadContext; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && (_DWORD)a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( v7[3] == -1LL )
      {
        v11 = *(_QWORD *)(ThreadContext[2] + 408LL);
        if ( *(_QWORD **)(v11 + 232) == v7 )
        {
          v12 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v11 + 8), a2, a3, a4);
          DwmAsyncMagnSetDesktopColorTransform(v12);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 408LL) + 232LL) = 0LL;
        }
        v13 = *(_QWORD *)(ThreadContext[2] + 408LL);
        if ( *(_QWORD **)(v13 + 224) == v7 )
        {
          v14 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v13 + 8), a2, a3, a4);
          DwmAsyncMagnSetDesktopTransform(v14, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 408LL) + 224LL) = 0LL;
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
          v10 = (void *)ReferenceDwmApiPort(v8, a2, **(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 8LL), a4);
          DwmAsyncMagnDestroy(v10);
        }
        if ( v7[3] )
          HMAssignmentUnlock(v7 + 3);
      }
      v15 = v7[29];
      if ( v15 )
        Win32FreePool(v15);
      v16 = v7[32];
      if ( v16 )
        Win32FreePool(v16);
      Win32FreePool(v7);
    }
    v17 = *ThreadContext;
    v18 = (_QWORD *)ThreadContext[1];
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext || (_QWORD *)*v18 != ThreadContext )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    Win32FreePool(ThreadContext);
    *(_DWORD *)(a2 + 1096) &= ~8u;
  }
}
