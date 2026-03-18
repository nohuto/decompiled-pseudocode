/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BF190
 * Callers:
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectAroundPoint @ 0x1C01C09B4 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        struct _MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  INT v10; // r8d
  INT v11; // edx
  int v12; // ecx

  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 292));
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    if ( a4 )
    {
      v10 = a2->bottom - a2->top;
      v11 = a4->bottom - a4->top;
    }
    else
    {
      v10 = a3;
      v11 = a6;
    }
    v12 = *((_DWORD *)a1 + 39) - EngMulDiv(*((_DWORD *)a1 + 39), v11, v10);
    a5->bottom += v12;
    a5->top += v12;
  }
}
