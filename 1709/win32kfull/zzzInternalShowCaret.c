/*
 * XREFs of zzzInternalShowCaret @ 0x1C0064398
 * Callers:
 *     NtUserShowCaret @ 0x1C0064190 (NtUserShowCaret.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x1C020DDE4 (zzzShowCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00861CC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  v1 = *(_DWORD *)(v0 + 300);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 300) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 296) ^ ((unsigned __int8)*(_DWORD *)(v0 + 296) ^ (unsigned __int8)(*(_DWORD *)(v0 + 296) >> 1)) & 1;
      *(_DWORD *)(v0 + 296) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 288), (struct tagQ *)v0);
      xxxWindowEvent(32770, *(_QWORD *)(v0 + 288), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 296);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 296) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
